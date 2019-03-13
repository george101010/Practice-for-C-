#include <string> 
#include <cstdlib>
#include <iostream>
 

using namespace std;
class book //Создание класса книга с полями страницы (информация на них),число страниц(до 100),название книги.
{ 
private:
  string pages[100];
  int kol_pages; 
  string title;
public:// методы класса: вывести название книги, число страниц и сами страницы
       void get_page(int num)
            {
            cout<<pages[num];
            }
       void get_title()
            {
            cout<<title<<endl;}
       void enter_page(int num)// методы класса: ввести название книги, число страниц и сами страницы
            {
            getline(cin,pages[num]);
            }
       void enter_kol_page(int a)
            {
            kol_pages = a;
            }
       void enter_title()
            {
            getline(cin,title);
            }
       }; 
int main(int argc, char *argv[])
{
    int num;// демонстрация работы класса 
    cout<<"Enter title and press Enter: "<<endl;
    book kniga;
    kniga.enter_title();
    cout<<"Enter number of pages and press Enter: "<<endl;
    cin>>num;
    cin.ignore();
    kniga.enter_kol_page(num);
    for (int i=0; i<num; i++){
        cout<<"Enter information on page "<<i+1<<" and press enter."<<endl;
        kniga.enter_page(i);
        }
    cout<<"Your book:";
    kniga.get_title();
    
    for (int i=0; i<num; i++){
         cout<<"Page "<<i+1<<endl;
         kniga.get_page(i);
         cout << endl;
        }
    system("PAUSE");
    return EXIT_SUCCESS;
}
