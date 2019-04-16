#include <iostream>
using namespace std;
int main()
{
string name;
setlocale(LC_ALL, "Russian") ;
 //запрос имени
cout << "Введите ваше имя:";
cin >> name;
cin.ignore();
 cout << "Здравствуйте, "<< name <<".\n"; //вывод имени с приветствием
cin.get();
return 0;}
