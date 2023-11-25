#include <iostream>
using namespace std ;

void printIntro(string topic, string time){
	cout <<"Topic : "<< topic<< endl ;
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Time : "<< time << endl << endl;
}

int main(){
	printIntro("Square of integer","28-09-23 13:57") ;
	
	int x ;
	cout << "Enter an integer : "; 
	cin >> x ;


	for(int i = 1 ; i <= x ; i++)
		cout << i << " cubed " << i*i*i << endl ;
		
	return 0 ;
}


