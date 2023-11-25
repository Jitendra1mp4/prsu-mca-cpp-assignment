#include<iostream>
using namespace std;

void printIntro(){
	cout <<"Ans of qn 22"<< endl ;
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Date: 28-09-23 13:15" << endl << endl;
}


int main()
{
	printIntro() ;
	int n ; 
	string output  ;
	
	while (output != "Thank You!" ) {
		cout << "enter the number between 1 to 25 : "  ;
	    cin >> n ;
		n > 0 && n <=25 ? output = "Thank You!" : output = "Invalid!!!!" ;	
	}
	cout << output << endl ;
	return 0;
}
