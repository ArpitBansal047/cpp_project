#include<iostream>
#include<unordered_map>
using namespace std;


class Student{
    public:
    int admNo;
    string name,bloodGrp,aadhar,dob;
};

static unordered_map<int,Student> studentRecord;

void addStudentRecord();
void updateStudent();
void displayAllStudentRecord();