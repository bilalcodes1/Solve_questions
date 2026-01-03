#include <iostream>
using namespace std;

class Mobile{
    
private:
    int storge;
public:
    

    void setStorge(int storge){
        this->storge = storge;
    }
    
    int getStorge(){
        return storge;
    }
    
    friend void max(Mobile m[]);
    
};

void max(Mobile m[]){
    
    int Max = m[0].storge;
    
    for(int i = 1; i < 100; i++){
        
        if(m[i].storge > Max){
            
            Max = m[i].storge;
        }
    }
    cout<<Max<<endl;
}

int main() {
    Mobile m[100];
    for (int i = 0; i < 100; i++) {
        m[i].setStorge(i);
    }
    max(m);
    return 0;
}
