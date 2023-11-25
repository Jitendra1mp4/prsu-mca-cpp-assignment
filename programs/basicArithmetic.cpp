// basic arithmetic with switch case 
#include <iostream>
using namespace std ;

void printIntro(){
    cout<<"Topic : basic arithmetic with switch case "<<endl;
    cout<<"Author: Jitendra Kumar Sahu"<<endl;
	cout<<"MCA 1st sem"<<endl;
	cout<<"date: 01-10-23 23:36"<<endl;
}

int main()
{
  	printIntro() ;
	float n1, n2 , result;
	char operation ;
	
	cout << "Enter calculation " ;
	cin >> n1 >> operation >> n2 ;
	bool isValidOperation = true ;
	
	switch (operation) {
		case '+' : result = n1 + n2 ; 
		break ;
		
		case '-' : result = n1 - n2 ; 
		break ;
		
		case '/' : result = n1 / n2 ; 
		break ;
		
		case '*' : result = n1 * n2 ;
		break ;
		
		default : cout << "You may have entered an invalid operation"<< endl;
		isValidOperation = false ;
	}
	
	if (isValidOperation) cout << "result " << result << endl ;
}
