#include<iostream>
#include<string>
// создание класса student
using namespace std;
class Property{
    protected:
       float worth;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        Property(float a) { worth = a; }
        virtual ~Property() {}
        virtual float calc(){ return worth;}
      };

//класс
class Appartment:public Property{
     public://конструктор
     Appartment (float p) : Property(p ) {}
     float calc(){ return (worth/1000);}
};

class Car:public Property{
     public://конструктор
     Car (float p) : Property(p ) {}
     float calc(){ return (worth/200);}
};

class CountryHouse:public Property{
     public://конструктор
     CountryHouse (float p) : Property(p ) {}
     float calc(){ return (worth/500);}
};


int main(){ //основная программа ввод и вывод данных объекта классов
    float pr;
    Property *W[7];

	cout << "Enter price of appartment 1: ";
	cin >> pr;
    W[0] = new Appartment(pr);


	cout << "Enter price of appartment 2: ";
	cin >> pr;
	W[1] = new Appartment(pr);

    cout << "Enter price of appartment 3: ";
	cin >> pr;
	W[2] = new Appartment(pr);

 	cout << "Enter price of car 1: ";
	cin >> pr;
	W[3] = new Car(pr);

    cout << "Enter price of car 2: ";
	cin >> pr;
	W[4] = new Car(pr);

    cout << "Enter price of COuntry House 1: ";
	cin >> pr;
	W[5] = new CountryHouse(pr);

    cout << "Enter price of COuntry House 2: ";
	cin >> pr;
	W[6] = new CountryHouse(pr);

	cout<<"Tax for Appartment 1 is "<<W[0]->calc()<<"\n";
	cout<<"Tax for Appartment 2 is "<<W[1]->calc()<<"\n";
	cout<<"Tax for Appartment 3 is "<<W[2]->calc()<<"\n";

	cout<<"Tax for Car 1 is "<<W[3]->calc()<<"\n";
	cout<<"Tax for Car 2 is "<<W[4]->calc()<<"\n";

	cout<<"Tax for CountryHouse 1 is "<<W[5]->calc()<<"\n";
	cout<<"Tax for CountryHouse 2 is "<<W[6]->calc()<<"\n";
    return 0;}
