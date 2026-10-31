#include <iostream>
#include <cstdlib>
using namespace std;

class BankAccount {
private: 
    string ownerName;
    int accountNumber;
    double balance;

public:
    // Constructor (Initialize balance to 0)
    BankAccount() {
        balance = 0;
    }

    // Setter methods
    void setAccountNumber(int accNum) {
        accountNumber = accNum;
    }
    void setOwnerName(string name) {
        ownerName = name;
    }

    // Getter methods
    int getAccountNumber() {  // Fixed typo
        return accountNumber;
    }
    double getBalance() {
        return balance;
    }
    string getOwnerName() {
        return ownerName;
    }

    // Class Methods
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\n";
            cout << "Deposit successful! New balance: " << balance << "\n";
        } else {
            cout << "Invalid Amount!" << "\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\n";
            cout << "Withdrawal successful! New balance: " << balance << "\n";
        } else {
            cout << "Insufficient Funds" << "\n";
        }
    }
};

int main() {
    BankAccount myAccount;

    string custName;
    double depositValue, withdrawValue;
    int accNum, choice;
    
    cout << "Enter your name: ";
    getline(cin, custName);
    myAccount.setOwnerName(custName);

    cout << "Enter your account number: ";
    cin >> accNum;
    myAccount.setAccountNumber(accNum);

    system("cls");

    cout << "Hello, " << myAccount.getOwnerName() << "!\n";
    cout << "\n";
    
    do {
        cout << "\n";
        cout << "Banking Capital" << "\n";
        cout << "Select Our Banking Services" << "\n";
        cout << "1. Deposit" << "\n";
        cout << "2. Withdraw" << "\n";
        cout << "3. Account Detail" << "\n";
        cout << "4. Exit" << "\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Deposit Amount: ";
            cin >> depositValue;
            myAccount.deposit(depositValue);
        } 
        else if (choice == 2) {
            cout << "Enter Withdrawal Amount: ";
            cin >> withdrawValue;
            myAccount.withdraw(withdrawValue);
        } 
        else if (choice == 3) {
            cout << "\n";
            cout << "Here are your details:\n";
            cout << "Full Name: " << myAccount.getOwnerName() << "\n";
            cout << "Account Number: " << myAccount.getAccountNumber() << "\n";
            cout << "Balance: MYR" << myAccount.getBalance() << "\n";
        } 
        else if (choice == 4) {
            cout << "Thanks for using our services!" << "\n";
        } 
        else {
            cout << "Invalid choice. Please try again." << "\n";
        }

    } while (choice != 4);

    return 0;
}
