#include <iostream>
using namespace std;

void printIntro(string topic, string time)
{
	cout << "Topic : " << topic << endl;
	cout << "Author : Jitendra Kumar Sahu" << endl;
	cout << "Time : " << time << endl;
	cout << "_____________________*_____________________" << endl;
}

class Student
{
	int roll, marks[5];
	string name;

public:
	void getData();
	void showData();
	void totalMarks();
};

void Student ::getData()
{
	cout << "enter roll , name : ";
	cin >> roll;
	getline(cin, name);
//	getline(cin, name);
	cout << "enter five marks : ";
	for (int i = 0; i < 5; i++)
	{
		cin >> marks[i];
	}
}

void Student ::showData()
{
	cout << "roll : " << roll << endl;
	cout << "name : " << name << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "marks : " << (i + 1) << " " << marks[i] << endl;
	}
}

void Student ::totalMarks()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += marks[i];
	}
	cout << "Total marks : " << sum << endl;
}

int main()
{

	printIntro("Class student", "02-11-23 20:49");

	Student jitendra;

	jitendra.getData();
	jitendra.showData();
	jitendra.totalMarks();
	return 0;
}
