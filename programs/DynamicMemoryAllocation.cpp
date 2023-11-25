#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
	 cout<<"Topic : " << topic << endl ;
	 cout<<"Author : Jitendra Kumar Sahu" << endl ;
	 cout << "Time : "<< time << endl ;
	 cout <<"------------------*------------------"<< endl ;
}

int main(){
	printIntro("Dynamic memory allocation","23-11-23 22:32") ;
	
	 int *ptr = new int() ;
	 if (ptr == NULL ) 
	 	cout << "unable to allocate memory!" ;
	 else{
		 *ptr = 34 ;
		 cout <<"value at ptr = " << *ptr << endl ;
		 delete ptr ;
		 cout << "ptr deleted!" ;	
	 }
	return 0 ;
}



