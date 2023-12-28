#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

void printOptions(int selectedOption) {
    system("cls"); // Clear the console (for Windows)

    cout << "Select an operation:\n";
    cout << (selectedOption == 1 ? "> " : "  ") << "1. Addition\n";
    cout << (selectedOption == 2 ? "> " : "  ") << "2. Subtraction\n";
    cout << (selectedOption == 3 ? "> " : "  ") << "3. Multiplication\n";
    cout << (selectedOption == 4 ? "> " : "  ") << "4. Division\n";
}

int main() {
    const int totalOptions = 4;
    int selectedOption = 1;

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
                cout << "You selected Option " << selectedOption << ": ";
                switch (selectedOption) {
                    case 1:
                        cout << "Addition\n";
                        break;
                    case 2:
                        cout << "Subtraction\n";
                        break;
                    case 3:
                        cout << "Multiplication\n";
                        break;
                    case 4:
                        cout << "Division\n";
                        break;
                }
                return 0;
            default:
                break;
        }
    }

    return 0;
}









