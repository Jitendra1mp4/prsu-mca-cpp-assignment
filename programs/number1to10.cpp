#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){

	printIntro("Programm to print numbers 1 to 10","26-10-23 21:43") ;
	
		for(int i =1  ; i<=10 ; i++ )
		cout << i << endl ;
	
	return 0 ;
}



