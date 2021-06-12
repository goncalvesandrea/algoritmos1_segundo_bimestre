#include<iostream>

using namespace std;

int main (){
	
	int i = 1;
	
	while (i <= 500){
		i ++;
	if (i % 5 == 0){
	 cout << i;
	 cout << "\n";
	 i ++;
		}
	}
	
	system ("pause");

	return 0;
}