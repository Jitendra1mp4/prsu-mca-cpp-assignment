/*
	Name: Porogram for Comparison of number without using comparison operator
	Author: Jitendra Kumar Sahu
	Description: answer of qn14
*/

#include <iostream>
using namespace std ;

#define length 5 
#define width 6
#define area (length * width )


void printIntro(string topic, string time){
cout <<"Topic : "<< topic<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Time : "<< time << endl << endl;
}

int main(){
	printIntro("Area of rectangle", "28-09-23 17:54") ;
	cout << "area of rectangle of 5 by 6 : "  ;
	cout << area << endl ;
	return 0 ;
}


