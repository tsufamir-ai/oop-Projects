#ifndef TEACHER_H
#define TEACHER_H
#include <istream>
using namespace std;
class Teacher :public person
{
private:
    string subject;
    float salary;
public:
    Teacher()
    {

    }
    Teacher(string name,int age,string address
            ,string phoneNumber,string gender,string email
            ,int id,string subject,float salary)
    {
        this->name=name;
        this->age=age;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->gender=gender;
        this->email=email;
        this->id=id;
        this->subject=subject;
    this->salary=salary;
    }


void setSubject(string subject)
{
    this->subject=subject;
}
void setSalary( float salary)
{
    this->salary=salary;
}
string getSubject()
{
    return subject;
}
float getSalary()
{
    return salary;
}
void print()
{
    person::print();
    cout<<"Your Salary :"<<salary<<endl;
    cout<<"Your Subject :"<<subject<<endl;
}
void information()
{
    person::information();
    cout<<"Pleas Enter Your Salary :"<<endl;
    cin>>salary;
    cout<<"Pleas Enter Your Subject :"<<endl;
    cin>>subject;
}



};

#endif // TEACHER_H
