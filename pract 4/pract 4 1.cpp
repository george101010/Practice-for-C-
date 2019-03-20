#include <iostream>
using namespace std;
//функция:создает массив размера razm
double* makemem( int razm)
  {
  double* mas = new double[razm];
  return mas;
  }
//функция: заполняет массив с клавиатуры
double* filmas(double *mas,int razm)
{
  cout<<"Enter elements of massive:"<<endl;
  for (int i=0;i<razm;i++)
    {
    cout<<"A["<<i+1<<"]=";
    cin>>mas[i];
    }
    return mas;
} 
 
//функция: печатает массив
void prmas(double *mas,int razm)
{
  cout<<"Printing elements of massive:"<<endl;
  for (int i=0;i<razm;i++)
    {
    cout<<"A["<<i+1<<"]="<<mas[i]<<endl;
     
    }
     
}   
//функция: уничтожает массив
void delmas(double *mas,int razm)
{
  delete [] mas; 
     }
//основная программа : работа с массивом 
// программа предлагает сделать новый массив или выйти из программы
int main() {
  int size;
  bool fl;
  fl=true;
  char q;
  while (fl) 
  {
  
  cout<<"Enter size of massive: ";
  cin>>size;
  double *fmas;
  fmas=makemem( size);
  filmas(fmas,size);
  prmas(fmas,size);
  delmas(fmas,size); 
   cout<<"Enter 1 if you want make another massive.\n";
   cout<<"Enter 0 if you want to exit.\n" ;
   cin>>q;
   if (q=='1') { fl=true; }
   else { fl=false; }
   }
   cout<<"Program was finished.\n" ;
  return 0;
}
