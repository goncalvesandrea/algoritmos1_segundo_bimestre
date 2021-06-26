#include<iostream>

using namespace std;

int main() { 
	int qntdAlunos = 0;
	
	
	cout << "Informe a quantidade de alunos: \n";
	cin >> qntdAlunos;
	
	string vetorNomes[qntdAlunos];
	float vetorNotas1[qntdAlunos];
	float vetorNotas2[qntdAlunos];
	
	for (int i = 0; i < qntdAlunos; i++){
		cout << "Informe o nome do " << i + 1 << " aluno: \n";
		cin >> vetorNomes[i];
		cout << "Informe a nota do " << vetorNomes[i] << " referente ao primeiro bimestre: \n";
		cin >> vetorNotas1[i];
		cout << "Informe a nota do " << vetorNomes[i] << " referente ao segundo bimestre: \n";
		cin >> vetorNotas2[i];
	}

	for (int i = 0; i < qntdAlunos; i++){
		float media = (vetorNotas1[i] + vetorNotas2[i]) / 2;
		if (media >= 6 ){
			cout << "Aluno " << vetorNomes[i] << " teve media " << media << " e esta aprovado! \n";
		}else {
			cout << "Aluno " << vetorNomes[i] << " teve media " << media << " e esta reprovado! \n";
		}
	}

	return 0;

}