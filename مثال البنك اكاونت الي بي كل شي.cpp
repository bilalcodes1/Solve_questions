#include <iostream>
using namespace std;

class Bankaccount{
private:
    string accholder;
    double balnace;
    static int numberOfAccount;
    static int numberOfActiveAccount;
public:
    
    Bankaccount(string accholder,double balnace){
        this->accholder = accholder;
        this->balnace = balnace;
        numberOfAccount++;
        numberOfActiveAccount++;
    }
    
    Bankaccount(string accholder) : Bankaccount(accholder,0){}
    
    ~Bankaccount(){
        numberOfActiveAccount--;
    }
    
    string getAccholder(){
        return accholder;
    }
    
    double getBalance(){
        return balnace;
    }
    
    friend void getInfo(Bankaccount &b);
    
    void deposit(double amount){
        
        if(amount <= 0){
            cout<<"Can Not add 0 or Nigitave number !!!"<<endl;
        }else{
            balnace += amount;
        }
    }
    
    void withDraw(double amount){
        
        if(amount > balnace){
            cout<<"انت ماتكدر تسحب فلوس اكثر من الي عندك !"<<endl;
        }else{
            
            balnace -= amount;
        }
    }
    
    
    static int getNumberOfAccount(){
        return numberOfAccount;
    }
    static int getNumberOfActiveAccount(){
        return numberOfActiveAccount;
    }
    
    friend void maxBalance(Bankaccount b1, Bankaccount b2,Bankaccount b3);
    
};


int Bankaccount::numberOfAccount = 0;
int Bankaccount::numberOfActiveAccount = 0;
void getInfo(Bankaccount &b){
   
    cout<<"Account Holder : "<<b.accholder<<endl;
    cout<<"Balance : "<<b.balnace<<endl;
}


void maxBalance(Bankaccount b1, Bankaccount b2,Bankaccount b3){
    
    if(b1.balnace > b2.balnace && b1.balnace > b3.balnace){
        cout<<b1.accholder<<" have more money !"<<endl;
    }
    if(b2.balnace > b1.balnace && b2.balnace > b3.balnace){
        cout<<b2.accholder<<" have more money !"<<endl;
    }
    if(b3.balnace > b1.balnace && b3.balnace > b2.balnace){
        cout<<b3.accholder<<" have more money !"<<endl;
    }
    
}


int main(){
    
        Bankaccount b1("Bishir",200);
        Bankaccount b2("Omar",100);
        Bankaccount b3("Ali",500);
    
   
    getInfo(b1);
    
    maxBalance(b1,b2,b3);
    
    cout<<"انت سويت حسابات اليوم :"<<Bankaccount::getNumberOfAccount()<<endl;
    cout<<"الحسابات النشطه الآن :"<<Bankaccount::getNumberOfActiveAccount()<<endl;
}









