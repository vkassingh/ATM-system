#include <iostream>
#include <conio>//getch : hold screen till user press any character
#include <string> 
using namespace std;

/* Work flow:
check balance
cash withdraw
user details
update mobile no
*/


class Atm{
  private: //access specifier
  long int account_No;
  string name;
  int PIN; //for authenitication
  double balance;
  string mobile_No;
  
  public:
  void setData(long int account_No, string name_a, 
  int PIN_a, double balance_a, 
  string mobile_No_a) //formal argu
  {
      account_No= account_No_a;
      name=name_a;
      PIN= PIN_a;
      balance= balance_a;
      mobile_No= mobile_No_a;
      
  };
  
  
  long int getAccountNo(){
      return this->account_No;
  }
  
  string getName(){
      return this->name;
  };
  
  int getPIN(){
      return this->PIN;
  };
  
  double getBalance(){
      return this->balance;
  };
  
  string getMobileNo(){
      return this->mobile_No;
  };
  
  //update mobile no;
  void setMobile(string mob_prev, string mob_new){
     if(mob_prev==mobile_No){
         mobile_No= mob_new;
         cout<<endl<<"Successfully updated mobile no";
         _getch();
     }
     
     else{
         cout<<"Incorrect mobile no."
     }
     
  };
     
     
     //withdraw cash
     void withdrawCash(int amount_a){
         if(amount_a> 0 && amount_a< balance){
             balance-= balance_a;
             cout<<endl<<"Please collect cash.";
             cout<<endl<<"Available balance:"<<balance;
             _getch(); //hold screen
         }
         
         else{
             cout<<"insufficient balance";
             _getch(); //hold screen
         }
     };
  
};




int main() {
int choice =0, enterPIN;
long int enterAcountNo;

system("cls") //to clear screen when we move from one option to other

//ceate user1 object
atm user1;

//set the user details
user.setData(123123123. "Manish", 1111, 100000.00, "9879879879")

do{
    system("cls");
    cout<<endl<< "--- Welcome to ATM ---"<<endl;
    cout<<endl << "Enter your account No";
    cin>> enterAcountNo;
    
    cout<<endl;
    
    cout<<endl << "Enter your pin";
    cin>> enterPIN;
}

if((enterAcountNo ==user1.getAccountNo()) && 
(enterPIN== user1.getPIN())){
    
    do{
        int amount= 0;
        string oldMobNo, newMobNo;
        
        system("cls");
        cout<<" ---Welcome to ATM ---" <<endl;
        cout<<" Select option " <<endl;
        cout<<"1. Check balance " <<endl;
        cout<<"2. Withdraw cash " <<endl;
        cout<<"3. Show user details/ balance " <<endl;
        cout<<"4. Update Mob no. " <<endl;
        cout<<"5.Exit " <<endl;
        cin<<choice;
        
        switch(choice){
            case 1: 
            cout<<"Your account balance is ->"<<user1.getBalance();
            _getch();
            break;
            
            case 2: 
            cout<<"Enter amount ->"<<endl;
            cin>> amount;
            user1.withdrawCash(amount);
            
            _getch();
            break;
            
            case 3: 
            cout<<" User details are ->"<<endl;
            cout<<" Account no-> "<<user1.getAccountNo();
            cout<<" Name -> "<< user1.getName();
            cout<<"Balace -> "<<user1.getBalance();
            cout<<" mobile no -> "<< user1.getMobileNo();
            
            _getch();
            break;
            
            case 4: 
            cout<<" Enter old mob no -> "<<endl;
            cin>> oldMobNo;
            
            cout<<" Enter new mob no -> "<<endl;
            cin>> newMobNo;
            user1.setMobile();
            break;
            
            case 5: //exit application
            exit(0);
            
            default: //handle invalid details
            count<<"enter valid details";
            
            
        } while(1);  //infinite loop
        
    }
}






	return 0;
}
