#include <iostream>
using namespace std;

class Barow{
    
private:
    string name;
    double money;
public:
    
    Barow( string name,double money){
        
        this->name = name;
        this->money = money;
    }
    
    friend void display(Barow b);
    friend Barow New(Barow b1, Barow b2);
    
    
};
void display(Barow b){
    cout<<"Name : "<<b.name<<endl;
    cout<<"Money : "<<b.money<<endl;
}

Barow New(Barow b1, Barow b2){
    
    double z = b1.money + b2.money;
    
    Barow b3("Zadion",z);
    
    return b3;
}

int main(){
    
    Barow b1("Bilal",100);
    Barow b2("Abdol",500);
    
    display(b1);
    display(b2);
     
    display(New(b1, b2));
    
}









