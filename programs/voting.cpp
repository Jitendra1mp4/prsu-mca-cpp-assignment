#include<iostream>
using namespace std;

void printIntro(string topic, string time) {
 cout<<"Topic : " << topic << endl ;
 cout<<"Author : Jitendra Kumar Sahu" << endl ;
 cout << "Time : "<< time << endl ;
 cout <<"_____________________*_____________________\n"<< endl ;
}

int main()
{
	printIntro("Voting Eligiblity","27-10-13 08:51") ;

	int age ;
	char gender ;
	
	cout << "Enter gender(m/) and age : " ;
	cin >> gender >> age ;
	
	if (age >= 18 ) {
		if(gender=='m' || gender=='M')
			cout << "Go to room number 10 to vote" ;
		else if(gender=='f' || gender=='F')
			cout << "Go to room number 12 to vote" ;
		else cout << "Go to room number 8 to vote" ;
	}else {
		cout << "Not Eligible for voting!" << endl ;
	}
	
	return 0;
}
