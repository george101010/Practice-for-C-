#include <string>  
#include <cstdlib>
#include <iostream>


using namespace std;
class grup// создание класса группа студентов
{
      private:
      string n_s_o[30];// поле ФИО студента
      int marks[30];// поле оценка студента
      public:// методы класса ввод и вывод полей
      void enter_name(int N){
      getline(cin,n_s_o[N]);
      }
      void enter_mark(int N){
      cin>>marks[N];
      }
      void pr_name(int N){
      cout<<n_s_o[N]<<" ";
      }
      void pr_mark(int N){
      cout<<marks[N]<<" ";
      }
};

int main(int argc, char *argv[])
{
    int n;
    grup grup1;
    cout<<"Enter number of students: " ; 
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++)
    {
        cout<<"Enter name, and surname of student N:"<<i+1<<" ";
        grup1.enter_name(i);
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Enter mark of student N:"<<i+1<<" ";
        grup1.enter_mark(i);
    }
    for (int i=0;i<n;i++)
    {
        cout<<"student N:"<<i+1<<" ";
        grup1.pr_name(i);
        grup1.pr_mark(i);
        cout<<endl;
    }
    system("PAUSE");
    return 0;
}
