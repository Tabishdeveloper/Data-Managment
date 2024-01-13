#include <iostream>
#include<string>
using namespace std;

void industry() {
    int industry_selection;
    string customer;

    cout << "1. Automobile Production Unit : \n";
    cout << "2. Textile Production Unit : \n";
    cout << "3. Sugar Production Unit : \n";
    cout << "4. Ammunition Production Unit : \n";
    cout << "---------------------------------\n";
    cout << "Please Select your Industry : ";
    cin >> industry_selection;

    // Clear the input buffer
  //  cin.ignore(numeric_limits<streamsize>::max(), '\n');

    switch (industry_selection) {
        case 1:
            cout << "You Selected :- Automobile Production Unit\n";
            cout << "Hello, Dear Customer. How can I help you? ";
            //getline(cin, customer);
            if (customer == "I want to buy a car") {
                cout << "kdahufuasfkasdf\n";
            }
            break;
    }
}

int main() {
    industry();
    return 0;
}
