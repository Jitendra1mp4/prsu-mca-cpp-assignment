#include<iostream>
using namespace std;

void printIntro(){
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Date: 28-09-23 13:15" << endl << endl;
}


int main()
{
	printIntro() ;
	int res = 25 , p = 3 ;
	cout << "res-- "<<res--<< endl ;
	cout << "++res "<<++res << endl  ;
	p = p * ++res ;
	cout << "p * ++res " << p << endl ;
	return 0;
}
