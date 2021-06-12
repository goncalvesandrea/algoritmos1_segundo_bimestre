#include<iostream>

using namespace std;

int main (){
	
	int i = 1;
	
	do { if (i % 5 == 0)
		 cout << i;
		 cout << "\n";
		 i ++;
	} while (i <= 500);
	
	system ("pause");

	return 0;
}