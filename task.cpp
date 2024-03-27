#include <iostream>
#include <string>

using namespace std;

class bankAccount
{
protected:
    int account_number;
    double balance;

public:
    bankAccount(){};
    bankAccount(int account_number, double balance)
    {
        this->account_number = account_number;
        this->balance = balance;
    };

    void set_AccountNumber(int number)
    {
        account_number = number;
    };

    int get_AccountNumber()
    {
        return account_number;
    };

    double get_Balance()
    {
        return balance;
    };

    void withdraw(double amount)
    {

        balance -= amount;
        cout << ">>Amount Withdraw " << amount << endl;
    };

    void deposit(double amount)
    {

        balance += amount;
        cout << ">>Amount Deposited " << amount << endl;
    };

    void account_information()
    {
        cout << "Account Number :" << account_number << endl;
        cout << "Account Balance :" << balance << endl
             << endl;
    };
};

class savingsAccount : protected bankAccount
{
private:
    double interest_rate = 16.0;

public:
    savingsAccount(){};
    // savingsAccount(){};
    savingsAccount(int account_number, double balance)
    {
        this->account_number = account_number;
        this->balance = balance;
    };
   
    void set_interest_rates(double interest_rate)
    {
        this->interest_rate = interest_rate;
    }
    double get_interest_rates()
    {
        return interest_rate;
    }

    void post_interest()
    {
        balance += balance * (get_interest_rates() / 100);

        cout << "New balance is :" << balance << endl;
    }

    void withdraw(double amount)
    {

        balance -= amount;
        cout << ">>Amount Withdraw " << amount << endl;
    };

    void deposit(double amount)
    {

        balance += amount;
      
        cout << ">>Amount Deposited " << amount << endl;
    };

    void account_information()
    {

        cout << "Account Number :" << account_number << endl;
        cout << "Account Balance :" << balance << endl
             << endl;
    };
};

int main()
{

    bankAccount ali(10, 1000.0);
    bankAccount naeem(11, 500.0);

    ali.account_information();
    naeem.account_information();

    ali.deposit(230.0);
    naeem.withdraw(230.0);

    ali.account_information();
    naeem.account_information();

    cout << ",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,," << endl;

    savingsAccount hassan(10, 1000.0);
    savingsAccount hussain(11, 400.0);

    hassan.account_information();
    hussain.account_information();

    hassan.deposit(100.0);
    hussain.withdraw(100.0);

    hassan.account_information();
    hussain.account_information();

    hassan.post_interest();
    hussain.post_interest();
    cout << endl;

    hassan.account_information();
    hussain.account_information();

    return 0;
}
