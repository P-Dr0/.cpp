#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    float x;
	float y;
	float z;
    y = 0;
    z = 0;
    
	while(true){
                cin >> x;
                cout << fixed << setprecision(2);
                if(x < 0 || x > 10)
				{
                      cout << "nota invalida" << endl;
                }
                else if(z == 0)
				{
                      y = x;
                      z = 1;
                }
				else
				{
                      cout << "media = " << ((y+x)/2) << endl;
                      break;
                }
    } 
    return 0;
}