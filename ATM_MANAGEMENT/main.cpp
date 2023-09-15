#include <iostream>
using namespace std;
//1 xem so du
//2 rut tien
//3
class ATM
{
private:
    string ac_name;
    int ac_Numer;
    double balance;
public:
    ATM(string ac_name, int ac_Numer,double balance){
        this->ac_name= ac_name;
        this->ac_Numer = ac_Numer;
        this->balance = balance;
    }
    void setName(string ac_name)
    {
        this->ac_name = ac_name;
    }
    string getName(){
        return ac_name;
    }
    void setAc_number(int ac_Number){
        this->ac_Numer = ac_Number;
    }
    int getAc_number(){
        return ac_Numer;
    }
    double getBalance(){
        return balance;
    }
    double withdraw(double amount){
        if(amount > balance){
            return false;
        }
        balance = balance - amount;
        return true;
    }
    void depost(double amount){
        balance = balance + amount;
    }
    void display(){
        cout <<"Account Name: "<< ac_name << endl;
        cout <<"Account Number: " << ac_Numer << endl;
        cout <<"Account Balance: " << balance << endl;
    }
};
int main()
{
    ATM atm("",14,15);
    char choice;
    do{
		system("cls");
		int op;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t\t ATM Management System" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t\t1.View Blance: " << endl;
		cout << "\t\t\t2.Cash Withdraw: " << endl;
		cout << "\t\t\t3.Cash Depost: " << endl;
		cout << "\t\t\t4.Exit " << endl;
		cout << "\t\t\t5.Delete Student " << endl;
		cout << "\t\t\tEnter Your Choice: ";
		cin >> op;
        switch (op)
        {
        case 1:
        
            break;
        
        default:
            break;
        }
    
    }while(choice =='y' || choice =='Y');

    system("pause");
    return 0;
}