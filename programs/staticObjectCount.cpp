#include <iostream> 
using namespace std ;

class A{
	static int numberOfObjects ;
	
	public : 
	// a static function that uses static variable
	static int getNumberOfObjects(){
		return numberOfObjects ; // returning static variable
	}

	void admit(){
		numberOfObjects++ ;
	}
} ;

int A :: numberOfObjects = 0 ;

void printIntro(string topic, string time) {
	 cout<<"Topic : " << topic << endl ;
	 cout<<"Author : Jitendra Kumar Sahu" << endl ;
	 cout << "Time : "<< time << endl ;
	 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("count of object using static","23-11-23 17:53") ;
	
	A object1 , object2 , object3; // creating object
	// calling function that work on static variable
	object1.admit() ;
	object2.admit() ;
	object3.admit() ;
	cout << "number of objects  : " ;
	cout << A::getNumberOfObjects() << endl ;
	return 0 ;
}
