#include <iostream>
using namespace std;

struct dado {
    int k;      
    int status; 
};


int h1(int k, int m) {
    return (k % m + m) % m; 
}


int h2(int k, int m) {
    return 1 + (k % (m - 1));
}


int dhash(int k, int i, int m) {
    return (h1(k, m) + i * h2(k, m)) % m;
}


int hash_insert(dado t[], int m, int k) {
    int i = 0;
    while (i < m) { 
        int j = dhash(k, i, m);
        if (t[j].status != 1) {  
            t[j].k = k;
            t[j].status = 1; 
            return j; 
        }
        i++; 
    }
    return -1; 
}


int hash_search(dado t[], int m, int k) {
    int i = 0;
    while (i < m) { 
        int j = dhash(k, i, m); 
        if (t[j].status == 0) {
            return -1; 
        }
        if (t[j].status == 1 && t[j].k == k) {
            return j; 
        }
        i++; 
    }
    return -1;
}


int hash_remove(dado t[], int m, int k) {
    int j = hash_search(t, m, k);
    if (j != -1) { 
        t[j].status = 2; 
        t[j].k = -1; 
        return 0; 
    }
    return -1; 
}

int main() {
    int m;
	int k;
	int opcao;
	int i;
	int pos;

    cin >> m; 

    dado t[20]; 
    for (int i = 0; i < m; i++) {
        t[i].k = -1;
        t[i].status = 0; 
    }

    cin >> opcao; 

    while (opcao != 5) {
        if (opcao == 1) {
            cin >> k;
            hash_insert(t, m, k);
        }
        else if (opcao == 2) {
            cin >> k;
            pos = hash_search(t, m, k);
            cout << pos << endl; 
        }
        else if (opcao == 3) {
            cin >> k;
            hash_remove(t, m, k);
        }
        else if (opcao == 4) {
            for (i = 0; i < m; i++) {
                    cout << t[i].k << " ";
                }
                cout << endl;
            }
        cin >> opcao;
    }

    return 0;
}
