#include <iostream>
using namespace std;

int main()
{
	float vetor[3];
	float *p;
	
	vetor[0] = 2;
	vetor[1] = 5;
	vetor[2] = 4;
	
	p = vetor;
	p++;
	
	cout << *p << endl;
	
	return 0;
}