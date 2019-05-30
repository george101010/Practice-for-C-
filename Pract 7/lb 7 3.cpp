#include<iostream>
#include<string>
// создание класса animal
using namespace std;
class vehicle{
    protected:
        string name;
        int weight;
        int speed;

    public://конструктор класса
        //создает класс с переданными в конструктор данными
        vehicle( string mn,int w, int sp){
            name=mn;
            weight=w;
            speed=sp;
        }
        //гетеры класса
        int getspeed();
        int getweight();
        string getname(); };


int vehicle::getspeed(){ return speed; }
int vehicle::getweight(){  return weight; }
string vehicle::getname(){  return name; }



//класс cat, наследуется от animal
class car:vehicle{


    public://конструктор
    car(string mn,int w,int sp) : vehicle( mn, w, sp) {}
    int getspeed_c();
    string getname_c();
    int getweight_c();

};

int car::getspeed_c(){ int z=getspeed(); return z; }
int car::getweight_c(){ int z=getweight(); return z; }
string car::getname_c(){ string z=getname(); return z; }

//класс dog, наследуется от animal
class bus:vehicle{

    public://конструктор
    bus(string mn,int w,int sp) : vehicle( mn, w, sp) {

        }
    int getspeed_d();
    string getname_d();
    int getweight_d();

    //вывод  флага
};

int bus::getspeed_d(){ int z=getspeed(); return z; }
int bus::getweight_d(){ int z=getweight(); return z; }
string bus::getname_d(){ string z=getname(); return z; }

class bike:vehicle{

    public://конструктор
    bike(string mn,int w,int sp) : vehicle( mn, w, sp) {

        }
    int getspeed_p();
    string getname_p();
    int getweight_p();

    //вывод  флага
};

int bike::getspeed_p(){ int z=getspeed(); return z; }
int bike::getweight_p(){ int z=getweight(); return z; }
string bike::getname_p(){ string z=getname(); return z; }

int main(){ //основная программа ввод и вывод данных объекта классов


//создание класса cat
    car maz("Mazda cx5",1300,300);
    cout<<"Name: " << maz.getname_c() <<"\n";
    cout<< "Speed: "<<maz.getspeed_c()<<" km/h\n";
    cout<< "Weight: "<<maz.getweight_c() <<" kg\n";

//создание класса dog
   bus bs("Ikarus",10000,90);
    cout<<"\nName: " << bs.getname_d() <<"\n";
    cout<< "Speed: "<<bs.getspeed_d()<<" km/h\n";
    cout<< "Weight: "<<bs.getweight_d() <<" kg\n";


//создание класса parrot
    bike par("Mount 344-c42",8,30);
    cout<<"\nName: " << par.getname_p() <<"\n";
    cout<< "Speed: "<<par.getspeed_p()<<" km/h\n";
    cout<< "Weight: "<<par.getweight_p() <<" kg\n";

    return 0;}
