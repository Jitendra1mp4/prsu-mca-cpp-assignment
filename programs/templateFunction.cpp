#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

template <typename T> 
void add(T a, T b){
	cout << a+b << endl ;
}

int main(){
	printIntro("Addition using Template function","28-10-23 19:49") ;
	
	cout << "sum of ints : " ;
	add(6,11) ;
	cout << endl ;
	
	cout << "sum of floats : " ;
	add(6.5,11.2) ;
	cout << endl ;
	
	return 0 ;
}
