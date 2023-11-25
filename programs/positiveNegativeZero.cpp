#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("","") ;

	int n = 0;
	do{
		cout << "Enter a number : " ;
		cin >> n ;
		if(n > 0 ) cout << "Positive" ;
		else if(n < 0 ) cout << "Negative" ;
		else cout << "Zero" ;
		cout << endl ;
	}while(n != 0) ;
	
	return 0 ;
}
