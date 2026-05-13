
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
public:
    BankAccount()  { balance = 0.0; }

    void Deposit(double amount) {
        balance+=amount;
        cout << "\nCurrent balance: " << balance;
    } 

    void Withdraw(double amount) {
        balance-=amount;
        if (balance<0.0){
            balance+=amount;
            cout << "\nInsufficient fund";
        }
        cout << "\nCurrent balance: " << balance;
    }

    double GetBalance() {
        return balance;
    }
};

int main () {

    BankAccount bb;
    bb.Deposit (1000);
    bb.Withdraw(500);
    bb.Withdraw(600);
    cout << endl << endl;
    return 0;
}