#include <iostream>
using namespace std ;

void printIntroWithTopic(string programTopic){
	cout <<"Name : Jitendra Kumar Sahu"<< endl ;
	cout << "Class : MCA l" << endl ;
	cout <<"Program Topic : " << programTopic << endl << endl ;
}

int main(){
	printIntroWithTopic("Logical Operators") ;
	
	bool  a  = true , b = false ;
	
	cout << a << " && "<< b <<" : " << (a && b) << endl ;
	cout << a << " || "<< b <<" : "<< (a || b) << endl ;
	cout << "!"<< a  << " : "<< !b << endl ;
	
	return 0 ;
}
