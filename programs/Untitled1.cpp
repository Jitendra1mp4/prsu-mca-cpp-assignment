#include <iostream>
using namespace std ;


void triangle3(int n){
    for(int i = 1 ; i <= n ; i++){
        for (int j = 0; j < n; j++){
        	j < n - i ? cout <<j<<" " : cout <<"* " ;
//            j <= n - i ? cout <<"  " : cout <<"* " ;
        }
        cout << endl ;
    }
}


int main(){
	triangle3(4) ;
}



