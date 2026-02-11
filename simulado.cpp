#include<iostream>
#include<string>
using namespace std;

struct Aluno {
	string nome;
	int matricula;
	float nota;
};

void ordena_alunos(Aluno vetor[], int inicio, int fim){
	int meio = (inicio+fim)/2;
	int pivo = vetor[meio];
	int i=inicio, j=fim;
	Aluno aux;
	while(i<=j){
		while(vetor[i] < pivo)
			i++;
		while(vetor[j] > pivo)
			j--;
		if(i<=j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i++;
			j--;
		}
	}
	if(inicio < j)
		ordena_alunos(vetor, inicio, j);
	if(i < fim)
		ordena_alunos(vetor, i, fim);
}

int busca_aluno(Aluno alunos[], int tamanho, int matricula_buscada){
	int inicio=0, fim = tamanho-1, metade;
	while(inicio <= fim){
		metade = (inicio+fim)/2;
		if(alunos[metade].matricula == matricula_buscada){
			return metade;
		} else if(alunos[metade].matricula > matricula_buscada){
			fim = metade - 1;
		} else {
			inicio = metade + 1;
		}
	}
	return -1;	
}

int main(){
	
	int num_alunos;
	cin >> num_alunos;
	
	Aluno alunos[num_alunos];
	
	for(int i=0; i< num_alunos; i++){
		cin >> alunos[i].matricula;
		cin >> alunos[i].nome;
		alunos[i].nota = 0.0;
	}
	
	int num_exercicios, matricula, pos;
	float nota;
	cin >> num_exercicios;
	
	for(int j=0; j < (num_alunos*num_exercicios); j++){
		cin >> matricula;
		cin >> nota;
		
		if(alunos[pos].nota == 0)
			alunos[pos].nota = nota;
		else
			alunos[pos].nota = (alunos[pos].nota + nota)/2.0;
	}
	
	ordena_alunos(alunos, 0, num_alunos-1);
	
	for(int i=0; i< num_alunos; i++){
		cout << alunos[i].nome << ' ' << alunos[i].nota << endl;
	}
	
}