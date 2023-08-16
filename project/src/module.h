#include<iostream>
#include<unordered_map>
using namespace std;

class Course{
    public:
    int courseNo,duration;
    string courseName,StartDate;
    float fees;
};
static unordered_map<int,Course> courseRecord;

void addCourse();
void updateCourse();
void displayAllCourseInfo();