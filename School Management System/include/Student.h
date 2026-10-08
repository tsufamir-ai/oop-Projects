#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student:public person
{
private:
    string gradeLevel;
    float gpa;
public:
    Student()
    {

    }
    Student(string name,int age,string address,string phoneNumber,string gender,string email,int id,string gradeLevel,float gpa)
    {
        this->name=name;
        this->age=age;
        this->address=address;
        this->phoneNumber=phoneNumber;
        this->gender=gender;
        this->email=email;
        this->id=id;
        this->gradeLevel=gradeLevel;
        this->gpa=gpa;
    }
    void sitGradeLaval(string gradeLevel)
    {
        this->gradeLevel=gradeLevel;
    }
    void setGpa(float gpa)
    {
        this->gpa=gpa;
    }
    string getgradeLevel()
    {
        return gradeLevel;
    }
    float getGpa()
    {
        return gpa;
    }
    void print()
    {
        person::print();

        cout<<"The Grade Level Is : "<<gradeLevel<<endl;
        cout<<"The GPA Is : "<<gpa<<endl;

    }
    void information()
    {
        person::information();
        cout<<"Pleas Enter Your Grade Level"<<endl;
        cin>>gradeLevel;
        cout<<"Pleas Enter Your GPA"<<endl;
        cin>>gpa;
    }


};

#endif // STUDENT_H
