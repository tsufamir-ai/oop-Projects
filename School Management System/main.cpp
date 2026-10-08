#include <iostream>
#include <Person.h>
#include <Student.h>
#include <School.h>
using namespace std;

int main()
{




    School sh;
    int n;
    do
    {
        cout<<"Press 0 To Exit"<<endl;
        cout<<"Press 1 To Add Student"<<endl;
        cout<<"Press 2 To Add Teacher"<<endl;
        cout<<"Press 3 To Add Staff"<<endl;
        cout<<"Press 4 To Add Courses"<<endl;
        cout<<"Press 5 To Add Class Room"<<endl;
        cout<<"Press 6 To Print All Student "<<endl;
        cout<<"Press 7 To Print All Teacher "<<endl;
        cout<<"Press 8 To Print All Staff "<<endl;
        cout<<"Press 9 To Print All Courses "<<endl;
        cout<<"Press 10 To Print All Class Rooms "<<endl;
        cin>>n;
        system("cls");
        switch(n)
        {
        case 0:
         return 0;
        case 1:
        {
            Student s;
            s.information();
            sh.addStudent(s);
            break;
        }
        case 2:
        {
            Teacher t;
            t.information();
            sh.addTeacher(t);
            break;
        }
        case 3:
        {
            Staff sf;
            sf.information();
            sh.addStaff(sf);
            break;
        }
        case 4:
        {
            Course c;
            c.information();
            sh.addCourse(c);
            break;
        }
        case 5:
        {
            ClassRoom cr;
            cr.information();
            sh.addClassroom(cr);
            break;
        }
        case 6:
            sh.printAllStudents();
            break;
        case 7:
            sh.printAllTeachers();
            break;
        case 8:
            sh.printAllStaffs();
            break;
        case 9:
            sh.printAllcourses();
            break;
        case 10:
            sh.printAllClassRooms();
            break;
        }
    }

        while(n!=0);

}
