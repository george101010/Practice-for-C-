#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    float t,z,a=-0.6, b=5.3;
    if (a<b) {   //���������� �������� ���������� n � ������������ � ��������� ��������� 
              z=pow((-(a*a-b*b)),0.5);}
    else{
         z=1-2*cos(a)*sin(b);}
    if (z<b) { //���������� �������� ���������� m � ������������ � ��������� ��������� 
             t=cbrt(z+a*a*b);}
    else if (z==b) {t=1-log10(z)+cos(a*a*b);}
    else{ t=1/cos(z*a);} 
    cout << "a="<<a << endl;
    cout << "b="<<b << endl;
    cout << "z="<<z << endl;
    cout << "t="<<t << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
