#include <iostream>
using namespace std ;

void printIntroWithTopic(string programTopic){
	cout <<"Name : Jitendra Kumar Sahu"<< endl ;
	cout << "Class : MCA l" << endl ;
	cout <<"Program Topic : " << programTopic << endl << endl ;
}

int main(){
	printIntroWithTopic("Logical Operators") ;
	
	int a  = 4 ; // 4 = 100
	int b = 5 ;  // 5 = 101
	
	cout << a << " & "<< b <<" : " << (a & b) << endl ;
	cout << a << " | "<< b <<" : "<< (a | b) << endl ;
	cout << "~"<< a  << " : "<< ~b << endl ;
	cout << a << " >> "<< b <<" : " << (a >> b) << endl ;
	cout << a << " << "<< b <<" : "<< (a << b) << endl ;


	
	
	
	return 0 ;
}