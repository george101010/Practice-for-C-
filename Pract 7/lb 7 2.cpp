#include<iostream>
#include<string>
// создание класса animal
using namespace std;
class figure{
    protected:
        string name;
        int side1;
        int side2;
        int side3;
        int side4;
    public://конструктор класса
        //создает класс с переданными в конструктор данными
        figure( string mn,int s1, int s2,int s3, int s4){
        name=mn;
        side1=s1;
        side2=s2;
        side3=s3;
        side4=s4;
        }
        //гетеры класса
        void getsides();
        string getname(); };
void figure::getsides(){
    cout<<side1 <<" " ;
    cout<<side2 <<" " ;
    cout<<side3 <<" " ;
    cout<<side4 ;  }
string figure::getname(){  return name; }

class fourangle:figure{
 public://конструктор
    fourangle(string mn,int s1, int s2,int s3, int s4) : figure(mn,s1, s2,s3,s4) {}
    void getsidesf();
    string getnamef(); };
void fourangle::getsidesf(){getsides(); }
 string  fourangle::getnamef(){ return getname();}
 //
class rectangle:fourangle{
 public://конструктор
    rectangle(string mn,int s1, int s2,int s3, int s4) : fourangle(mn,s1, s2,s3,s4) {}
    void getsidesr();
    string getnamer(); };

void rectangle::getsidesr(){getsidesf(); }
 string  rectangle::getnamer(){ return getnamef();}
 //
class romb:fourangle{
 public://конструктор
    romb(string mn,int s1, int s2,int s3, int s4) : fourangle(mn,s1, s2,s3,s4) {}
    void getsidesro();
    string getnamero(); };

void romb::getsidesro(){getsidesf(); }
 string  romb::getnamero(){ return getnamef();}


int main(){ //основная программа ввод и вывод данных объекта классов
    rectangle w("Rectangle",43,40,43,40);

    cout<<w.getnamer()<<" with sides ";
    w.getsidesr();
    cout<<".\n";

    romb q("Romb",20,50,20,50);
    cout<<q.getnamero()<<" with sides ";
    q.getsidesro();
    cout<<".\n";
    return 0;}
