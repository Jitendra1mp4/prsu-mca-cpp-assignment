#include <iostream>
using namespace std ;

void printIntro(string topic, string date) {
	cout << "Program topic : "<< topic << endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Date : "<< date << endl ;
	cout <<"-----------------*-----------------"<< endl ;
}

struct Student {
	int roll ;
	string name ;
	int marks ;
};

int main() {

	printIntro("Structure demonstration : storing details of 5 students' ","06-10-23 15:52") ;
	
	int n = 5 ;
	Student s[n] ;
	cout << "Enter student details \n" ;

	for(int i = 0 ; i< n ; i++ ) {
		cout << "Enter roll, name of student "<< (i+1) << " : "<< endl ;

		cin >> s[i].roll ;
		getline(cin,s[i].name) ; // this line is for handling dump
		getline(cin,s[i].name) ;
		cout << "Enter marks : " ;
		cin >> s[i].marks ;
	}

	for(int i = 0 ; i < n ; i++ ) {
		cout << endl << endl<< "Printing record of Student "<< (i+1) << endl ;
		cout << "Roll : "<< s[i].roll << endl ;
		cout << "Name : "<< s[i].name << endl ;
		cout << "Marks : " << s[i].marks << endl ;
	}
	return 0 ;
}
