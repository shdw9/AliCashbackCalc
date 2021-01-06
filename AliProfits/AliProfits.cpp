// AliProfits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void menu() {
    int orderNum; // how many orders you made
    double orderTotal; // how much was the order
    double moneySpent = 0; // how much spent

    double cashback = .0275; // rakuten gives 2.75% cashback
    int cash1;

    double profit = 0;
    double calProfit;

    cout << "How many orders did you make today?" << endl;
    cin >> orderNum;

    cout << "\nDid you use a Paypal Business Debit Mastercard?" << endl;
    cout << "1 - Yes\t2- No" << endl;
    cin >> cash1;
    if (cash1 == 1) {
        cashback = .01 + cashback; // adds 1% cashback
    }
    else {
        cashback;
    }

    for (int i = 0; i < orderNum; i++) {
        cout << "\nOrder " << i + 1 << "\t"; 

        cout << "How much was it?" << endl;
        cin >> orderTotal;

        calProfit = orderTotal * cashback;
        profit = calProfit + profit;

        moneySpent = orderTotal + moneySpent;
        cout << "\n>> You've made $" << profit << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << "\nYou've spent a total of $" << moneySpent << endl;
    cout << "And earned a total of $" << profit << endl;
    cout << "\n-----------------------------------------\n" << endl;
}

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "\nWelcome to shdw's AliExpress Rakuten CashBack Calculator! \n";
    cout << "\n---------------------------------------\n" << endl;
    menu();
}
