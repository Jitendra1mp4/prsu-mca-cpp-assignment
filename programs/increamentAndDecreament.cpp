/*
	Name: Porogram to demonstrate area of increament and decreament Operation
	Author: Jitendra Kumar Sahu
	Date: 28-09-23 13:15
	Description: answer of qn6
*/
#include <iostream>
using namespace std ;

void printIntro(string topic, string time){
	cout <<"Topic : "<< topic<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Time : "<< time << endl << endl;
}


int main(){
	printIntro("increament and decreament Operation", "28-09-23 13:31") ;
	
	int res = 25 , p = 3 ;
	
	cout <<" res--  : " << res-- << endl ; 
	cout <<" ++res  : " << ++res << endl ; 
	p = p *  ++ res ;
	cout << " p *  ++ res : "<<p << endl ;
	return 0 ;
}


