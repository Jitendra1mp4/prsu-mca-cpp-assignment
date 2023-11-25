#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){

	printIntro("Equality without comparison","26-10-23 22:38") ;
	
	int a,b  ;
	cout << "enter two numbers : " ;
	cin >> a >>b ;
	a ^ b ? cout << "Not Equal"	: cout<< "Equal"  ;
	cout << endl ;
	return 0 ;
}



