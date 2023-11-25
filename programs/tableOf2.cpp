#include <iostream>
using namespace std ;

void printIntro(string topic, string time){
	cout <<"Topic : "<< topic<< endl ;
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Time : "<< time << endl << endl;
}

void printTable(int n){
	int i = 1 ;
	while(i <= 10 ){		
			cout << i *  n <<"," ;
			i++ ;
	}
}

int main(){
	printIntro("Table of 2","28-09-23 13:36") ;
	printTable(2) ;
	return 0 ;
}
