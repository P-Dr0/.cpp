#include <iostream>
using namespace std;

struct dado {
    int k;
    int status;
};

int hash_aux(int k, int m) {
    if (k < 0) {
        return (k % m + m) % m;
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

int main() {
    int m;
    int c;
    cin >> m;

    dado t[m];
    for (int i = 0; i < m; i++) {
        t[i].k = -1;
        t[i].status = 0;
    }

    cin >> c;
    while (c != 0) {
        hash_insert(t, m, c);
        cin >> c;
    }

    for (int i = 0; i < m; i++) {
        cout << t[i].k << " ";
    }

    return 0;
}
