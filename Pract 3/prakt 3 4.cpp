#include <cstdlib>
#include <iostream>
#include <math.h> 
using namespace std;
class vect{// создание класса вектор
      private:
      float kor[3];// координаты вектора в трёхмерном пространстве
      public:// методы класса ввод и вывод координат и получение модуля
             void en_kord(){
                  cin>>kor[0]>>kor[1]>>kor[2];
              };
             void pr_kord(){
                  cout<<kor[0]<<" "<<kor[1]<<" "<<kor[2];}
             float vect_abs( ); 
              };
float vect::vect_abs( ){
                 return pow(kor[0]*kor[0]+kor[1]*kor[1]+kor[2]*kor[2],0.5);}
int main(int argc, char *argv[])
{
    vect A; 
    cout<<"Enter coordinates of vector A :";
    A.en_kord();
    cout<<"Vector A have coordinates: ";
    A.pr_kord();
    cout<<"\nVector A have module: "<<A.vect_abs( );  
    system("PAUSE");
    return EXIT_SUCCESS;
}
