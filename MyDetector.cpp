

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
		std::string ss;
		std::string sq;
		size_t count = 0;
		
		for(auto a:s)
		{
			if( isalpha(a) )
			{
				if(a>=60 && a<=90)
				{
					a+=32;
				}
			
				myStack1.push(a);
				myQueue1.enqueue(a);
			
			 }
		}
		
		while (count < s.size() )
		{
			ss[count]=myStack1.pop1();
			sq[count]=myQueue1.dequeue1();
			
			if(ss[count] != sq[count])
			{
				return false;
			}
			
			count++;
		}
		
		return true;
	}
	
}












