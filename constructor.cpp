#include<bits\stdc++.h>
using namespace std;
class Student {
    public: 
    int roll;
    int cls;
    double gpa;
    Student (int roll, int cls, double gpa){

      // short solutions 
      this -> roll = roll;
      this -> cls = cls;
      this -> gpa = gpa;

        // to long solutions 
    //    (*this).roll = roll;
    //    (*this ).cls = cls;
    //    (*this).gpa = gpa;
    }
};
int main(){
    Student rahim(2, 9, 5.00);
    Student karim(1, 90, 5.11);
    cout << rahim.roll <<" " << rahim.cls <<  " " << rahim.gpa << endl;
    cout << karim.roll <<" " << karim.cls <<  " " << karim.gpa << endl;
    return 0;
}