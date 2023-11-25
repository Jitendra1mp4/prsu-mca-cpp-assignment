#include <iostream>
using namespace std ;
void printIntro(){
	cout <<"Name: Finding largest of three number using Ternary"<< endl ;
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Date: 28-09-23 13:15" << endl << endl;
}

int main()
{
	printIntro() ;
	
	int a, b ,c  ; 
	cout << "enter values for a,b and c : " ;
	cin>> a>> b >> c ;
	int max = (a>b && a>c)?a:((b>c)?b:c );
	cout << "max : " << max << endl ;
	
	return 0 ;
}
