#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    float x;
	float y;
	float z;
	float n;
    y = 0;
    z = 0;
    n = 0;
    
    cout << setprecision(2);
    
    while(x != 2){
                cin >> x;
                if(n == 1)
				{
                     
                if(x == 2)
				{
                     break;
                }else if(x == 1)
				{
                       n = 0;
                       continue;
                }
                else
				{
                     cout << "novo calculo (1-sim 2-nao)" << endl;
                     continue;
                      }
                }else
				{
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
                     cout << "media = " << ((x+y)/2.00) << endl;
                     z = 0;
                     n = 1;
                }
                }
                
                if(n == 1) cout << "novo calculo (1-sim 2-nao)" << endl;
                     
    }    
    return 0;
}