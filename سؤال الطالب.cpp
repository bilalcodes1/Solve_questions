#include<iostream>
using namespace std;

class Student{
    
    string name;
    int grade;
    
public:
    
    void setName(string name){
        
        this->name = name;
    }
    
    void setGrade(int grade){
        
        if(grade < 0 || grade > 100){
            return;
        }else{
            this->grade = grade;
        }
        
        
    }
    
    string getName(){
        return name;
    }
    
    int getGrade(){
        
        return grade;
    }
    
    bool isEqule(Student s1, Student s2){
        
        if(s1.name == s2.name && s1.grade == s2.grade){
            
            return true;
        }else{
            return false;
        }
        
    }
    
};



int main(){
    
    Student s1,s2;
    
    s1.setName("Ali");
    s1.setGrade(100);
    
    s2.setName("Ali");
    s2.setGrade(100);
    
    cout<<"Name : "<<s1.getName()<<endl;
    cout<<"Grade : "<<s1.getGrade()<<endl;
    
    cout<<"Name : "<<s2.getName()<<endl;
    cout<<"Grade : "<<s2.getGrade()<<endl;
    
    if(s1.isEqule(s1, s2) == 1){
        
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    return 0;
}
