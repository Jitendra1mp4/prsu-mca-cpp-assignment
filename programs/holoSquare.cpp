#include <iostream>
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
	int n ;
	cout << "Enter width : "; 
	cin >> n ;
	hollowSqure(n);
	return 0 ;
}


