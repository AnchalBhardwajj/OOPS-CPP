// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class teacher{
    private:
    int salary;
    public:
    //properties or attributes
    string name;
    string dept;
    string subject;
    
    //methods or members
void changedep(string newdept){
    dept = newdept;
}
//setter
void setsalary(int s){
    salary = s;
}
//getter
int getsalary(){
    return salary;
}
    
};
int main() {
    // Write C++ code here
    
    teacher t1;
    teacher t2;
    teacher t3;
    teacher t4;
    teacher t5;
    t1.name = "sneha";
    t1.dept = "CSED";
    t1.subject = "MACHINE LEARNING";
    t1.setsalary(1100000);
    //t1.salary = 25000;
    
    cout <<t1.name<<"\n"<<t1.dept<<"\n"<<t1.subject<<"\n"<<t1.getsalary()<<"\n";

    return 0;
}
