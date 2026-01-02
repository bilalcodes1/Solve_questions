#include<iostream>
using namespace std;

class Employee{
    
private:
    string employeeName;
    double employeeSalary;
    
public:
    
    Employee(string employeeName,double employeeSalary){
        
        this->employeeName = employeeName;
        this->employeeSalary = employeeSalary;
    }
    
    void setEmployeeName(string employeeName){
        this->employeeName = employeeName;
    }
    
    void setEmployeeSalary(double employeeSalary){
        this->employeeSalary = employeeSalary;
    }
    
    string getEmployeeName(){
        
        return employeeName;
    }
    
    double getEmployeeSalary(){
        return employeeSalary;
    }
    
    double getAnnula(){
        
        return employeeSalary * 12;
    }
    
    void giveRise(double percentage){
        
        double rise =  employeeSalary * (percentage / 100);
        employeeSalary += rise;
    }
};
    
int main(){
    
    
    Employee m1("Obida",5000);
    
    m1.giveRise(5);
    
    cout<<"Name : "<<m1.getEmployeeName()<<endl;
    cout<<"Salary : "<<m1.getEmployeeSalary()<<endl;
    cout<<"Annual : "<<m1.getAnnula()<<endl;
    
    
    
    return 0;
}
