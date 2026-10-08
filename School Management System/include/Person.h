#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
    string address;
    string phoneNumber;
    string gender;
    string email;
    int id;
public:
    person()
    {

    }
    person( string name,int age,string address,string phoneNumber,string gender,string email,int id)
    {
        this->name=name;
        this->age=age;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->gender=gender;
        this->email=email;
        this->id=id;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getddress()
    {
        return address;
    }
    string getNamber()
    {
        return phoneNumber;
    }
    string getGender()
    {
        return gender;
    }
    string getEmail()
    {
        return email;
    }
    int getId()
    {
        return id;
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setAge(int age)
    {
        this->age=age;
    }
    void setAddress(string address)
    {
        this->address=address;
    }
    void setNamber(string phoneNumber)
    {
        this->phoneNumber=phoneNumber;
    }
    void setGender(string gender)
    {
        this->gender=gender;
    }
    void setEmail(string email)
    {
        this->email=email;
    }
    void setId(int id)
    {
        this->id=id;
    }
    void print()
    {
        cout<<"Pleas Enter Your Name :"<<name<<endl;
        cout<<"Pleas Enter Your age :"<<age<<endl;
        cout<<"Pleas Enter Your address :"<<address<<endl;
        cout<<"Pleas Enter Your PhoneNumber  :"<<phoneNumber<<endl;
        cout<<"Pleas Enter Your gender :"<<gender<<endl;
        cout<<"Pleas Enter Your Email :"<<email<<endl;
        cout<<"Pleas Enter Your Id :"<<id<<endl;

    }
    void information()
    {
        cout<<"Pleas Enter Your Name :"<<endl;
        cin>>name;
        cout<<"Pleas Enter Your Age :"<<endl;
        cin>>age;
        cout<<"Pleas Enter Your Address :"<<endl;
        cin>>address;
        cout<<"Pleas Enter Your PhoneNumber  :"<<endl;
        cin>>phoneNumber;
        cout<<"Pleas Enter Your Gender :"<<endl;
        cin>>gender;
        cout<<"Pleas Enter Your Email :"<<endl;
        cin>>email;
        cout<<"Pleas Enter Your Id :"<<endl;
        cin>>id;
    }
};


#endif // PERSON_H
