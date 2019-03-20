#include <iostream>
#include<cstdlib>
using namespace std;// заполнение 2 мерного массива случайными числами
int** filrand(int **m2, int a,int b) {
    for (int q=0;q<a;q++){
      for (int z=0;z<b;z++){
        m2[q][z]=rand()%50+10;
      }
      }
    return m2;
}
// заполнение 2 мерного массива на экран
int** pr2mermass(int **m2, int a,int b) {
    for (int q=0;q<a;q++){
      for (int z=0;z<b;z++){
        cout<<m2[q][z]<<"  ";
      }
      cout<<endl;
      }
    return m2;
}
// основная программа создание 2 мерного массива 
//работа с ним и уничтожение
int main() {
  int n,m ;
  cin>>n;
  cin>>m;
  int **mas = new int* [n];
  for (int i = 0; i < n; i++) {
        mas[i] = new int [m]; } 
  filrand(mas, n,m) ;
  pr2mermass(mas, n,m) ;

  delete [] mas; 
  return 0;
}