// Created on iPad.

#include <iostream>
using namespace std;
class Name
{
    public:
    Name(int =10,int =11);
    Name operator+(Name&);
    void display();
    private:
    int phone;
    int number;
};
Name Name::operator+(Name&npp)
{
    return Name(phone+npp.phone,number+npp.number);
}
Name::Name(int a,int b)
{
phone=a;
number=b;
}
void Name::display()
{
    cout<<this->phone<<"  "<<this->number<<endl;
}
int main() 
{
    
    Name name1(1,3),name2(2,3),name3;
    name3=name1+name2;
    name1.display();
    name1.display();
    name3.display();

    return 0;


    
}
