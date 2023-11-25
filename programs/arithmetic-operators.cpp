#include <iostream>
using namespace std ;

void printIntroWithTopic(string programTopic){
	cout <<"Name : Jitendra Kumar Sahu"<< endl ;
	cout << "Class : MCA l" << endl ;
	cout <<"Program Topic : " << programTopic << endl << endl ;
}
int main(){

printIntroWithTopic("Arithemetic Operators ")  ;

int a ,b ;

cout << "Enter value of a and b : "  ; 
cin >> a >> b ;

cout << "addition Operator, a + b : " << a+b << endl ;
cout << "substraction Operator, a - b :  " << a-b << endl ;
cout << "multiplication Operator, a * b : " << a*b << endl ;
cout << "divid Operator, a / b : " << a/b << endl ;
cout << "modulo Operator, a % b : " << a%b << endl ;

cout << "pre increament Operator, ++a : " << ++a << endl ;
cout << "post increament Operator, a++ : " << a++ << endl ;

cout << "pre decreament Operator, --b : " << --b << endl ;
cout << "post decreament Operator, b-- : " << b-- << endl ;

	return 0 ;
}