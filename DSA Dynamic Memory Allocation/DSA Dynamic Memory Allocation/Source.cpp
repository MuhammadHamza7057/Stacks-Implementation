#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool ispalindrome(string word) {
	stack<char>s;
	int lenght = word.length();
	string str1 = "";

	// this for loop is used for the push words to stacks

	for (int i = 0; i < lenght; i++) {
		s.push(word[i]);
	}

	// this for loop is used for pop from the stacks

	for (int i = 0; i < lenght; i++) {
		char topcharc = s.top();
		s.pop();

		/*if (word[i] != topcharc) {
			return false;
		}
		else {
			return true;
		}*/
		str1 += topcharc;

	}
	if(word==str1)
	{
		//cout << "THIS@!!!!!!!!" << endl;
		return true;
	}
	else
	{
		return false;
	}

}

int main() {
	string word ;
	cout << "Enter the Word this program will check that this is palindrome or not : ";
	cin >> word;

	if (ispalindrome(word)) {
		cout << word<<" :: is palindrome" << endl;
	}
	else
	{
		cout << word<<" :: not a palindrome" << endl;
	}



	return 0;
}