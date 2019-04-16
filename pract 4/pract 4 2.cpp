#include <iostream>
using namespace std;
//функция перестановки элементов в двумерном массиве 
int* swapneib(int *mass , int size){
    int c;
    for (int i=1;i<=11;i=i+2) {
          c=mass[i-1];
          mass[i-1]=mass[i];
          mass[i]=c;
    }
    return mass;
}  
// основная программа: создание массива 
// заполнение его с клавиатуры
//вывод эл-тов и уничтожение
int main() {
  int* mas = new int[12]; 
  cout<<"Enter elements of massive:"<<endl;
  for (int i=0;i<12;i++)
    {
    cout<<"A["<<i+1<<"]=";
    cin>>mas[i];
    }
  swapneib(mas,12);
  cout<<"Printing elements of massive:"<<endl;
  for (int i=0;i<12;i++)
    {
    cout<<"A["<<i+1<<"]="<<mas[i]<<endl;
     
    }
  delete [] mas; 
  return 0;
}
