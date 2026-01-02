#include<iostream>
using namespace std;

/*
 A. Write a complete C++ program that defines a class named Device. Declare the necessary
 attributes to track the total number of Device objects created, the currently active Device
 objects, and store a unique identifier for each device. Create 50 Device objects, then print the
 total number of objects created, the number of currently active objects, and each device's ID.
 */

class Device{
    
private:
    
    static int total;
    static int active;
    int id;

public:
    
    Device(){
        
        total++;
        active++;
        id = total;
    }
    
    static int getTotal(){
        return total;
    }
    
    static int getActive(){
        return active;
    }
    
    int getId(){
        return id;
    }
    
};

int Device::total = 0;
int Device::active = 0;

int main(){
    
    Device d[50];
  
    cout<<"Total Devices : "<<Device::getTotal()<<endl;
    cout<<"Active Devices : "<<Device::getActive()<<endl;
    
    for(int i = 0; i < 50; i++){
        cout<<"Device id  ["<<i<<"] : "<<d[i].getId()<<endl;
    }
    
    return 0;
}
