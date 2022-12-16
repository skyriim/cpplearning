#include <iostream>

using namespace std;


enum colorenum{Blue=5,Yellow};

struct driver{
string name;
int age;
};
struct car{
colorenum color;
struct driver d;
} car1;

void  structsdemo(){
struct driver dd ={"张三",20};
car1.color = Blue;
car1.d = dd;
cout<<"car.driver's name:"<<car1.d.name<<" car.color:"<<car1.color<<endl;
}
