#include <iostream>
#include "intro.cpp"
using namespace std ;

int main(){
	printIntro("Assignment Operator") ;
	
	int a , c ;
	
	cout << "Enter value of a " ;
	cin >> a ;
	
	int firtValue =a ;
	
	c = a++ ;
	a = firtValue ;
	cout << "post increament a++ : " << c << endl ;	
	
	c = ++a ;
	a = firtValue ;
	cout << "pre increament ++a : " << c << endl ;	
	
	c = a-- ;
	a = firtValue ;
	cout << "post decreament a-- : " << c << endl ;	
	
	c = --a ;
	a = firtValue ;
	cout << "pre decreament --a: " << c << endl ;	
	
	
	
	return 0 ;
}