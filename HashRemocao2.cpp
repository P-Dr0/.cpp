#include <iostream>
using namespace std;

struct dado {
    int k;
    int status;
};

int hash_aux(int k, int m) {
    if (k % m < 0) {
        return (k % m) + m;
    } else {
        return k % m;
    }
}

int hash1(int k, int i, int m) {
    return (hash_aux(k, m) + i) % m;
}

int hash_insert(dado t[], int m, int k) {
    int i = 0;
    while (i != m) {
        int j = hash1(k, i, m);
        if (t[j].status != 1) {
            t[j].k = k;
            t[j].status = 1;
            return j;
        } else {
            i++;
        }
    }
    return -1;
}

int hash_search(dado t[],int m,int k){
	int i = 0;
	int j = 0;
	while(t[j].status != 0 && i < m){
		j = hash1(k,i,m);
		if(t[j].k == k){
			return j;
		}
		i++;
	}
	return -1;
}

int hash_remove(dado t[],int m,int k){
	int j = hash_search(t,m,k);
	if(j != -1){
		t[j].status = 2;
		t[j].k = -1;
		return 0;
	}
	else{
		return -1;
	}	
}

int main() {
    int m;
    int k;
    int n;
    int i;
    int vetk[20];
    cin >> m;
	dado t[20];
	
    for (i = 0; i < m; i++){
        t[i].k = -1;
        t[i].status = 0;
    }

	n = 0;
	i = 0;
    cin >> k;
    while(k != 0){
		vetk[i] = k;
		i++;
		i = n;
		cin >> k;
	}
    
    for (i = 0;i < n;i++){
        hash_insert(t, m, vetk[i]);
    }
    
    cin >> k;
    hash_remove(t,m,k);
    
	for(int i = 0;i < m;i++){
		cout << t[i].k << " ";
	}
	
    return 0;
}