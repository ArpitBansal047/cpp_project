#include<iostream>
#include "module.h"
using namespace std;

void addCourse(){
Course m;
    cout<<"Enter Course No: \n";
    cin>>m.courseNo;
    cout<<"Enter Name: \n";
    cin>>m.courseName;
    cout<<"Enter Duration (in Months): \n";
    cin>>m.duration;
    cout<<"Enter Fees (in Rs.): \n";
    cin>>m.fees;
    cout<<"Enter Start Date (MM-YYYY): \n";
    cin>>m.StartDate;
    courseRecord[m.courseNo]=m;
}
void updateCourse(){
    int courseNo;
    cout<<"Enter Course No: \n";
    cin>>courseNo;
    Course m = courseRecord[courseNo];
    cout<<"Previous Details \n"<<"--> "<<m.courseNo<<" "<<m.courseName<<" "<<m.fees<<" "<<m.duration<<" "<<m.StartDate<<endl;
    cout<<"Update Details \n";

    cout<<"Enter Name: \n";
    cin>>m.courseName;
    cout<<"Enter Duration (in Months): \n";
    cin>>m.duration;
    cout<<"Enter Fees (in Rs.): \n";
    cin>>m.fees;
    cout<<"Enter Start Date (MM-YYYY): \n";
    cin>>m.StartDate;
    courseRecord[m.courseNo]=m;
}
void displayAllCourseInfo(){
    int i=1;
    for(auto x: courseRecord){
        Course m= x.second;
        cout<<i<<"--> "<<m.courseNo<<" "<<m.courseName<<" "<<m.fees<<" "<<m.duration<<" "<<m.StartDate<<endl;
        i++;
    }
}
