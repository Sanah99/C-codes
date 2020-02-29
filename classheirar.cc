#include<iostream>
using namespace std;
class manager
{
protected:
    string name;
    string dept;
    int empid;
    int bonus;
public:
    void getdata()
    {
        cout<<"\nEnter the name of the manager:";
        cin>>name;
        cout<<"\nEnter the department for the manager:";
        cin>>dept;
        cout<<"\nEnter the employee ID for the manager:";
        cin>>empid;
    }
    setbonus(int b)
    {
        cout<<"\n\nIn the set bonus of base class\t";
        bonus=b;
        cout<<"\nDepartment"<<dept<<"\t Bonus:"<<bonus;
    }
};

class prodmanager:public manager
{
    int noofsupervisors;
public:
    manageproduction(int n)
    {
        cout<<"\n\nIn the manager production";
        noofsupervisors=n;
        cout<<"\tNo of supervisors:"<<noofsupervisors;
    }
    display()
    {
        cout<<"\n\nName of the manager   :"<<name;
        cout<<"\nDepartment              :"<<dept;
        cout<<"\nNumber of supervisors   :"<<noofsupervisors;
        cout<<"\nBonus for the department:"<<bonus;
    }
}; //prodmanager

class salesmanager:public manager
{
    int noofsalesman;
public:
    managesales(int n)
    {
        cout<<"\n\nIn the manage sales:";
        noofsalesman=n;
        cout<<"\tNo of Salesman:"<<noofsalesman;
    }
     display()
    {
        cout<<"\n\nName of the manager   :"<<name;
        cout<<"\nDepartment              :"<<dept;
        cout<<"\nNumber of salesman      :"<<noofsalesman;
        cout<<"\nBonus for the department:"<<bonus;
    }
};
int main()
{
    salesmanager s;
    prodmanager p;
    s.getdata();
    p.getdata();
    s.managesales(10);
    p.manageproduction(100);
    s.setbonus(5000);
    s.setbonus(8000);
    s.display();
    p.display();
}
