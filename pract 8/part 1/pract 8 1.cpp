#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

  string snt;
  ifstream fl("text1.txt");//открытие файла
   while (getline(fl, snt)) //считывание строк из файла
        {
            int n=snt.length();
            for (int i=0;i<n;i++){//печать каждого слова на одной строке
                if (snt[i]==' '){
                    cout<<"\n";
                }
                else {cout<<snt[i];}
            }
            cout<<"\n";
        }

  fl.close();//закрытие файла
  return 0;
}
