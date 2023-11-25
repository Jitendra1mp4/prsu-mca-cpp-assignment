#include <iostream>
using namespace std ;

void printIntroWithTopic(string programTopic){
	cout <<"Name : Jitendra Kumar Sahu"<< endl ;
	cout << "Class : MCA l" << endl ;
	cout <<"Program Topic : " << programTopic << endl << endl ;
}
int main(){
	//program to demonstrait different datatypes
	
	//variables definition
	int In = 34;
	
	float flt = 210.123 ;
	
	double dbl = 830583.3445353;
	
	char ch = 'C' ;
	
	string str = "Jitendra Kumar Sahu" ;
		
	printIntroWithTopic("size of different datatype") ;
	
	cout <<"Size of int "<< sizeof(In)<< endl ;
	cout << "size of float "<< sizeof(flt) << endl ;
	cout << "Size of double " << sizeof(dbl) << endl ;
	cout << "size of char " << sizeof(ch) << endl ;
	cout << "size of string " << sizeof(str) << endl ;
	
	return 0 ;
}
