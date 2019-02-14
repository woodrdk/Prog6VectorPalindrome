// Robert M Wood Jr.
// 2/13/19
// Prog Assignment 6
// Vector Palindromes

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;

bool isPalindrome(const vector<int> & v);

int main() {
	vector<int> v1False{ 1, 2, 3, 4, 1 };
	cout << boolalpha << isPalindrome(v1False) << endl;
	vector<int> v2False{ 1, 2, 3, 4, 2, 1 };
	cout << boolalpha << isPalindrome(v2False) << endl;
	vector<int> v1True{ 1, 2, 3, 2, 1 };
	cout << boolalpha << isPalindrome(v1True) << endl;
	vector<int> v2True{ 1, 2, 3, 3, 2, 1 };
	cout << boolalpha << isPalindrome(v2True) << endl;

	// code i added for testing sake
	//vector<int> v4True{ 1, 2, 3, 4, 2, 1 };
	//cout << boolalpha << isPalindrome(v4True) << endl;
	//vector<int> v3True{ 1, 2, 3, 3, 3, 1 };
	//cout << boolalpha << isPalindrome(v3True) << endl;
	//vector<int> v6True{ 1, 2, 3, 4, 4, 3, 2, 1 };
	//cout << boolalpha << isPalindrome(v6True) << endl;
	//vector<int> v8True{ 1, 1 };
	//cout << boolalpha << isPalindrome(v8True) << endl;
	//vector<int> v9True{ 1 };
	//cout << boolalpha << isPalindrome(v9True) << endl;

	system("pause");
	return 0;
}

bool isPalindrome(const vector<int> & v) {
	auto front = v.begin(); // first element of v.
	auto rear = --v.end(); // last element of v.
	// algorithm:
	// iterators front and rear move towards center.
	// if there is a mismatch, the loop ends.
	// if palindrome, front and rear both get to middle.
	// as long as front and rear elements have the same value
	// and front hasn't gone past rear, increment both.
	for (; *front == *rear && front < rear; ++front, --rear) {
		// *front = value  front = position
	}

	if ( *front == *rear ) {
		return true;
	}
	
	// check positions of front and rear.
	// if there is a mismatch, it will happen
	// before front passes rear.
	return front == rear;
}