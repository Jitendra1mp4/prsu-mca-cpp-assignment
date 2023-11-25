/*
	Name: Porogram to demonstrate area of Circle 
	Author: Jitendra Kumar Sahu
	Date: 28-09-23 13:15
	Description: answer of qn6
*/
#include <iostream>
using namespace std ;

void printIntro(){
	cout <<"Name: Porogram to demonstrate area of Circle "<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Date: 28-09-23 13:15" << endl << endl;
}


void area(int radius){
	 const float PI = 22/7 ; 
	 cout <<"Area of circle : " << PI*radius*radius;
}

int main(){
	printIntro() ;
	
	int radius;
	cout << "Enter value of radius : " ;
	cin >>radius ;
    area(radius) ;
	return 0 ;
}


