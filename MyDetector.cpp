

/**
 * TODO: Complete these class definitions
 */

/// Starter includes (YW)
#include "MyDetector.hpp"
#include "MyStack.hpp"
#include "MyQueue.hpp"

//
namespace CPSC131::PalindromeDetector
{
	/// YOUR WELCOME
	MyDetector::MyDetector() {}
	
	//
	bool MyDetector::isPalindrome(std::string s)
	{
		//	TODO: Your code here
		MyStack<char> myStack1;
		MyQueue<char> myQueue1;
		//std::string ss;
		//std::string sq;
		size_t count = 0;
		size_t count2 = 0;
		for(auto a:s)
		{
			if( isalpha(a) )
			{
				if(a>=60 && a<=90)
				{
					a+=32;
				}
				
				
				if(a !=' ')
				{
				myStack1.push(a);
				myQueue1.enqueue(a);
				count2++;
				}
			
			 }
		}
		
		while (count < count2 )
		{
			/*
			 * //while ( myStack1.size()>=count)
			//{
			ss[count]=myStack1.pop1();
			sq[count]=myQueue1.dequeue1();
			//count++;
			//}
			
	
			
			if(ss[count] != sq[count])
			{
				return false;
			}
			*/
			
			if(myStack1.top() != myQueue1.front())
			{
				return false;
			}
			myStack1.pop();
			myQueue1.dequeue();
			
			count++;
		}
		
		return true;
	}
	
}












