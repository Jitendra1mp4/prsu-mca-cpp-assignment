#include <iostream>
#include "intro.cpp"
using namespace std ;

void printRes(int res[], int endIndex){
	for(int k = endIndex ; k >= 0 ; k-- ) {
			if(res[k]>9){
				char hexValue = 'A' + (res[k]%10 ) ;
				cout <<hexValue ;
			}else{
			cout << res[k] ;
			}			
		}
}

void convert(int n , int base){
	int decimal = n ;
	int res[50] ; // array to store digits 
	int index = -1 ;
	
		while(n > 0 ){
		index++ ;
		res[index] = n%base ; // store reminder
		n/=base ;			  // 
	}
		cout << "conversion form base 10 to base " << base << " : ";
		printRes(res,index) ; // print resulting array
}



int main(){
	printIntro("Number System Conversion") ;
	int decimalValue , base ;
	cout << "Enter decimal value : " ; 
	cin >> decimalValue ;
	cout << "Enter base : " ;
	cin >> base ;
	
	convert(decimalValue,base) ; //convert(value, base ) 
	return 0 ;
}         






