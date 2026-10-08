#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
using namespace std;
class ClassRoom
{
private:
    int roomNumber;
    int capacity;
public:
    ClassRoom()
    {

    }
    classRoom( int roomNumber,int capacity)
    {
        this->roomNumber=roomNumber;
        this->capacity=capacity;
    }
    void setRoomNumber(int roomNumber)
    {
        this->roomNumber=roomNumber;
    }
    void setcapacity(int capacity)
    {
        this->capacity=capacity;
    }
    int getroomNumber()
    {
        return roomNumber;
    }
    int getcapacity()
    {
        return capacity;
    }
    void print()
    {
        cout<<"The Room Number Is :"<<roomNumber<<endl;
        cout<<"The Capacity Is :"<<capacity<<endl;
    }
    void information()
    {
        cout<<"Enter The Room Number Is :"<<endl;
        cin>>roomNumber;
        cout<<"Enter The Capacity Is :"<<endl;
        cin>>capacity;

    }
};

#endif // CLASSROOM_H
