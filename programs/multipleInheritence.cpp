#include <iostream> 
using namespace std ;

class Father{
	public :
	 void cookFood(){
	   cout << "I am cooking rice!"<< endl ;
	}
} ;
class Mother{
	public :
	 void goToOffice(){
		 cout << "I am going to office"<<endl ;
	 }
} ;

class Child : public Father , public Mother{
	public :
	void eat(){ 
		cout << "I am eating rice" << endl ;
	}
} ;

void printIntro(string topic, string time) {
	 cout<<"Topic : " << topic << endl ;
	 cout<<"Author : Jitendra Kumar Sahu" << endl ;
	 cout << "Time : "<< time << endl ;
	 cout <<"_____________________*_____________________"<< endl ;
}

int main(){
	printIntro("Multiple Inheritence","23-11-23 17:53") ;

	Child jitendra ;
	jitendra.cookFood() ;
	jitendra.eat() ;
	jitendra.goToOffice() ;
	return 0 ;
}
