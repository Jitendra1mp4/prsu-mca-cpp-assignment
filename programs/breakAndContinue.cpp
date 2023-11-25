#include <iostream>
using namespace std ;

void printIntro(string topic, string time){
cout <<"Topic : "<< topic<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Time : "<< time << endl << endl;
}


int main(){
	printIntro("Break and Continue", "28-09-23 18:37");
	int n  = 20 ;
	
	for (int i = 1 ; i <= 20 ; i++){
		// continue statment will only skip some iterations
		if ( i > 4 && i <= 10 ) {
		cout << "Continue" << endl ;
		continue ;	
		}
  		// break will get the controll out of the loop 
		if ( i == 16 ) {
		 cout << "Break" << endl ;
		 break ;
		}
		cout << i << endl ;
	}
 
	return 0 ;
}


