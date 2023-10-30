#ifndef CPSC131_MYSTACK_HPP
#define CPSC131_MYSTACK_HPP


/**
 * TODO: Complete this class
 */


//
#include <forward_list>
#include <stdexcept>


//
namespace CPSC131
{
	///	Complete your custom MyStack using an std::forward_list under the hood.
	template <class T>
	class MyStack
	{
		//
		public:
			
			/// YOUR WELCOME
			MyStack() {}
			
			/**
			 * push()
			 * 
			 * Takes an item and pushes it onto the stack.
			 */
			
			void push(const T& item)
			{
				list.push_front(item);
				size_++;
			}
			
			
			/**
			 * Removes the next item from the stack
			 * 
			 * Does not return a value
			 * 
			 * If the stack is empty: throw an std::range_error
			 */
			void pop()
			{
				if(size_==0)
				{
					throw std::range_error("Nothing to pop");
				}
				else
				{
					list.pop_front();
					size_--;
				}
			}
			
			
			T pop1()
			{
				if(size_==0)
				{
					throw std::range_error("Nothing to pop");
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
			 * Peek at the top of the stack
			 * 
			 * Does not remove anything.
			 * 
			 * If the stack is empty: throw an std::range_error
			 */
			T& top()
			{
				if(size_==0)
				{
					throw std::range_error("Top does not exist");
				}
				else
				{
					return list.front();
				}
			}
			
			/**
			 * Remove all items from the stack
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
			 * Return the number of items in the stack
			 */
			size_t size()
			{
				return size_;
			}
			
			/**
			 * Return true if the stack is empty, false otherwise
			 */
			bool empty()
			{
				if(size_==0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			
		//
		private:
			
			/**
			 * Do not change these privates.
			 * You may add additional privates below this block, if you wish.
			 */
			std::forward_list<T> list;
			size_t size_ = 0;
			/******************************/
	};
}







#endif
