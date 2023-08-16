#include<iostream>
#include "student.h"
using namespace std;

void addStudentRecord(){
    Student s;
    cout<<"Enter Admission No: \n";
    cin>>s.admNo;
    cout<<"Enter Name: \n";
    cin>>s.name;
    cout<<"Enter Blood Group: \n";
    cin>>s.bloodGrp;
    cout<<"Enter Aadhar Card No: \n";
    cin>>s.aadhar;
    cout<<"Enter Date of Birth: \n";
    cin>>s.dob;
    studentRecord[s.admNo]=s;
}
void updateStudent(){
    int id;
    cout<<"Enter Admission No: \n";
    cin>>id;
    Student s = studentRecord[id];
    cout<<"Student Info: \n"<<s.name<<" "<<s.bloodGrp<<" "<<s.aadhar<<" "<<s.dob<<endl;
    cout<<"Enter New Details \n";
    addStudentRecord();
}
void displayAllStudentRecord(){
    int i=1;
    for(auto m:studentRecord){
        Student s = m.second;
        cout<<i<<"--> "<<s.admNo<<" "<<s.name<<" "<<s.aadhar<<" "<<s.bloodGrp<<" "<<s.dob<<endl;
        i++;
    }
}