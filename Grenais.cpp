#include <iostream>

using namespace std;

int main(){
    int x, y;
    int op;
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;
    
    while(op = 1)
	{
                cin >> x;
                cin >> y;
                
                if(x > y) inter ++;
                if(x < y) gremio ++;
                if(x == y) empate++;
                grenal++;
                
                cout << "Novo grenal (1-sim 2-nao)" << endl;
                cin >> op;
                
                 if(op == 2) break;
    }
    cout << grenal <<" grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << empate << endl;
    
    if(inter > gremio) cout << "Inter venceu mais" << endl;
    if(inter < gremio) cout << "Gremio venceu mais" << endl;
    if(inter == gremio) cout << "Nao houve vencedor" << endl;
    
    return 0;
}