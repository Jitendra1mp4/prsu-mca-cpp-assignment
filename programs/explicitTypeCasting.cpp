/*
	Name: Porogram to demonstrait Explicit type casting
	Author: Jitendra Kumar Sahu
*/

#include <iostream>
using namespace std ;

void printIntro(string topic, string time){
cout <<"Topic : "<< topic<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Time : "<< time << endl << endl;
}

int main(){
	printIntro("Explicit type casting", "28-09-23 18:27");
	float x = 5.54 ;
	int casted = (int)x ;
	cout << "it typecasts float "<< x << " to int " << casted << endl ;
	return 0 ;
}


