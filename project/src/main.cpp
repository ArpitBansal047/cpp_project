#include<iostream>
#include "student.h"
#include "module.h"
using namespace std;

int main(){
    int input;
    while (true)
    {
        cout<<"\n<------ College Registration System ------> \n"<<endl;
        cout<<"Press 0 to Exit \nPress 1 to Add Student Record \nPress 2 to Update Student Record \nPress 3 to Display All Students Record \nPress 4 to Add Course \nPress 5 to Update Course \nPress 6 to Display All Courses Info \n"<<endl;
        cin>>input;
        if(input==0) break;
        else if(input==1) addStudentRecord();
        else if(input==2) updateStudent();
        else if(input==3) displayAllStudentRecord();
        else if(input==4) addCourse();
        else if(input==5) updateCourse();
        else if(input==6) displayAllCourseInfo();
        else cout<<"Please Enter input from 0 to 6.\n";
    }
    return 0;
}