#include<iostream>
using namespace std;

int main(){
    
    int *vetor = NULL;
    int N;
    int i;
    int *p = NULL;
    
    cin >> N;
    
    vetor = new int[N];
    
    p = vetor;
    for(i = 0;i < N;i++){
        cin >> *p;
        p++;
    }
    p = vetor;
    for(i = 0;i < N;i++){
        cout << *p << " ";
        p++;
    }
    
    delete [] vetor;
    
    return 0;
}