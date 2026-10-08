#ifndef EXAM_H
#define EXAM_H
#include <iostream>
using namespace std;


class Exam :public person
{
private:
    string examName;
    string courseCode;
    string examData;
public:
    Exam()
    {

    }
    Exam(string examName,string courseCode,string examData)
    {
        this->examName=examName;
        this->courseCode=courseCode;
        this->examData=examData;
    }
    void setexamName(string examName)
    {
        this->examName=examName;
    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;
    }
    void setexamData(string examData)
    {
        this->examData=examData;
    }
    void print()
    {
        cout<<"The Exam Name Is :"<<examName<<endl;
        cout<<"The Course Code Is :"<<courseCode<<endl;
        cout<<"The Exam Data Is :"<<examData<<endl;

    }
    void information()
    {
        cout<<"The Exam Enter Your Exam Name "<<endl;
        cin>>examName;
        cout<<"The Exam Enter Your Course Code "<<endl;
        cin>>courseCode;
        cout<<"The Exam Enter Your Exam Data"<<endl;
        cin>>examData;

    }

};

#endif // EXAM_H
