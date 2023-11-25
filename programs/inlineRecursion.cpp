#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

inline int fact(int n){
	if (n == 0 ) return 1 ;
	else return (n*fact(n-1)) ;
}

int main(){
	
	cout << fact(5) ;
	return 0 ;
}



