#include <iostream>
using namespace std;

class bank{
    public:
    string name;
    int balance;

    bank(string n, int b){
        name = n;
        balance = b;
    }

    void deposite(){
        int amount;
        do{
            cout<<"Enter amount to deposite : ";
            cin>>amount;

            if(amount<0){
                cout<<"Error \nNegative Amount can not be deposited"<<endl;
                cout<<"Try again"<<endl;
            }
            else if(amount == 0){
                cout<<"Error \nZero amount cann't be Deposite"<<endl;
                cout<<"Try again"<<endl;
            }
            else{
                balance = balance + amount;
                cout<<"Successfully Deposited : "<<amount<<endl;
            }

        }while(amount<1);
    }

    void withdraw(){
        int amount;
        cout<<"Enter amount to Withdraw : ";
        cin>>amount;
        if(amount>balance){
            cout<<"Not suficiant balance"<<endl;
        }
        else{
            balance = balance - amount;
            cout<<"Successfully Withdrawed : "<<amount<<endl;
        }
    }

    void balance_check(){
        cout<<"Account Holder Name : "<<name<<endl;
        cout<<"Account Balance : "<<balance<<endl;
    }
    void check_holder_name(){
        cout<<"Name of Account Holder : "<<name<<endl;
    }
};

int main(){
    string name;
    int balance;

    cout<<"Enter Account Holders Name : ";
    cin>>name;
    
    do{
        cout<<"Enter Balance  : ";
        cin>>balance;
        
        if(balance<0){
            cout<<"balance can not be negative"<<endl;
            cout<<"Enter again"<<endl;
        };
    }while(balance<0);

    bank b1(name,balance);

    int op;
    
    do{
        cout<<"Enter the Operation you want to do \n1.Deposite \n2.Withdraw \n3.Balance Check \n4.Account Holder Name\n5.Exit \n  Enter the Operation Number : ";
        cin>>op;
        int amount;

        switch(op){
            case 1:
            b1.deposite();
            break;
            case 2:
            b1.withdraw();
            break;
            case 3:
            b1.balance_check();
            break;
            case 4:
            b1.check_holder_name();
            break;
            case 5:
            cout<<"\n-----------------------------\nThank you for Banking with Us\n     !!Have a Nice Day!!\n-----------------------------\n"<<endl;
            break;
            default:
            cout<<"Erro \n You Have Enterd Inviled Operation \n Try Again"<<endl;
            

        }
    }while(op<5 && op>0);

    return 0;
}