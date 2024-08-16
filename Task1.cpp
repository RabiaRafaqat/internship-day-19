#include <iostream>
using namespace std;
int main() {
    int choice, fromCurrency, toCurrency;
    float amount, result;
    cout << "Hi! This is my Currency Converter." << endl;
    while (true) {
        cout << "What do you want to do?" << endl;
        cout << "1. Change money" << endl;
        cout << "2. Leave" << endl;
        cout << "Pick 1 or 2: ";
        cin >> choice;

        if (choice == 2) {
            cout << "Bye! Have a nice day!" << endl;
            break;
        }

        cout << "What money do you have?" << endl;
        cout << "1. PKR" << endl;
        cout << "2. EUR" << endl;
        cout << "3. CNY" << endl;
        cout << "4. USD" << endl;
        cout << "Pick one: ";
        cin >> fromCurrency;

        cout << "What money do you want?" << endl;
        cout << "1. PKR" << endl;
        cout << "2. EUR" << endl;
        cout << "3. CNY" << endl;
        cout << "4. USD" << endl;
        cout << "Pick one: ";
        cin >> toCurrency;

        cout << "How much money do you have? ";
        cin >> amount;

        if (fromCurrency == 1 && toCurrency == 2) 
            result = amount * 0.0049;
        else if (fromCurrency == 1 && toCurrency == 3) 
            result = amount * 0.045;
        else if (fromCurrency == 1 && toCurrency == 4) 
            result = amount * 0.0036;
        else if (fromCurrency == 2 && toCurrency == 1) 
            result = amount * 203.92;
        else if (fromCurrency == 2 && toCurrency == 3) 
            result = amount * 9.18;
        else if (fromCurrency == 2 && toCurrency == 4) 
            result = amount * 1.18;
        else if (fromCurrency == 3 && toCurrency == 1) 
            result = amount * 22.19;
        else if (fromCurrency == 3 && toCurrency == 2) 
            result = amount * 0.11;
        else if (fromCurrency == 3 && toCurrency == 4) 
            result = amount * 0.13;
        else if (fromCurrency == 4 && toCurrency == 1) 
            result = amount * 285.71;
        else if (fromCurrency == 4 && toCurrency == 2) 
            result = amount * 0.85;
        else if (fromCurrency == 4 && toCurrency == 3) 
            result = amount * 7.49;
        else 
            result = amount;

        cout << "Here is your new money: " << result << endl;
    }

    return 0;
}
