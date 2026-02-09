#include<iostream>
using namespace std;

int main(){
    
    int *vetor = NULL;  // declarando variaveis;
    int *p = NULL;
    int N;
    int Q;
    int i;
    
    cin >> N;  //lendo o tamanho do vetor
    
    vetor = new int[N]; // definindo o tamanho do vetor
    
    p = vetor;
    for(i = 0;i < N;i++){ // preenchendo o vetor
        cin >> *p;
        p++;
    }
    
    cin >> Q;
    p = vetor;

    cout << *(p + Q) << endl;
    
    
    delete [] vetor;
    
    return 0;
}