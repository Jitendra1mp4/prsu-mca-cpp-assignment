#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

class Calculator{
	int a = 5 , b = 4 ;
	public : 
	void add(){
		cout << "sum : " << a+b << endl;
	}
	void sub(){
		cout << "sub : " << a-b  << endl ;
	}
	void mult(){
		cout << "mult : " << a*b  << endl;
	}
	void div(){
		cout << "div : " << a/b  << endl ;
	}
};

int main(){
	printIntro("class as calculator","02-11-23 22:42") ;
	Calculator c ;
	c.add() ;
	c.sub() ;
	c.mult() ;
	c.div() ;
	return 0 ;
}
