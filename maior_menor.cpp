#include <iostream>

using namespace std;

int main (){


int num1 = 0;
int num2 = 0;

cout << "Digite o primeiro numero: \n";
cin >> num1;
cout << "Digite o segundo numero: \n";
cin >> num2;


if (num1 > num2){
	cout << num1 << " e maior que " << num2 <<"\n";
	}else {
		cout << num2 << " e maior que " << num1 <<"\n";
	}
	
system ("pause");

return 0;

}