#include <iostream>
using namespace std;

int main()
{
	int *vetor = NULL;
	int *p = NULL;
	int n;
	int i;
	
	cin >> n;
	
	vetor = new int(n);
	
	for(i = 0;i < n;i++){
		cin >> vetor[i];
	}
	
	p = vetor;
	for(i = 0;i < n;i++){
		cout << *p << endl;
		p++;
	}
	
	delete [] vetor;
	
	
	
	return 0;
}