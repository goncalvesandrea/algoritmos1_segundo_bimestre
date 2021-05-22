#include <iostream>

using namespace std;

int main (){


int num = 0;


cout << "Digite um numero: \n";
cin >> num;

if (num % 5 == 0){
	cout << num << " e divisivel por 5" <<"\n";
	}else {
		cout << num << " nao e divisivel por 5" <<"\n";
	}
	
system ("pause");

return 0;

}