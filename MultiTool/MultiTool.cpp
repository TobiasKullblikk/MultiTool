// DepositAccounts.cpp : Defines the entry point for the application.

#include "MultiTool.h"
#include "Account.h"

#include "vector"
#include "iostream"

using namespace std;

int main(int argc, char** argv)
{
    vector<Account> accounts;

    for (int i = 0; i < argc; i++)
    {
        cout << &argv[i] << endl;
        cout << argv[i] << endl;
    }

    cout << "Welcome to DepositAccounts! " << endl;
    cout << "add: Add new account " << endl;
    cout << "ls: List accounts" << endl;

    string lineInput = " ";
    while (lineInput[0] != 'q') {
        cout << "Enter command: ";
        getline(cin, lineInput);
        
        int x = lineInput.compare("add");
        if (x == 0)
        {
            string name;
            cout << "Name: ";
            getline(cin, name);

            string balanceString;
            int balance = 0;
            cout << "Balance (integer): ";
            getline(cin, balanceString);
            balance = stoi(balanceString);

            string secret;
            cout << "Secret: ";
            getline(cin, secret);

            accounts.push_back(Account(name, balance, secret));

            cout << endl;
        }
    }
    return 0;
}
