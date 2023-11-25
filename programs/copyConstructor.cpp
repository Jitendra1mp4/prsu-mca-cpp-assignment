#include <iostream>
using namespace std ;

class Test {
	int a ;
	int b ;
	
	public : 
	 Test(int x , int y){
	 	a = x ;
	 	b = y ;
	 }
	 // copy constructor
	 Test(const Test &object){
	 	a = object.a ;
	 	b = object.b ;
	 }	 
	 void getData(){
	 	cout << "a : " << a << endl ;
	 	cout << "b : " << b << endl ;
	 }	 
};

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	Test t(22,55)	;
	Test p(t) ;

	cout <<"values of object 1 \n" ;
	t.getData() ;
	
	cout<<"\nvalues of object 2 \n" ;
	p.getData() ;
	return 0 ;
}
