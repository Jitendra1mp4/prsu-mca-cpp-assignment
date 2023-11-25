#include <iostream>
using namespace std ;

class Sub{
	int ppr1_code , ppr2_code ;
	public : 
   Sub(){
   	ppr1_code = 101 ;
   	ppr2_code = 102 ;
   	cout << "ppr1_code : " << ppr1_code << endl ;
   	cout << "ppr2_code : " << ppr2_code << endl ;
   	cout << "internal object constructor called!\n" ;
   }
};

class Mark{
	float ppr1_mark , ppr2_mark ;
	public : 
   Mark(float a, float b){
   	ppr1_mark = a ;
   	ppr2_mark = b ;
   	cout << "ppr2_mark : " << ppr2_mark << endl ;
   	cout << "ppr2_mark : " << ppr2_mark << endl ;
   	cout << "external object constructor called!\n" ;
   }
    Sub temp  ;  
};

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("program to illustrate order of invocation","23-11-23 21:36") ;
	Mark object(5.1,6.2) ;
	return 0 ;
}
