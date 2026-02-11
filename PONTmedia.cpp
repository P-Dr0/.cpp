#include<iostream>
using namespace std;

int main()
{
	int *vetor = NULL;
    int *p = NULL;
    int N;
    int i;
    float t = 0;
    int c = 0;
    float m = 0;
    
    cin >> N;
    
    vetor = new int [N];
    
    p = vetor;
    
    for(i = 0;i < N;i++){
        cin >> *p;
        p++;
    }
    p = vetor;
    for(i = 0;i < N;i++){
        t = t + (*p);
        p++;
        c++;
    }
    
    m = t / i;
    
    cout << m << endl;
    
    return 0;
}