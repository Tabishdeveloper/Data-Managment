#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

void printOptions(int selectedOption) {
    system("cls"); // Clear the console (for Windows)

    cout << "Select Country:\n";
    cout << (selectedOption == 1 ? "> " : "  ") << "1. Gross Domestic Product [GDP]\n";
    cout << (selectedOption == 2 ? "> " : "  ") << "2. Population\n";
    cout << (selectedOption == 3 ? "> " : "  ") << "3. Agriculture\n";
    cout << (selectedOption == 4 ? "> " : "  ") << "4. Industry\n";
}
struct Country {
    string name;
    int population;
    double area;
    string capital;
};

void display( Country myCountry);

int main() {
    int y_n,country_name;
    const int totalOptions = 4;
    int selectedOption = 1;
    Country myCountry = {"United States", 331002651, 9833517.0, "Washington, D.C."};
    Country myCountry1 = {"Pakistan", 9526444, 9833517.0, "Islamabad"};
    cout<<"Please Select your country : ";
    cin>>country_name;

    while (true) {
        printOptions(selectedOption);

        // Get arrow key input
        int key = _getch();

        // Process arrow key input
        switch (key) {
            case 72: // Up arrow key
                selectedOption = (selectedOption > 1) ? (selectedOption - 1) : totalOptions;
                break;
            case 80: // Down arrow key
                selectedOption = (selectedOption < totalOptions) ? (selectedOption + 1) : 1;
                break;
            case 13: // Enter key
                cout << "You selected Country " << selectedOption << ": ";
                switch (selectedOption) {
                    case 1:
                        cout << "Pakistan\n";
                        cout<<"Some Important Information about Pakistan is here\n";
                        display(myCountry1);
                        
                        switch(country_name){
                            case 1:
                            cout<<"My name is tabish almas";
                            break;  

                        }
                        break;
                    case 2:
                        cout << "Malaysia\n";
                        display(myCountry);
                        break;
                    case 3:
                        cout << "India\n";
                        break;
                    case 4:
                        cout << "Palestine\n";
                        break;
                }
                return 0;
            default:
                break;
        }
    }

    return 0;
}

void display(Country myCountry){
    // Display information for the country
    cout << "Country Information:" << endl;
    cout << "Name: " << myCountry.name << endl;
    cout << "Population: " << myCountry.population << endl;
    cout << "Area: " << myCountry.area << endl;
    cout << "Capital: " << myCountry.capital << endl;

}










