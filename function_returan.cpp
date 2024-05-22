#include<bits\stdc++.h>
using namespace std;

class Student
{
public:
int roll;
int cls;
double gpa;
Student(int roll, int cls, double gpa){
    this -> roll = roll;
    this -> cls = cls;
    this -> gpa = gpa;
}
};

Student* fun (){
    Student rahim (2, 5, 4.52);
    Student *p = &rahim;
    return p;
}
int main ( ){
    Student* ans = fun();

    // cout << ans.roll << " " << ans.cls << " " << ans.gpa;
    cout << ans->roll << " " << ans->cls << " " << ans->gpa;
    return 0;
}