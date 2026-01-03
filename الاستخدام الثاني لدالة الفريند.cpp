#include<iostream>
using namespace std;

class Drink;

class Food{
    
private:
    string name;
    double price;
    
public:
    
    
    Food(string name,double price){
        
        this->name = name;
        this->price = price;
    }
    
    friend void printInfo(Food f, Drink d);
    
    
};

class Drink{
    
private:
    string name;
    double price;
public:
    
    Drink(string name,double price){
        
        this->name = name;
        this->price = price;
    }
    
    friend void printInfo(Food f, Drink d);
    
};

void printInfo(Food f, Drink d){
    
    if(f.price > d.price){
        cout<<f.name<<" is Expensive !!!"<<endl;
    }else{
        cout<<d.name<<" is Expensive !!!"<<endl;
    }
    
}


int main(){
    
    Food f1("Pizza",16);
    
    
    Drink d1("Tea", 20);
    
  
    printInfo(f1, d1);
   
   
    
    
    return 0;
}
