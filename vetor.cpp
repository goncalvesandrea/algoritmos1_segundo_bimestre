#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int vetor[50];
	
	srand (time(NULL));
	
	for(int i = 0; i < 50; i++){	
		vetor[i] = rand () % 10;
		
		if (i >= 1){
		cout << "Posicao: " << i << " Valor: " << vetor[i] << " Multiplicado pelo valor anterior: " << vetor[i] * vetor[i-1] << "\n";
		}else{
			cout << "Posicao: " << i << " Valor: " << vetor[i] << " Multiplicado por 1: "<< vetor[i] * 1 << "\n";
		}
	}
	return 0;
}