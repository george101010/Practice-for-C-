#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    float t,y,a=4.6, b=1.5;
    if (a<=b) {   //вычисление значения переменной z в соответствии с заданными условиями 
              y=(a*a-b*b)/(a*a*a+b*b*b);}
    else{
         y=a+2*log(b);}
    if (y<b) { //вычисление значения переменной t в соответствии с заданными условиями 
             t=sin(y)*sin(y)+1/tan(a-b);}
    else if (y==b) {t=(2*y+pow(y*y-a,0.5))/(2*b-pow(a*a-y,0.5));}
    else{ t=t=cbrt(y*sin(a))+pow(y*cos(b),-0.5);} 
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    cout << "y="<<y << endl;
    cout << "t="<<t << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
