//Lab Exercise 5.18.2021
//Author: 

#include<iostream>
#include <string>
 
using namespace std;
const int SIZE = 3;
 
void permute(char *, int, int);

int main()
{
	string word;
	int i, count = 0;
	cout << "Enter " << SIZE << "letter word to permute: ";
	cin >> word;
	char a[SIZE];

	//Convert C++ string to a C-Style string
	for (i = 0; i < word.length(); i++)
		a[i] = word[i];
 
    permute(a, 0, SIZE);
}

void permute(char *a, int k, int size)
{
	//Add code here

    
}

//Enter a word to permute: cat
//cat
//cta
//act
//atc
//tac
//tca