/*
	Name: Porogram to demonstrate Bitwise Operator 
	Author: Jitendra Kumar Sahu
	Date: 28-09-23 13:03
	Description: answer of qn5 
*/
#include <iostream>
using namespace std ;

void printIntro(){
	cout <<"Name: Porogram to demonstrate Bitwise Operator "<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Date: 28-09-23 13:03" << endl << endl;
}


void bitwise(int a , int b){
	int res = a & b ;
	cout << "a & b : " << res << endl ;
	
	res = a | b ;
	cout << "a | b : " << res << endl ;
	
	res = a << b ;
	cout << "a << b : " << res << endl ;
	
	res = a >> b ;
	cout << "a >> b : " << res << endl ;
		
	res = ~b ;
	cout << "~b : " << res << endl ;
	
}

int main(){
	printIntro() ;
	
	int a, b ;
	cout << "Enter the value of a and b : " ;
	cin >> a >> b ;
    bitwise(a,b) ;
	return 0 ;
}
