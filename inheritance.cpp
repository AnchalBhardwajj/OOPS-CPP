#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string cname;
    string caddr;
    
    Customer(){
        cout<<"\n--non parametrised constructor--\n";
    }
};

class order : public Customer{
    public:
  
  int rollno;
  
  void getinfo(){
      cout<<"Cname:"<<cname<<endl;
      cout<<"caddr:"<<caddr<<endl;
      cout<<"rollno:"<<rollno<<endl;
  }
};

int main(){
    order o1;
    o1.cname = "megha";
    o1.caddr = "newcolonybihar";
    o1.rollno = 1245;
    o1.getinfo();
    
    return 0;
}
