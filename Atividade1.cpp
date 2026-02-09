#include<iostream>
#include<string>
using namespace std;

struct Aluno {
	int matricula;
	string nome;
	float nota;
};

int busca_bin_aluno_matricula(Aluno alunos[], int matricula_buscada, int tamanho){
	int inicio = 0, fim = tamanho - 1, meio;            // 4
	while(inicio <= fim){                               // 3 log n
		meio = (inicio + fim) / 2;                      // 5 log n  
	    if(alunos[meio].matricula == matricula_buscada) // 4 log n 
		    return meio;                                // 0
	    else if(matricula_buscada > alunos[meio].matricula) // 4 log n
		    inicio = meio + 1;                          // 3 log n 
	    else
		    fim = meio - 1;                             // 0
	}
	return -1;
} // 19 log n + 4 

int busca_seq_aluno_matricula(Aluno alunos[], int matricula_buscada, int tamanho){
	for(int i = 0; i < tamanho; i++){ 					// 4 + 6n
		if(alunos[i].matricula == matricula_buscada){	// 4n
			return i;									// 0
		}
	}
	return -1; 											// 0
} // 10n + 4 (ut)

int busca_seq_alunos_nota(Aluno alunos[], int nota_buscada, int tamanho){
	int quantidade = 0;									// 1
	for(int i = 0; i < tamanho; i++){					// 4 + 6n
		if(alunos[i].nota >= nota_buscada){				// 4n
			quantidade++;								// 3n
		}
	}
	return quantidade;									// 1
} //  13n + 6 (ut)

int main(){
	Aluno lista_alunos[40];
	
	lista_alunos[0].matricula = 1;
	lista_alunos[0].nome = "Zé";
	lista_alunos[0].nota = 36.5;
	
	lista_alunos[1].matricula = 2;
	lista_alunos[1].nome = "Ana";
	lista_alunos[1].nota = 86.7;
	
	lista_alunos[2].matricula = 3;
	lista_alunos[2].nome = "Maria";
	lista_alunos[2].nota = 45.2;		
	
	lista_alunos[2].matricula = 4;
	lista_alunos[2].nome = "Jorge";
	lista_alunos[2].nota = 38.9;
	
	return 0;
}