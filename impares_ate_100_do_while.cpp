#include<iostream>

using namespace std;

int main (){
	
	int i = 1;
	
	do { if (i % 2 != 0)
		 cout << i;
		 cout << "\n";
		 i ++;
	} while (i <= 100);
	
	system ("pause");

	return 0;
}