#include<iostream>
using namespace std;

class Emploee{
    
private:
    string employeeName;
    double employeSalary;
public:
    
    Emploee(string employeeName, double employeSalary){
        
        this->employeeName = employeeName;
        this->employeSalary = employeSalary;
    }
    
    void setEmployeeName(string employeeName){
        this->employeeName = employeeName;
    }
    
    void setEmployeeSalary(double employeSalary){
        
        this->employeSalary = employeSalary;
    }
    
    string getEmployeeName(){
        return employeeName;
    }
    
    double getEmployeeSalary(){
        return employeSalary;
    }
    
    double AnnoulSalary(double employeSalary){
        
        return employeSalary * 12;
    }
    
    void riseSalary(double percentage){
        
       double rise =  employeSalary * (percentage / 100.0);
        
        employeSalary += rise;
    }
};


int main(){
  
    
    Emploee m1("Ali",500);
    Emploee m2("Sara",800);
    
    m1.riseSalary(100);
    
    cout<<"Name : "<<m1.getEmployeeName()<<endl;
    cout<<"Monthly Salary : "<<m1.getEmployeeSalary()<<endl;
    cout<<"Yearly Salary : "<<m1.AnnoulSalary(m1.getEmployeeSalary())<<endl;
    cout<<"\n\n";
    
    cout<<"Name : "<<m2.getEmployeeName()<<endl;
    cout<<"Monthly Salary : "<<m2.getEmployeeSalary()<<endl;
    cout<<"Yearly Salary : "<<m2.AnnoulSalary(m2.getEmployeeSalary())<<endl;
    
    return 0;
}
