#pragma once

#include <deque>
#include <mutex>

namespace serenity
{
	namespace net
	{
		template<typename T>
		class tsqueue {
		public:
			tsqueue() = default;
			tsqueue(const tsqueue<T>&) = delete;
			virtual ~tsqueue()
			{
				clear();
			}

			const T& front()
			{
				std::scoped_lock lock(mtxQueue);
				return deqQueue.front();
			}

			const T& back()
			{
				std::scoped_lock lock(mtxQueue);
				return deqQueue.back();
			}

			void push_back(const T& item)
			{
				std::scoped_lock lock(mtxQueue);
				deqQueue.push_back(item);

				std::unique_lock<std::mutex> ul(mtxBlocking);
				cvBlocking.notify_one();
			}

			void push_front(const T& item)
			{
				std::scoped_lock lock(mtxQueue);
				deqQueue.push_front(item);

				std::unique_lock<std::mutex> ul(mtxBlocking);
				cvBlocking.notify_one();
			}

			bool empty()
			{
				std::scoped_lock lock(mtxQueue);
				return deqQueue.empty();
			}

			size_t size()
			{
				std::scoped_lock lock(mtxQueue);
				return deqQueue.size();
			}

			void clear()
			{
				std::scoped_lock lock(mtxQueue);
				return deqQueue.clear();
			}

			T pop_front()
			{
				std::scoped_lock lock(mtxQueue);
				auto t = std::move(deqQueue.front());
				deqQueue.pop_front();
				return t;
			}

			T pop_back()
			{
				std::scoped_lock lock(mtxQueue);
				auto t = std::move(deqQueue.back());
				deqQueue.pop_back();
				return t;
			}

			void wait()
			{
				std::unique_lock<std::mutex> ul(mtxBlocking);
				cvBlocking.wait(ul);
			}

		protected:
			std::mutex mtxQueue;
			std::deque<T> deqQueue;

			std::condition_variable cvBlocking;
			std::mutex mtxBlocking;
		};
	}
}