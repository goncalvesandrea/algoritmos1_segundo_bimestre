#include <iostream>

using namespace std;

int main (){


int num1 = 0;
int num2 = 0;

cout << "Digite o primeiro numero: \n";
cin >> num1;
cout << "Digite o segundo numero: \n";
cin >> num2;


if (num1 % num2 ==0){
	cout << num1 << " e divisivel por " << num2 <<"\n";
	}else {
		cout << num1 << " nao e divisivel por " << num2 <<"\n";
	}
	
system ("pause");

return 0;

}