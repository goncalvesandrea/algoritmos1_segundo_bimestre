#include <iostream>

using namespace std;

int main (){


int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;

cout << "Digite o primeiro numero: \n";
cin >> num1;
cout << "Digite o segundo numero: \n";
cin >> num2;
cout << "Digite o terceiro numero: \n";
cin >> num3;
cout << "Digite o quarto numero: \n";
cin >> num4;


if (num1 > num2  and  num1 > num3  and  num1 > num4){
	cout <<  " O maior numero e " << num1 <<"\n";
	}else if ( num2 > num1  and  num2 > num3  and  num2 > num4 ){
 	cout <<  " O maior numero e " << num2 <<"\n";
	 }else if ( num3 > num1  and  num3 > num2  and  num3 > num4 ){
 	cout <<  " O maior numero e " << num3 <<"\n";
	 }else {
 	cout <<  " O maior numero e " << num4 <<"\n";}
 
 if ( num1 < num2  and  num1 < num3  and  num1 < num4 ){
 	cout <<  " O menor numero e " << num1 <<"\n";
	 }else if ( num2 < num1  and  num2 < num3  and  num2 < num4 ){
 	cout <<  " O menor numero e " << num2 <<"\n";
 	}else if ( num3 < num1  and  num3 < num2  and  num3 < num4 ){
 	cout <<  " O menor numero e " << num3 <<"\n";
 	}else {
 	cout <<  " O menor numero e " << num4 <<"\n";}
	
system ("pause");

return 0;

}