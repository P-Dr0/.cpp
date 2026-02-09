#include <iostream>
#include <list>
using namespace std;

int contar(list<int> lista){
	int cont = 0;
    for (list<int>::iterator it = lista.begin(); it != lista.end(); ++it) {
        cont++;  // Incrementa o contador para cada nó
    }
    return cont;
}

int main()
{
	list<int>lista;
	int x;  
	int i = 0;
	
	cin >> x;
    while (x != 0)
    {
        lista.push_back(x);
        cin >> x;
        i++;
    }
    
    cout << contar(lista) << endl;
	
	return 0;
}