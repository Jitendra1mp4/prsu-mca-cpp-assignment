#include <iostream>
using namespace std ;

void printIntro(string topic, string date) {
	cout << "Program topic : "<< topic << endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Date : "<< date << endl ;
	cout << "____________*____________"<<endl << endl ;
}

int add(int a, int b){
	return a+b ;
}
	
int add(int a, int b , int c){
	return a+b+c ;
}

int main() {

	printIntro("function overloading","02-11-23 15:34") ;
	
	cout << "Addition of 2 integers : " << add(2,3) << endl ;
	cout << "Addition of 3 integers : " << add(2,3,4) << endl ;
	return 0 ;
}
