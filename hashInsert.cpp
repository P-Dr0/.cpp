#include <iostream>
using namespace std;

struct dado{
	int k;
	int status;
};

int hash_aux(int k,int m){
	if(k % m < 0){
	    return (k % m) + m;
	}
	else{
	    return k % m;
	    }
	}
	
int hash1(int k,int i,int m){
	return (hash_aux(k,m) + i) % m;
}

int hash_insert(dado t[],int m,int k){
	int i = 0;
	while(i != m){
	    int j = hash1(k,i,m);
		if(t[j].status != 1){
			t[j].k = k;
			t[j].status = 1;
			return j;
		}
		else{
			i++;
		}
	}
	return -1;
}

int main(){
	int i = 0;
	int m;
	int c;
	int vetc[20];
	int k;
	dado t[20];
	
	cin >> m;
	cin >> c;
	while(c != 0){
		vetc[i] = c;
		i++;
		cin >> c;
	}
	
	for(i = 0;i < m;i++){
		t[i].k = -1;
		t[i].status = 0;
	}
	
	for(i = 0;i < m;i++){
		k = hash1(vetc[i],i,m);
		hash_insert(t,m,k);
	}
	for(i = 0;i < m;i++){
		cout << t[i].k << " ";
	}
	
	return 0;
}