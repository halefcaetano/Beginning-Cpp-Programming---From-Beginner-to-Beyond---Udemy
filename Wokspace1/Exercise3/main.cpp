#include <iostream>

using namespace std;

int main(){
    
    int cents;
    int dollar;
    int quarter;
    int dime;
    int nickel;
    int penny;
    int balance;
    
    cout << "Enter an amount in cents: ";
    cin >> cents;
    
    dollar = cents / 100;
    balance = cents -= dollar * 100;
    
    quarter = cents / 25;
    balance = cents -= quarter * 25;
    
    dime = cents / 10;
    balance = cents -= dime * 10;
    
    nickel = cents / 5;
    balance = cents -= nickel * 5;
    
    penny = cents / 1;

    
    cout << "You can provide charge for this change as follows" << endl;
    cout << "dollars: " << dollar << endl;
    cout << "quarters: " << quarter << endl;
    cout << "dimes: " << dime << endl;
    cout << "nickels: " << nickel << endl;
    cout << "pennies: " << penny << endl;
    
    
    
    return 0;
}
