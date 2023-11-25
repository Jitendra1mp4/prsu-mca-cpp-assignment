#include <iostream>
using namespace std ;

class ConstructorEx{
		static int numberOfObjects ;
	public :
		ConstructorEx(){
			numberOfObjects++ ;
		}
		static int getNumberOfObjects(){
			return numberOfObjects ;
		}
};

int ConstructorEx :: numberOfObjects = 0 ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("Program to count number of object\nusing constructor","23-11-23 21:27") ;
	ConstructorEx obj1 , obj2 , obj3 ; 	
	cout << "Number of objects : " << ConstructorEx::getNumberOfObjects() << endl ;
	return 0 ;
}



