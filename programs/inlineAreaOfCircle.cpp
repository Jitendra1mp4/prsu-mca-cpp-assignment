#include <iostream>
using namespace std ;

void printIntro(string topic, string date) {
	cout << "Program topic : "<< topic << endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Date : "<< date << endl ;
	cout << "____________*____________"<<endl << endl ;

}

inline float area(int r){
	const float pi = 22/7 ;
	return pi*r*r ;
}
int main() {

	printIntro("inline function to calculate simple interest","02-11-23 15:34") ;
	int  radius = 5 ;
	cout << "area of circle : " << area(radius) ;
	return 0 ;
}
