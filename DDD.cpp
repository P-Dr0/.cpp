#include <iostream>
using namespace std;

int main()
{
	float DDD;
	
	cin >> DDD;
	
	if(DDD != 61 && DDD != 71 && DDD != 11 && DDD != 21 && DDD != 32 && DDD != 19 && DDD != 27 && DDD != 31)
		cout << "DDD nao cadastrado" << endl;
	else if(DDD == 61)
		cout << "Brasilia" << endl;
	else if(DDD == 71)
		cout << "Salvador" << endl;
    else if(DDD == 11)
		cout << "Sao Paulo" << endl;
	else if(DDD == 21)
		cout << "Rio de Janeiro" << endl;	
	else if(DDD == 32)
		cout << "Juiz de Fora" << endl;	
	else if(DDD == 19)
		cout << "Campinas" << endl;	
	else if(DDD == 27)
		cout << "Vitoria" << endl;
	else if(DDD == 31)
		cout << "Belo Horizonte" << endl;		
	
	return 0;
}