#include <iostream>
#include <string>
using namespace std;

struct aluno
{
	string nome;
	string curso;
	int matricula;
};

int sequencial(int vetor[], int tamanho, int x)
{
	bool achou = false; // var aux p/ busca
	int i = 0; // contador
	while (achou == false && i < tamanho)
		achou = vetor[i++] == x;
	if (achou)
		return (i - 1);
	else
		return -1;
}

int main()
{
	int n;
	int procurado;
	int i;
	int alunos[30];
	

	cin >> n;
	aluno alunos[n];
	for(i = 0; i < n; i++)
	{
		cin >> alunos[i].nome;
		cin >> alunos[i].curso;
		cin >> alunos[i].matricula;
	}
	cin >> procurado;

	if(sequencial(alunos,n,procurado) == -1)){
		cout << "Aluno nao localizado" << endl;
	}
	else{
		cout << sequencial(alunos,n,procurado) << endl;
	}

	return 0;
}
