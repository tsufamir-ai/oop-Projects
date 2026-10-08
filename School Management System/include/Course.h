#ifndef COURSE_H
#define COURSE_H
#include<iostream>
using namespace std;
class Course
{
private:
    string courseCode;
    string courseName;
    string courseTeacher;
public:
    Course()
    {

    }
    Course( string courseCode,string courseName,string courseTeacher)
    {
        this->courseCode=courseCode;
        this->courseName=courseName;
        this->courseTeacher=courseTeacher;

    }
    void setCourseCode(string courseCode)
    {
        this->courseCode=courseCode;

    }
    void setCourseName(string courseName)
    {
        this->courseName=courseName;

    }
    void setCourseTeacher(string courseTeachere)
    {
        this->courseTeacher=courseTeachere;
    }
    string getcourseCode()
    {
        return courseCode;
    }
    string getcourseName()
    {
        return courseName;
    }
    string getcourseTeacher()
    {
        return courseTeacher;
    }
    print()
    {
        cout<<"The Course Code Is : "<<courseCode<<endl;
        cout<<"The Course Name Is : "<<courseName<<endl;
        cout<<"The Teacher Name Is : "<<courseTeacher<<endl;
    }
    void information()
    {
        cout<<"Enter Your Course Code"<<endl;
        cin>>courseCode;
        cout<<"Enter Your Course Name"<<endl;
        cin>>courseName;
        cout<<"Enter Your Course Teacher"<<endl;
        cin>>courseTeacher;
    }

};

#endif // COURSE_H
