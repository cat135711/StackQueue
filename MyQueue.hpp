#ifndef CPSC131_MYQUEUE_HPP
#define CPSC131_MYQUEUE_HPP


/**
 * TODO: Complete this class
 */


//
#include <list>
#include <stdexcept>


//
namespace CPSC131
{
	//
	template <class T>
	class MyQueue
	{
		//
		public:
			
			///	 YOUR WELCOME
			MyQueue() {}
			
			/**
			 * enqueue()
			 * 
			 * Takes an item and puts it into the queue
			 */
			void enqueue(const T& item)
			{
				list.push_back(item);
				size_++;
			}
			
			/**
			 * Removes the next item from the queue
			 * 
			 * Does not return a value
			 * 
			 * If the queue is empty: throw an std::range_error
			 */
			
			 
			void dequeue()
			{
				if(size_==0)
				{
					throw std::range_error("Nothing to dequeue");
				}
				else
				{
					list.pop_front();
					size_--;
				}
			}
			
			
				T dequeue1()
			{
				if(size_==0)
				{
					throw std::range_error("Nothing to dequeue");
				}
				else
				{
					T item = list.front();
					list.pop_front();
					size_--;
					return item;
				}
			}
			
			
			
			/**
			 * Peek at the front of the queue
			 * 
			 * Does not remove anything.
			 * 
			 * If the queue is empty: throw an std::range_error
			 */
			const T& front()
			{
				if(size_==0)
				{
					throw std::range_error("Front does not exist");
				}
				else
				{
					return list.front();
				}
			}
			
			/**
			 * Remove all items from the queue
			 */
			void clear()
			{
				if(size_!=0)
				{
					list.clear();
					size_=0;
				}
			}
			
			/**
			 * Return the number of items in the queue
			 */
			size_t size() const
			{
				return size_;
			}
			
			/**
			 * Return true if the queue is empty, false otherwise
			 */
			bool empty() const
			{
				if(size_==0)
				return true;
				else
				return false;
			}
		
		//
		private:
			
			/**
			 * Do not change these privates.
			 * You may add additional privates below this block, if you wish.
			 */
			std::list<T> list;
			size_t size_ = 0;
			/******************************/
	};
}









#endif
