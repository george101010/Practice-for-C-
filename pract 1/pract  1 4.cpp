#include <iostream> 
using namespace std; 
 int main() 
 { 
 float n1,n2; 
//включение кирилицы и считывание двух переменных
setlocale(LC_ALL, "Russian");
cout << "Введите 2 числа по одному на каждой строке.\n";
 cin >> n1; 
 cin.ignore(); 
 cin >> n2; 
 cout << n1+n2<<"\n";  //вывод суммы
cin.get();
return 0;}
