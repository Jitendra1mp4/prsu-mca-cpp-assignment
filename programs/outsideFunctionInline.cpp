#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

inline int inlineSqure(int x){
	return x*x ;
}

int main(){

	printIntro("Outside function inline","02-11-23 23:41") ;
	int k = 5 ;
	cout << k << " squared = " << inlineSqure(k) << endl ;
	return 0 ;
}
