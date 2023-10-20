#include <iostream>

using namespace std;

int main(){
    
    int small;
    int large;
    const float smallPrice {25};
    const float largePrice {35};
    float cost;
    float tax;
    float total;
    const int valid {30};
    
    
    cout << "Hello, welcome to Frank`s Carpet Cleaning Service" << endl;
    cout << endl;
    cout << "How many small rooms would you like cleaned? ";
    cin >> small;
    cout << "How many large rooms would you like cleaned? ";
    cin >> large;
    cout << endl;
    cout <<"Estimate for carpet cleaning service" << endl;
    cout <<"Number of small rooms "<< small << endl;
    cout <<"Number of large rooms "<< large << endl;
    cout <<"Price for small room: $" << smallPrice << endl;
    cout <<"Price for large room: $" << largePrice << endl;
    
    cost = (small * smallPrice) + (large * largePrice);
    tax = cost * 6 / 100;
    
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << tax << endl;
    cout << "==================================================" << endl;
    
    total = cost + tax; 
    
    cout << "Total estimate: $" << total << endl;
    cout << "The estimate is valid for " << valid << " days" << endl;
     
    return 0;
    }
