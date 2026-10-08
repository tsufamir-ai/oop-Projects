#include <Student.h>
#include <Staff.h>
#include <ClassRoom.h>
#include <Course.h>
#include <Teacher.h>
#include <iostream>
using namespace std;

class School
{
    private:
        string schoolNamel;
        string address;
        string principaName;
        Student students[1000];
        Teacher teachers[50];
        Staff staffs[50];
        Course courses[6];
        ClassRoom classrooms[200 0];
        int studentCounter=0;
        int teacherCounter=0;
        int staffCounter=0;
        int courseCounter=0;
        int classroomCounter=0;

    public:

       void addStudent(Student s)
       {
           students[studentCounter]=s;
           studentCounter++;
       }
        void addTeacher(Teacher t)
       {
           teachers[teacherCounter]=t;
           teacherCounter++;
       }
        void addStaff(Staff sf)
       {
           staffs[staffCounter]=sf;
           staffCounter++;
       }
        void addCourse(Course c)
       {
           courses[courseCounter]=c;
           courseCounter++;
       }
        void addClassroom(ClassRoom sr)
       {
           classrooms[classroomCounter]=sr;
           classroomCounter++;
       }
       void printAllStudents()
       {
           for(int i=0;i<studentCounter;i++)
           {
               students[i].print();
               cout<<endl;
           }
       }
        void printAllTeachers()
       {
           for(int i=0;i<teacherCounter;i++)
           {
               teachers[i].print();
               cout<<endl;
           }
       }
        void printAllStaffs()
       {
           for(int i=0;i<staffCounter;i++)
           {
               staffs[i].print();
               cout<<endl;
           }
       }
        void printAllcourses()
       {
           for(int i=0;i<courseCounter;i++)
           {
               courses[i].print();
               cout<<endl;
           }
       }
        void printAllClassRooms()
       {
           for(int i=0;i<classroomCounter;i++)
           {
               classrooms[i].print();
               cout<<endl;
           }
       }
};
