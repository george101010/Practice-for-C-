#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
class library{   //�������� ������ ����������          
      public:
             void getkolb(); 
             void getbooks();
             void showbooks();
             struct book{ //��������: ����� � ������� �����, �������� ,����� �������, ���������� �� ���������          
                    string autor;
                    string title;
                    string pages[100];
                    int kolpages;
                    };
      private:
              int kolb;//����� ����
              book knigi[200];      //������ �������� ����
       };
      //������ ������
      //���� ���������� ����
void library::getkolb(){
     cout<<"Enter number of books in the library: ";
     cin>>kolb;
     }//���� ����
void library::getbooks(){
     for (int i=0;i<kolb;i++){
         cout<<"Enter the data of book N"<<i+1<<"\n";
         cout<<"Autor: ";
         cin.ignore();
         getline(cin,knigi[i].autor);
         cout<<"Title: ";
         cin.ignore();
         getline(cin,knigi[i].title);
         cout<<"Number of pages in book: ";          
         cin>>knigi[i].kolpages;
         cin.ignore();
         for (int k=0;k<knigi[i].kolpages;k++){
             cout<<"Information on the page N"<<k+1<<":\n";
             cin.ignore();
             getline(cin,knigi[i].pages[k]);}
         }
     } //����� ����������� ����������
void library::showbooks() {
     for (int i=0;i<kolb;i++){
         cout<<"The data of book N"<<i+1<<"\n";
         cout<<"Autor: "<<knigi[i].autor<<"\n";
         cout<<"Title: "<<knigi[i].title<<"\n";
         cout<<"Number of pages in book: "<<knigi[i].kolpages<<"\n";          
         for (int k=0;k<knigi[i].kolpages;k++){
             cout<<"Page N"<<k+1<<"\n";
             cout<<knigi[i].pages[k]<<"\n";}
         }
     }      
int main(int argc, char *argv[])
{
    library BIBLIOT; 
    BIBLIOT.getkolb();
    BIBLIOT.getbooks();
    BIBLIOT.showbooks();
    system("PAUSE");
    return EXIT_SUCCESS;
}
