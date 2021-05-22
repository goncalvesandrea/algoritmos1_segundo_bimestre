#include <iostream>

using namespace std;

int main (){


int num = 0;

cout << "Digite o primeiro numero: \n";
cin >> num;


if (num % 3 == 0 and num % 7 == 0){
	cout << num << " e divisivel por 3 e 7 " << "\n";
	}else {
		cout << num << " nao e divisivel por 3 e 7 " <<"\n";
	}
	
system ("pause");

return 0;

}