
#include <iostream>
using namespace std ;
void printIntro(){
	cout <<"Name: Week day with switch case "<< endl ;
	cout << "Author: Jitendra Kumar Sahu" << endl ;
	cout <<"Date: 28-09-23 13:15" << endl << endl;
}

int main()
{
	printIntro() ;
	int n  ;
	cout << "Enter day of the week " ;
	cin>> n ;
	switch (n)
	{
		case 1 : cout << "Monday" << endl ;
		break ;
		
		case 2 : cout <<"Tuesday"<< endl ;
		break ;
		
		case 3 : cout <<"Wednessday" << endl ;
		break ;
		
		case 4 : cout <<"Thursday"<< endl ;
		break ;
		
		case 5 : cout <<"Friday"<< endl ;
		break ;
		
		case 6 : cout <<"Saturday"<< endl ;
		break ;
		
		case 7 : cout <<"Sunday"<< endl ;
		break ;
		
		default : cout << "You may have entered a wrong day" ;
	}
	return 0 ;
}
