/*
	Name: Porogram to print Hollow Square
	Author: Jitendra Kumar Sahu
*/

#include <iostream>

#define length 5 
#define width 6
#define area (length * width )
using namespace std ;

void printIntro(string topic, string time){
cout <<"Topic : "<< topic<< endl ;
cout << "Author: Jitendra Kumar Sahu" << endl ;
cout <<"Time : "<< time << endl << endl;
}

void hollowSqure(int n){
	for(int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j<= n ; j++)
		if(j==1 || j == n || i==1 || i==n) cout << " *" ;
		else cout << "  " ;
		cout << endl ;
	}
}

int main(){
	printIntro("Hollow Square", "28-09-23 18:37");
	float n ;
	cout << "Enter the a number : "	;
	cin >> n ;
	if (n>0) goto positive ;
	else if (n < 0 ) goto negative ;
	else goto zero ;	
	
	positive : 
			 cout << "Positive " << endl ;
			 return 0 ;
    negative : 
    		 cout << "Negative " << endl ;
    		 return 0 ;
    zero :
    	 cout << "Zero" ;
 
	return 0 ;
}


