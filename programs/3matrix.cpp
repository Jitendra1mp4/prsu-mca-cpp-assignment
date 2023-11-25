#include <iostream>
using namespace std ;

int main(){

     int arr[3][3][3] = {{
		 	{1,2,3},
		 	{4,5,6},
		 	{7,8,9}
		 },
		 {
		 	{11,12,13},
		 	{14,15,16},
		 	{17,18,19}
		 },
		 {	 {21,22,23},   //0
		 	 {24,25,26},  //1
			 {27,28,29}   //2
		 }
	 };
 for(int i = 0 ; i < 3 ; i++){
	 	for (int j = 0  ; j < 3 ; j++){
	 		for(int k = 0 ; k < 3 ; k++){
	 			cout << arr[i][j][k] << " " ;
			 }
			 cout << endl ;
		 }
		 cout << endl ;
	 }
	 return 0 ;
}

