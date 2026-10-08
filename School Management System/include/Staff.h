#ifndef STAFF_H
#define STAFF_H
#include <iostream>
using namespace std;


class Staff:public person
{
private:
    string role;
    float salary;
public:
    staff()
    {

    }
    staff(string name,int age,string address,string phoneNumber,string gender,string email,int id,string role,float salary)
    {
        this->name=name;
        this->age=age;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->gender=gender;
        this->email=email;
        this->id=id;
        this->role=role;
        this->salary=salary;
    }
    void setRole(string role)
    {
        this->role=role;
    }
    void setSalary(float salary)
    {
        this->salary=salary;
    }
    string getRole()
    {
        return role;
    }
    float getSalary()
    {
        return salary;
    }
    void print()
    {
        person::print();
        cout<<"Your Salary :"<<salary<<endl;
        cout<<"Your Role :"<<role<<endl;
    }
    void information()
    {
        cout<<"Enter Your Salary :"<<salary<<endl;
        cin>>salary;
        cout<<"Enter Your Role :"<<role<<endl;
        cin>>role;

    }


};

#endif // STAFF_H
