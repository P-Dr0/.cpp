#include <iostream>
using namespace std;

int hash_aux(int k,int m){
	if(k % m < 0){
	    return (k % m) + m;
	}
	else{
	    return k % m;
	    }
	}

int main()
{
	int h;
	int m;
	int k;
	int n;
	int i = 0;
	int vetk[30];
	int vetm[30];
	
	cin >> k >> m;
	while(k != 0 && m != 0){
		vetk[i] = k;
		vetm[i] = m;
		cin >> k >> m;
		i++;
	}
	
	n = i;
	
	for(i = 0;i < n;i++){
		h = hash_aux(vetk[i],vetm[i]);
		cout << h << endl;
	}
	
	return 0;
}