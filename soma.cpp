#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	clock_t inicio,fim;
	long double N,soma;
	
	cin >> N;
	
	inicio = clock();
	soma = N*(1 + N)/2;
	
	cout << "soma = " << soma << endl;
	
	fim = clock();
	cout << "soma = " << soma << endl;
	cout << "tempo = " << (float)(fim-inicio/CLOCKS_PER_SEC) << " s" << endl;
	return 0;
}