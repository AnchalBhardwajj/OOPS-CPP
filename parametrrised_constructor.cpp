// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

class teacher{
    private:
    int salary;
    public:
    teacher(){ //PARAMETRISED CONSTRUCTOR
        cout<<"\nCSED DEPARTMENT \n";
    }
    //NON -PARAM CONSTRUCTOR
    teacher(string n, string d, string s , int sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
        
    }
    
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

void getinfo(){
    cout<<"name:"<<name<<endl;
    cout<<"subject"<<subject<<endl;
}
};
int main() {
    // Write C++ code here
    teacher t1("anchal", "comp sci", "python", 2500);
    t1.getinfo();
    
    //for salary
    t1.setsalary(2500);
    cout<<t1.getsalary()<<"\n";
   
    return 0;
}
