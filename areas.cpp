#include<iostream>

using namespace std;

void quadrado(float lado){
	float area = lado * lado;
	float perimetro = lado * 4;
	
	cout << "Figura geometrica: Quadrado \n";
	cout << "Area: " << area << "\n";
	cout << "Perimetro: " << perimetro << "\n";
}
void retangulo(float base, float altura){
	float area = base * altura;
	float perimetro = (altura + base) * 2;
	
	cout << "Figura geometrica: Retangulo \n";
	cout << "Area: " << area << "\n";
	cout << "Perimetro: " << perimetro << "\n";
}
void triangulo(float base, float altura){
	float area = (base * altura) / 2;
	float perimetro = base + (altura * 2);
	
	cout << "Figura geometrica: Triangulo \n";
	cout << "Area: " << area << "\n";
	cout << "Perimetro: " << perimetro << "\n";
}
void circulo(float diametro){
	float PI = 3.1415;
	float area = PI * (diametro / 2);
	float perimetro = (2 * PI) * (diametro / 2);
	
	cout << "Figura geometrica: Triangulo \n";
	cout << "Area: " << area << "\n";
	cout << "Perimetro: " << perimetro << "\n";
}

int main (){

	quadrado(6.5);
	retangulo(6.5, 8);
	triangulo(6.8, 8);
	circulo(10);
	
	return 0;
}