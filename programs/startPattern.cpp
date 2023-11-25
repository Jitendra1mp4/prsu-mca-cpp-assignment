#include <iostream>
using namespace std;

void square(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void triangle1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void triangle2(int n)
{
    for (int i = n; i >= 0; i--)
    {
       for (int j=0 ; j <= i ; j++)
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
void triangle4(int n){
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ;  j < n - i ; j++){
        cout << " " ;
        }
        for (int j = 0; j <= i ; j++){
           cout << " *" ; 
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
     square(n);
     cout << endl ;
     
	 triangle1(n) ;
     cout << endl ;
     
	 triangle2(n) ;
     cout << endl ;
     
	 triangle3(n) ;
     cout << endl ;
     
     triangle4(n) ;
	 cout << endl ;
    
	numericPattern(n) ;
	cout << endl ;
    return 0;
}
