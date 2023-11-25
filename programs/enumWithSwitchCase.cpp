#include <iostream>
using namespace std ;

// definition of enumuration
enum week{
	mon=1, tue, wed , thu, fri ,sat ,sun 
};

void printIntro(string topic, string date) {
	cout << "Program topic : "<< topic << endl ;
	cout << "Author : Jitendra Kumar Sahu" << endl ;
	cout << "Date : "<< date << endl ;
	cout << "------------*-----------" << endl ; 
}

int main() {

   printIntro("week day with enum", "06-10-23 16:36") ;
	
	cout << "Enter an integer between 1 and 7 : ";
	 
	int x ;
	cin >> x ;
	switch(x){
		case mon : cout << "Monday" << endl ;
		break ;
		
		case tue : cout << "Tueday" << endl ;
		break ;
		
		case wed : cout << "Wednessday" << endl ;
		break ;
		
		case thu : cout << "Thursday" << endl ;
		break ;
		
		case fri : cout << "Friday" << endl ;
		break ;
		
		case sat : cout << "Saturday" << endl ;
		break ;
		
		case sun : cout << "Sunday" << endl ;
		break ;
		
		default : cout << "Nahi, mai mere ek week me " << x << " din nahi hota" ;
	}
	return 0 ;
}
