#include<iostream>

using namespace std;


float soma (float n1, float n2){
	return n1 + n2;
}

float subtracao (float n1, float n2){
	return n1 - n2;
}

float divisao (float n1, float n2){
	return n1 / n2;
}

float multiplicacao (float n1, float n2){
	return n1 * n2;
}

int main (){
	
	float n1 = 0;
	float n2 = 0;
	
	cout << "Digite um numero: \n";
	cin >> n1;
	cout << "Digite um numero: \n";
	cin >> n2;
	
	cout << "Soma:" << soma(n1,n2) << "\n";
	cout << "Subtracao:" << subtracao(n1,n2) << "\n";
	cout << "Divisao:" << divisao(n1,n2) << "\n";
	cout << "Multiplicacao:" << multiplicacao(n1,n2) << "\n";
	
	return 0;
}