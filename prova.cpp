#include <iostream>
using namespace std;

typedef struct item{
	int codigo;
	string nome;
	float preco;
} Item;

int busca_menor(int vetor[], int n){
	int menor = vetor[0], pos = 0;
	for(int i=1; i<n; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
			pos = i;
		}
	}
	return pos;	
}

void selection_sort(int vetor[], int n){
	int aux;
	int i;
	for(int j=0; j<n-1; j++){
		aux = busca_menor(vetor,n);
		vetor[j] = vetor[i];
		vetor[i] = aux;
	}
}

int main(){
	
	Item itens[1000];
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>itens[i].codigo;
		cin>>itens[i].nome;
		cin>>itens[i].preco;
	}
	int o;
	cin>>o;
	
	selection_sort(itens,n);
	
	for(int i=0;i<n;i++){
		cout<<itens[i].nome<<endl;
	}
	
	return 0;
}