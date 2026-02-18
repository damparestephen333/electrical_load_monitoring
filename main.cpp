
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int MAX = 100;

// Appliance structure
struct Appliance {
    string name;
    double watts;
    double hours;
};

int main() {
    Appliance appliances[MAX];
    int count = 0;
    int choice;

    do {
        cout << "\nElectrical Load Monitoring System\n";
        cout << "1. Register appliance\n";
        cout << "2. View appliances\n";
        cout << "3. Billing calculation\n";
        cout << "4. Save appliances\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

            case 1:
            
                // TODO: Add register appliance function
                break;

            case 2:
                
                // TODO: Display all appliances
                break;

            case 3:
                
                // TODO: Calculate energy and billing
                break;

            case 4:
                
                // TODO: Save appliances to file
                break;

            case 5:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid option\n";
        }

    } while (choice != 5);

    return 0;
}
