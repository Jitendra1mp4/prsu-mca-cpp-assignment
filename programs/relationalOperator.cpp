#include <iostream>
using namespace std ;

void printIntroWithTopic(string programTopic){
	cout <<"Name : Jitendra Kumar Sahu"<< endl ;
	cout << "Class : MCA l" << endl ;
	cout <<"Program Topic : " << programTopic << endl << endl ;
}

int main(){
	printIntroWithTopic("Relational Operators") ;
	
	int a, b  ;
	cout << "0 = FALSE\n1 = TRUE\n"  ;
	cout << "Enter values for a and b " ;
	
	cin >> a >> b ;
	
	cout <<a << " == "<<b <<" : "<< (a==b) << endl ;
	cout <<a << " != "<<b <<" : "<< (a!=b) << endl ;
	cout <<a << " > "<<b <<" : "<< (a>b) << endl ;
	cout <<a << " < "<<b <<" : "<< (a<b) << endl ;
	cout <<a << " >= "<<b <<" : "<< (a>=b) << endl ;
	cout <<a << " <= "<<b <<" : "<< (a<=b) << endl ;
		
	return 0 ;
}
