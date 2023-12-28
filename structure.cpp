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

void display( Country myCountry);

int main() {
    // Initialize data for the country
    Country myCountry = {"United States", 331002651, 9833517.0, "Washington, D.C."};
    Country myCountry1 = {"Pakistan", 9526444, 9833517.0, "Islamabad"};
    display(myCountry);
    display(myCountry1);

    

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

