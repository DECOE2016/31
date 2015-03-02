#include<iostream.h>
#include<conio.h>
using namespace std;
class MotorbikeParking
{ public void parkbike()
{
cout<<”the bike is parked in the motorbike parking area”;
}
}
class CarParking
{
public void parkcar()
{
cout<<”the car is parked inside the car parking”;
}
public void parkhcar()
{
cout<<”the handicapped car is parked in the car parking”;
}
}
class HandicappedcarParking: public CarParking // derived class
{
public void parkhandicappedcar()
{
cout<<”the handicapped car is parked in the handicapped car parking”;
}
}
void main()
{
clrscr();
MotorbikeParking m;
CarParking c;
HandicappedcarParking h; // h can access the members of both CarParking and the HandicappedcarParking classes
m.parkbike();
c.parkcar();
if (c.parkhcar()==true) // because it’s the method created for handicapped car
{
cout<<”invalid function”;
)
h.parkhcar();// either use this method or the method mentioned below to park the handicapped car
h.parkhandicappedcar();
getch();
)
