#include <iostream>
#include <string>

using namespace std;

// Define a structure to represent country information
struct Country {
    string name;
    int population;
    double area;
    string capital;
};

void inputCountryData(Country &myCountry);
void display(Country myCountry);

int main() {
    // Initialize data for the country
    Country myCountry = {};
    
    // Input data for myCountry
    inputCountryData(myCountry);

    // Display information for myCountry
    cout << "==============================\n";
    display(myCountry);

    return 0;
}

void inputCountryData(Country &myCountry) {
    // Input information for the country
    cout << "Enter Country Information:" << endl;
    cout << "Name: ";
    cin >> myCountry.name;
    cout << "Population: ";
    cin >> myCountry.population;
    cout << "Area: ";
    cin >> myCountry.area;
    cout << "Capital: ";
    cin >> myCountry.capital;
}

void display(Country myCountry) {
    // Display information for the country
    cout << "Country Information:" << endl;
    cout << "Name: " << myCountry.name << endl;
    cout << "Population: " << myCountry.population << endl;
    cout << "Area: " << myCountry.area << endl;
    cout << "Capital: " << myCountry.capital << endl;
}
