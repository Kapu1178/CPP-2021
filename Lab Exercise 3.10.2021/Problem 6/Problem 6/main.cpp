//Lab Exercise 3/10/2021 Problem 6
//Author: 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
#define SIZE 5

//Structure definition
struct studentExam
{
	string name;
	string id;
	int score;
	char grade;

	void print()
	{
		cout << "Name: " << name << endl;
		cout << "Student ID: " << id << endl;
		cout << "Exam Score: " << score << endl;
		cout << "Exam Grade: " << grade << endl << endl;
	}
};


char findGrade(int);
int findHighest(studentExam []);
int findLowest(studentExam []);
double findAverage(studentExam []);

int main()
{
	//Declare variables
	studentExam exams[SIZE];
	int index = 0, max, min;
	double average;
	string dummy;

	//Read in exam data
	ifstream infile;
	infile.open("exams.txt");
	while (!infile.eof())
	{
		//Add code here

	}
	infile.close();

	//Display exam data
	//Add code here


	//Display exam statistics
	max = findHighest(exams);
	min = findLowest(exams);
	average = findAverage(exams);
	cout << "High Score: " << max << endl;
	cout << "Low Score: " << min << endl;
	cout << "Average Score: " << average << endl;
	return 0;
}

char findGrade(int g)
{
	//Add code here

}

int findHighest(studentExam e[])
{
	//Add code here

}

int findLowest(studentExam e[])
{
	//Add code here

}

double findAverage(studentExam e[])
{
	//Add code here

}

//Output
//Name: Babe Ruth
//Student ID: 123
//Exam Score: 87
//Exam Grade: B
//
//Name: Lou Gehrig
//Student ID: 234
//Exam Score: 91
//Exam Grade: A
//
//Name: Frank Jones
//Student ID: 324
//Exam Score: 78
//Exam Grade: C
//
//Name: Mary Richards
//Student ID: 786
//Exam Score: 53
//Exam Grade: F
//
//Name: Alice Charmer
//Student ID: 767
//Exam Score: 65
//Exam Grade: D
//
//High Score: 91
//Low Score: 53
//Average Score: 74.8