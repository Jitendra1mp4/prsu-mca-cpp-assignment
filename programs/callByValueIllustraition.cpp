// Write a C++ program to illustrate working of call by value of a function invoking
#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

void change(int a){
	//changing value 
	a = a+1 ;
	cout<< "updated value at function : "<< a <<endl ;
}


int main(){
	printIntro("Illustration of call by value","28-10-23 19:08") ;
	int x = 5 ;
	cout << "before call " << x << endl ;
	change(x) ;
	cout << "after call " << x << endl ;
	return 0 ;
}




