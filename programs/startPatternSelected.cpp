#include <iostream>
using namespace std;



void triangle1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void triangle2(int n){
    for (int i = n; i > 0; i--){
       for (int j=0 ; j < i ; j++)
        cout << "* " ;
        cout << endl;
    }
}

void triangle3(int n){
    for(int i = 1 ; i <= n ; i++){
        for (int j = 0; j <= n; j++){
            j <= n - i ? cout <<"  " : cout <<"* " ;
        }
        cout << endl ;
    }
}


void numericPattern(int n){
    for (int i = 1 ; i<= n ; i++ ){
        for(int j = 1 ; j <= i ; j++ )
            cout << j << " " ;
    cout << endl ;
    }
}

int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    
	cout << "pattern A \n" ;
    triangle2(n) ;
    cout << endl ;
     
    cout << "pattern B \n" ;
	triangle1(n) ;
    cout << endl ;
    
	cout << "pattern C \n" ;
	numericPattern(n) ;
	cout << endl ;
	
	cout << "pattern D \n" ;
	triangle3(n) ;
    cout << endl ;

    return 0;
}
