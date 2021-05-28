#include <iostream>

using namespace std;

int main(){
		int numeroUsuario;
		int numero = 94;
		int pontuacao;
		int pontuacaoInicial = 100;
		int tentativa = 0;
		
		do {cout << "Acerte meu numero secreto de 1 a 100: \n";
		cin >> numeroUsuario;
			if (numeroUsuario == numero){
				tentativa ++;
				
				cout << "Voce acertou!","\n";
				cout << "Voce usou: "; tentativa ;" tentativas! \n";
				pontuacao = pontuacaoInicial - (tentativa -1) * 10;
				cout << "Sua pontuacao final foi: " ;pontuacao ;
				cout << "\n";
			} else{
				cout << "Algo de errado nao esta certo \n";
				if (numeroUsuario<numero){
				cout << "Vai subindo vai \n";
				cout << "Voce perdeu uma chance \n";
				}else{
				cout << "Vai descendo vai \n";
				cout <<"Voce perdeu uma chance \n";
				}
				tentativa++;
				}
		}while (numeroUsuario != numero and tentativa < 10);
			if (tentativa==10){
				cout << "Voce nao conseguiu! \n";
				cout << "O numero secreto e: " ; numero;
			}
			
	system ("pause");
	
	return 0;
}