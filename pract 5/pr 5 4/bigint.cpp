#include <iostream>
#include "bigint.h"


using namespace std;
void bigint::prt(){
            if (sign==1) {cout<<mod;}
            else {cout<<'-'<<mod;}
        };
//конструктор bigint из строки
bigint::bigint(char *s){
    int j;
    mod=0;
    if (s[0]=='-'){
            sign=-1;
            j=1;
    }
    else {
            sign=1;
            j=0;}

    while (s[j]!='\0'){
        mod=mod*10+((int)s[j]-48);
        j++;
    }
}
//перегрузка конструктора принимает знак и модуль
bigint::bigint(short int sgn,unsigned long long int m){
    sign=sgn;
    mod=m;
    }
//перегрузка сложения для bigint
bigint operator+ (bigint& a,bigint& b){
    bigint c(1,0);
    if (a.mod<b.mod){
        swap(a.mod,b.mod);
        swap(a.sign,b.sign);
    }
    if (a.sign==-1){
            c.sign=-1;
            c.mod=a.mod+b.sign*a.sign*b.mod;
        }
    else {
           c.sign=1;
           c.mod=a.mod+b.sign*b.mod;
        }
    return c;
}
//перегрузка вычитания для bigint
bigint operator- (bigint& a,bigint& b){
    bigint c(1,0);
    if (a.mod<b.mod){
        swap(a.mod,b.mod);
        swap(a.sign,b.sign);
    }

    if (a.sign==-1){
            c.sign=-1;
            c.mod=a.mod-b.sign*a.sign*b.mod;
        }
    else {
           c.sign=1;
           c.mod=a.mod-b.sign*b.mod;
        }
    return c;
}
//перегрузка умножения для bigint
bigint operator* (bigint& a,bigint& b){
    bigint c(1,0);
    c.sign=a.sign*b.sign;
    c.mod=a.mod*b.mod;
    return c;
}
//перегрузка деления для bigint
float operator/ (bigint& a,bigint& b){
    float c;
    c=(a.mod/b.mod)*(a.sign*b.sign);
    return c;}
