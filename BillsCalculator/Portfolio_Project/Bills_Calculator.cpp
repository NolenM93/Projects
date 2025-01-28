// Portfolio_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    double income, bill, totalBills = 0;
    int numOfBills;
    vector<double> bills;

    cout << "Enter your monthly income: $";
    cin >> income;

    cout << "How many bills do you have? ";
    cin >> numOfBills;

    for (int i = 0; i < numOfBills; i++) {
        cout << "Enter the amount for bill " << i + 1 << ": $";
        cin >> bill;
        bills.push_back(bill);
    }
    for (double b : bills) {
        totalBills += b;
    }

    double weeklySavings = totalBills / 4;

    cout << "You need to set aside $" << weeklySavings << " each week to pay all your bills." << endl;

    return 0;
       
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
