 
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
     
    float t,y,a=3.5, x=-0.7;
    if (a<=x) {   //���������� �������� ���������� y � ������������ � ��������� ��������� 
              y=a+log(x+a);}
    else{if (sin(a*x)<0){
            cout << "Error. Square root of the negative number." << endl;
            system("PAUSE");
            return EXIT_SUCCESS;}
         y=pow( sin(a*x),0.5);}
    if (a>y) { //���������� �������� ���������� t � ������������ � ��������� ��������� 
             t=y/(a-x);}
    else if (y==a) {t=y/(a-x)+(x+a)/(y*y);}
    else{ t=tan(a*x)+cos(2*a*y);} 
    cout << "a="<<a << endl;
    cout << "x="<<x << endl;
    cout << "y="<<y << endl;
    cout << "t="<<t << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
