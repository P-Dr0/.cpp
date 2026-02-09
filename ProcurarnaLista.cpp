#include <iostream>
#include <list>
using namespace std;

bool encontrar(list<int> lista, int x)
{
	for(list<int>::iterator p = lista.begin();p != lista.end();p++){
		if(*p == x){
			return true;
		}
	}
	return false;
}

int main()
{
	list<int>lista; // "ponteiro" para a lista ligada
	int x;  //var aux para inserir elementos na lista
	int i;
	int n;
	int vet[20];
	
	cin >> x;
    while (x != 0)
    {
        vet[i] = x;
        lista.push_back(x);
        i++;
        cin >> x;
    }
    
    cin >> n;
	
	if(encontrar(lista,n)){
		cout << "Encontrado" << endl;
	}
	else{
		cout << "Nao encontrado" << endl; 
	}
	
	return 0;
}