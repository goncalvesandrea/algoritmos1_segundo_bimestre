#include <iostream>
#include <math.h>

using namespace std;

int main () {
	
	float num;
	
	cout << "Entre com um numero:";
	cin >> num;
	
	if (num >= 0){
		cout << sqrt (num);
		cout << "\n";
	} else {
		cout << pow (num, 2.0);
		cout << "\n";
	}
	
	system ("pause");
	
	return 0;
}