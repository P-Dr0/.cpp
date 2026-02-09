#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int>lista; // "ponteiro" para a lista ligada
	list<int>::iterator p;
	int x;  //var aux para inserir elementos na lista
	int i;
	int n = 4;
	
	for(i = 0;i < n;i++){
		cin >> x;
		lista.push_front(x);
	}
	
	for(p = lista.begin();p != lista.end();p++){
		cout << *p << endl;
	}
	
	return 0;
}