#include <iostream>
using namespace std ;

void printIntro(string topic, string date) {
	cout << "Program topic : "<< topic << endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Date : "<< date << endl ;
}

struct Date {
	int day, month, year ;
	void getDate() {
		cin >> day >> month >> year ;
//		if (day > 31 or month > 12 ) 
//		cout << "Invalid Date!" ;
//		exit(1) ;
	}
	void printDate() {
		cout << day<< "-" << month << '-' << year << endl ;
	}
};

int main() {

	printIntro("Date using structure","06-10-23 15:59") ;
	Date d = {6,10,2023} ;
	cout << "Enter date as : dd mm yyyy"<< endl ;
	d.getDate() ;
	d.printDate() ;
	return 0 ;
}
