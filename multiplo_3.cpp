#include <iostream>

using namespace std;

int main (){


int num = 0;


cout << "Digite um numero: \n";
cin >> num;

if (num % 3 == 0){
	cout << num << " e multiplo de 3" <<"\n";
	}else {
		cout << num << " nao e multiplo de 3" <<"\n";
	}
	
system ("pause");

return 0;

}