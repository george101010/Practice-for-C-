#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
  ofstream fl;
  string snt="";
  fl.open("text.txt");//открытие файла
  while (snt!="^^"){
    getline(cin,snt);//запись текста в  файл
    fl<<snt<<endl;
    }
  fl.close();
  return 0;
}
