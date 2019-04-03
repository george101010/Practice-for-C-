#include"bigint.h"
#include<iostream>
#include <locale>
#include <conio.h>
using namespace std;
//основная программа
int main(){
    setlocale(LC_ALL, "Russian");

    char op[1];
    char s1[21];
    cout<<"Введите первое число , на новой строке  знак операции"<<endl;
    cout<<"и на следующей строке второе число."<<endl;
    gets(s1);
    bigint n1(s1);
    gets(op);//ввод знака операции

                 gets(s1);
                 bigint n2(s1);

                 switch ((int)op[0]){// основные арифметические операции
                    case (int)'+': {(n1+n2).prt(); break;}
                    case (int)'-': {(n1-n2).prt(); break;}
                    case (int)'*': {(n1*n2).prt(); break;}
                    case (int)'/': {cout<<(n1/n2)<<endl; break;}
                    default:{cout<<"syntax error";}
                    };

        return 0;}
