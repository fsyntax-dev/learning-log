#include <iostream>
#include <iomanip>

using namespace std;

// Function to show balance
void showBalance(double balance) {
    cout << "Your balance is: MYR " << setprecision(2) << fixed << balance << "\n";
}

// Function to deposit money
double deposit() {
    double amount = 0;
    cout << "Enter amount to be deposited: ";
    cin >> amount;

    if (amount > 0) {
        return amount;
    } 
    else {
        cout << "Invalid Amount!\n";
        return 0;
    }
}

// Function to withdraw money
double withdraw(double balance) {
    double amount = 0;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds!\n";
        return 0;
    } 
    else if (amount <= 0) {
        cout << "Invalid Amount!\n";
        return 0;
    }
    else {
        return amount;  // Successful withdrawal
    }
}

int main() {
    double balance = 0;
    int choice = 0;

    do {
        cout << "\n*** Capital Capital ***\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n"; 
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";  // Fixed: "Exist" → "Exit"
        cout << "Enter your choice: ";
        cin >> choice;

        cout << "\n";

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Thanks for using our services!\n";
                break;  // Fixed: Added break to prevent falling into default case
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while(choice != 4);

    return 0;
}
