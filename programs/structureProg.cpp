#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

struct Student{
	int roll ; 
	string name ;
};


int main(){

	printIntro("Program to demonstrate structure","06-10-23 00:14") ;
	return 0 ;
}


