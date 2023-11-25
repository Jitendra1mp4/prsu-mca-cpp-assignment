#include <iostream>
using namespace std ;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

class ThreeNum{
	public :
		int a , b ,c ;
		
	int max(int x, int y){
		return x > y ? x : y ;
	}
	void display(){
		cout << "a : " <<a  ;
		cout << ", b : " <<b  ;
		cout << ", c : " <<c << endl  ;
	}
	void displayMax(){
		cout << "max : " << max(a,max(b,c)) << endl ;
	}
};


int main(){

	printIntro("Nesting of member function","02-11-23 22:33") ;
	ThreeNum t ;
	t.a = 43 ;
	t.b = 45 ;
	t.c = 63 ;
	
	t.display() ;
	t.displayMax() ;
	
	return 0 ;
}



