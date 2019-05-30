#include<iostream>
#include<string>
// создание класса animal
using namespace std;
class ekran{
    protected:

        int width;
        int high;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
       ekran(  int s1, int s2){

        width=s1;
        high=s2;

        }
        //гетеры класса
        void getsides();
          };
void ekran::getsides(){
    cout<<width <<" " ;
    cout<<high  ;
   }


class pad{
protected:
    int numofb;
 public://конструктор
    pad( int n1)  { numofb=n1;}
    void getnum(){ cout<<numofb; } };



 //
 class nout : public ekran, public pad{
 public:
     nout(int w,int h,int n):ekran( w,h),pad(n){}
     void getnout(){getsides();
     cout<<" " ;
     getnum();}
 };

 class tel : public ekran, public pad{
 public:
     tel(int w,int h,int n):ekran( w,h),pad(n){}
     void gettel(){getsides();
     cout<<" ";
     getnum();}
 };
  class pc : public ekran, public pad{
 public:
     pc(int w,int h,int n):ekran( w,h),pad(n){}
     void getpc(){getsides();
     cout<<" ";
     getnum();}
 };
int main(){ //основная программа ввод и вывод данных объекта классов
    nout w(23,54 ,54);
    pc q(40,50,54);
    tel a(5,6,12);
    cout<<"Parameters of nout: ";
    w.getnout();
    cout<<endl;
    cout<<"Parameters of PC: ";
    q.getpc();
    cout<<endl;
    cout<<"Parameters of mobile: ";
    a.gettel();

    return 0;}
