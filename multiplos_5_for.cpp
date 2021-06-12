#include<iostream>

using namespace std;

int main (){
	
	int i = 1;
	
	for (i; i <= 500; i++){
		
		if (i % 5 == 0){
		 cout << i;
		 cout << "\n";
		}
	}

	system ("pause");

	return 0;
}