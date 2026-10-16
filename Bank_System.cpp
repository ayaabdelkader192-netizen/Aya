#include <iostream>
#include<string>
using namespace std;
class Account{
    private:
    string name;
    int balance;
    public:
        Account(string n,int b){
            name=n;
            balance=b;
        }
      void Deposit(int newbalance){
          if(newbalance>0){
                balance+=newbalance;
        cout<<balance;
          }
            else{
                cout<<"Error";
            }
        }
      void Withdraw(int amount){
          if(amount<=balance&&amount>0){
                balance-=amount;
          cout<<balance<<endl;
          }
          else{
            cout<<"Error: insufficient funds. Current balance:"<<balance<<endl;
          }
      }
      void CheckBalance(){
          cout<<"Current balance:"<<balance;
      }

};

 int main(){
       cout<<"==="<<"  Bank System  "<<" === "<<endl;
       string n;
         int b;
         cin>>n>>b;
         Account p1(n,b);
     int choice;
     do{

    cout<<"Deposit"<<endl<<"Withdraw"<<endl<<"Check Balance"<<endl<<"Exit"<<endl<<"choose an option:"<<endl;
    cin>>choice;
      switch(choice){

          case 1:
          int newbalance;
          cout<<"Enter amount to deposit:";
          cin>>newbalance;
          p1.Deposit(newbalance);
          break;
          case 2:
          int amount;
          cout<<"Enter amount to withdraw:";
          cin>>amount;
         p1.Withdraw(amount);
          break;
          case 3:
              p1.CheckBalance();
          break;
          case 4:
          cout<<"Goodbye!";
          break;
      }
      }
      while(choice != 4);

 return 0;
}

