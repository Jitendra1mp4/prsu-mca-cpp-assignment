#include <iostream>
using namespace std ;

class Test{
	int var ;
	public : 
	Test(int a = 20){
		var = a ;
		cout << "var initilized! "<< endl ;
		cout << "var = : " << var << endl ;
	}
};

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("invoke constructor having default arguments","23-11-23 21:55") ;
	Test object ;
	return 0 ;
}



