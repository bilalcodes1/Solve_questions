#include<iostream>
using namespace std;

/*
 Q1/ Use classes to describe a hotel management system with the following components: Room (10 Marks)
 (room_number, type), Staff (ID, name, salary), and Guest (membership_ID, name, address). The
 attributes of these classes should be private, and thus proper accessibility should be provided.
 */


class Room{

private:
    
    int room_number;
    string type;
    
public:
    
    void setRoom_number(int room_number){
        
        this->room_number = room_number;
    }
    
    void setType(string type){
        
        this->type = type;
    }
    
    int getRoom_number(){
        return room_number;
    }
    
    string getType(){
        
        return type;
    }
};



class Staff{

private:
    
    int ID;
    string name;
    double salary;
public:
    
    void setId(int ID){
        this->ID = ID;
    }
    
    void setName(string name){
        this->name = name;
    }
    
    void setSalary(double salary){
        this->salary = salary;
    }
    
    int getId(){
        return ID;
    }
   
    string getName(){
        return name;
    }
    
    double getSalary(){
        return salary;
    }
    
};


class Guest{

private:
    
    int membership_ID;
    string name;
    string address;
    
public:
    
    void setMembership_ID(int membership_ID){
        
        this->membership_ID = membership_ID;
    }
   
    void setName(string name){
        this->name = name;
    }
    
    void setAddress(string address){
        this->address = address;
    }
    
    int getMembership_ID(){
        return membership_ID;
    }
   
    string getName(){
        return name;
    }
   
    string getAddress(){
        return address;
    }
};

int main(){
    
    
    return 0;
}
