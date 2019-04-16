#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    float n,m,a=4.8, b=-7.8;
    if (a>=b) {
              n=cbrt(a-b);}
    else{
         n=a*a+(a-b)/sin(a*b);}
     
    
    
    if (n<b) {
             m=-(n+a)/b+sqrt(sin(a)*sin(a)-cos(n));}
    else if (n==b) {m=b*b+tan(n*a);}
    else{ m=b*b*b+n*a*a;} 
    cout << n<<" "<<m << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
