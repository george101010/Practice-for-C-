 
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;
class car{// создание класса машина
      private:
              string mark;// поле марка
              string numb;// поле номер
      public:// методы класса ввод и вывод полей
              void en_mark(){
                   cin>>mark;}
              void en_numb(){
                   cin>>numb;}
              void pr_mark(){
                   cout<<mark<<" ";}
              void pr_numb(){
                   cout<<numb<<" ";}       
      };
int main(int argc, char *argv[])
{
    car machine;
    cout<<"Enter mark of machine: ";
    machine.en_mark();
    cout<<"Enter number of machine: ";
    machine.en_numb();
    cout<<"Machine have mark ";
    machine.pr_mark();
    cout<<"and number ";
    machine.pr_numb();
    system("PAUSE");
    return EXIT_SUCCESS;
}
