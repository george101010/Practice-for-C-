#include<iostream>
#include<string>
#include<math.h>
// создание класса student
using namespace std;
class Expression{
    protected:
       string expdr;
       string expr;
    public://конструктор класса
        //создает класс с переданными в конструктор данными
         virtual void printexp(){cout<<expr;}
       virtual float  calcul(float x){ return x; }
         virtual void printexpdr(){cout<<expdr;}
      };

//класс
class cons:public Expression{
     public://конструктор
      void printcon(){ expr="x"; printexp();}
       float calculcont(float x){return x;}
       void printconder(){ expdr="1"; printexpdr();}
};

class pluss:public Expression{
     public://конструктор
      void printpl(){ expr="+"; printexp();}
       float calculpl(float x,float y){return x+y;}
       void printplder(){ expdr="2"; printexpdr();}
};

class minuss:public Expression{
     public://конструктор
      void printmn(){ expr="-"; printexp();}
       float calculmn(float x,float y){return x-y;}
       void printmnder(){ expdr="2"; printexpdr();}
};

class umn:public Expression{
     public://конструктор
      void printumn(){ expr="*"; printexp();}
       float calculumn(float x,float y){return x*y;}
       void printumnder(){ expdr="y+x"; printexpdr();}
};

class del:public Expression{
     public://конструктор
      void printdel(){ expr="/"; printexp();}
       float calculdel(float x,float y){return x/y;}
       void printdelder(){ expdr="(y+x)/y^2"; printexpdr();}
};

class sinus:public Expression{
     public://конструктор
      void printsinus(){ expr="sin( )"; printexp();}
       float calculsinus(float x){return (sin(x));}
       void printsinusder(){ expdr="cos( )"; printexpdr();}
};

class cosinus:public Expression{
     public://конструктор
      void printcosinus(){ expr="cos( )"; printexp();}
       float calculcosinus(float x){return cos(x);}
       void printcosinusder(){ expdr="-sin( )"; printexpdr();}
};
class expon:public Expression{
     public://конструктор
      void printexpon(){ expr="e^( )"; printexp();}
       float calculexpon(float x){return exp(x);}
       void printexponder(){ expdr="e^( )"; printexpdr();}
};

class logar:public Expression{
     public://конструктор
      void printlogar(){ expr="ln( )"; printexp();}
       float calcullogar(float x){return log(x);}
       void printlogarder(){ expdr="1/x"; printexpdr();}
};
int main(){ //основная программа ввод и вывод данных объекта классов
    cons a1;
    pluss a2;
    minuss a3;
    del a4;
    umn a5;
    sinus a6;
    cosinus a7;
    expon a8;
    logar a9;

    cout<<a1.calculcont(442)<<"\n";
    cout<<"Derivative of: ";
    a1.printcon();
    cout <<"\n";
    a1.printconder();
    cout <<"\n";

        cout<<a2.calculpl(42,45)<<"\n";
    cout<<"Derivative of: ";
    a2.printpl();
    cout <<"\n";
    a2.printplder();
    cout <<"\n";

        cout<<a3.calculmn(72,45)<<"\n";
    cout<<"Derivative of: ";
    a3.printmn();
    cout <<"\n";
    a3.printmnder();
    cout <<"\n";

        cout<<a4.calculdel(44,2)<<"\n";
    cout<<"Derivative of: ";
    a4.printdel();
    cout <<"\n";
    a4.printdelder();
    cout <<"\n";

        cout<<a5.calculumn(44,72)<<"\n";
    cout<<"Derivative of: ";
    a5.printumn();
    cout <<"\n";
    a5.printumnder();
    cout <<"\n";

    cout<<a6.calculsinus(2)<<"\n";
    cout<<"Derivative of: ";
   a6. printsinus();
    cout <<"\n";
    a6.printsinusder();
    cout <<"\n";

    cout<<a7.calculcosinus(7)<<"\n";
    cout<<"Derivative of: ";
    a7.printcosinus();
    cout <<"\n";
    a7.printcosinusder();
    cout <<"\n";

        cout<<a8.calculexpon(3)<<"\n";
    cout<<"Derivative of: ";
   a8. printexpon();
    cout <<"\n";
    a8.printexponder();
    cout <<"\n";

        cout<<a9.calcullogar(12)<<"\n";
    cout<<"Derivative of: ";
    a9.printlogar();
    cout <<"\n";
    a9.printlogarder();
    cout <<"\n";
    return 0;}
