#include<iostream>
using namespace std;

class Food{
    
private:
    string name;
    double price;
    
public:
    
    
    Food(string name,double price){
        
        this->name = name;
        this->price = price;
    }
    
    friend void printInfo(Food f);
    
    
};

void printInfo(Food f){
    
    cout<<"Name : "<<f.name<<endl;
    cout<<"Price : "<<f.price<<endl;
}


int main(){
    
    Food f1("Pizza",16);
    Food f2("Burger",18);
    
  
   
    printInfo(f1);
   
    
    
    return 0;
}
