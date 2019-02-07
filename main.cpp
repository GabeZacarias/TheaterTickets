#include <iostream>

using namespace std;

int main()
{

    int ticketsSold;

    double grossReceipts;

    double grossProfit;

    double eventCost = 1450.00;

    cout << "Enter the number of tickets sold: ";

    cin >> ticketsSold;

    grossReceipts = ticketsSold * 29.0;

    grossProfit = grossReceipts - eventCost;

    cout.setf(ios::fixed);                                           //use fixed point
    cout.setf(ios::showpoint);                                      //display the decimal
    cout.precision(2);                                              //display two decimal places

    cout << "Tickets sold = " << ticketsSold << endl;
    cout << "Gross receipts = $" << grossReceipts << endl;
    cout << "Event profit = $" << grossProfit << endl;

}
