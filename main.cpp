
/**
 * You probably shouldn't edit this file.
 * It will not be graded, and provides a quick standard way to test your code.
 * 
 * If you wish to write a custom program while you develop,
 * 	use the sandbox.cpp file instead.
 */

//
#include "MyStack.hpp"
#include "MyQueue.hpp"
#include "MyDetector.hpp"


//
#include <iostream>
#include <string>


//
using CPSC131::PalindromeDetector::MyDetector;
using std::cin, std::cout, std::endl;
using std::string, std::to_string;

//
int main()
{
	/*
	//
	cout << "Welcome to my Palindrome Detector!" << endl;
	
	//
	cout << "Brought to you by Gibsen Montgomery Gibson" << endl;
	
	cout << endl;
	
	//
	MyDetector d;
	string s;
	while (true)
	{
		//
		cout << "Please enter a string (q to quit): ";
		cin >> s;
		
		//
		if ( s == "q" || s == "Q" ) {
			break;
		}
		
		//
		cout << "Your input: " << s << endl;
		if ( d.isPalindrome(s) == true ) {
			cout << "You have entered a palindrome!" << endl;
		}
		else {
			cout << "You have not entered a palindrome. How boring and sad; and sad and boring." << endl;
		}
		
		cout << endl;
	}
	
	//
	cout << "Thank you for using this program. Goodbyte!" << endl;
*/
	 std::string s1 = "o";
	std::string s2 = "iO i";
	std::string s3 = "Hel lOooo";
	std::string s4 = "kkkHelo lehkkk";
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	MyDetector detect;
	cout<<detect.isPalindrome(s1)<<endl;
	
	cout<<detect.isPalindrome(s2)<<endl;
	
	cout<<detect.isPalindrome(s3)<<endl;
	
	cout<<detect.isPalindrome(s4)<<endl;
	
	CPSC131::MyStack<char> stack2;
	stack2.push('a');
	stack2.push(' ');
	stack2.push('b');
	cout<<stack2.top()<<endl;
	cout<<stack2.size()<<endl;
	stack2.pop();
	cout<<stack2.top()<<endl;
	cout<<stack2.size()<<endl;
	stack2.pop();
	cout<<stack2.top()<<endl;
	cout<<stack2.size()<<endl;
	

	
	
	return 0;
}








