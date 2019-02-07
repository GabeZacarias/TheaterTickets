#include <iostream>

using namespace std;

int main()
{

    int ticketsSold, balconySold, frontFloorTicketSold, backFloorTicketSold;

    double grossReceipts, frontFloorReceipts, backFloorReceipts, grossProfit, balconyReceipts, eventCost = 1450.00;

    cout << "Enter the total number of tickets sold: ";

    cin >> ticketsSold;


    if ( ticketsSold <= 100)
    {

        frontFloorTicketSold = ticketsSold;

        frontFloorReceipts = ticketsSold * 29.0;

        backFloorTicketSold = 0;

        backFloorReceipts = backFloorTicketSold * 0;

        balconySold = 0;

        balconyReceipts = balconySold * 19.0;
    }

    else if (ticketsSold > 100 && ticketsSold <= 200)
    {

        frontFloorTicketSold = 100;

        frontFloorReceipts = 100 * 29.0;

        backFloorTicketSold = ticketsSold - 100;

        backFloorReceipts = backFloorTicketSold * 23.0;

        balconySold = 0;

        balconyReceipts = balconySold * 19.0;
    }

    else if(ticketsSold > 200)
    {

        frontFloorTicketSold = 100;

        frontFloorReceipts = 100 * 29.0;

        backFloorTicketSold = 100;

        backFloorReceipts = backFloorTicketSold * 23.0;

        balconySold = ticketsSold - 200;

        balconyReceipts = balconySold * 19.0;
    }

        grossReceipts = balconyReceipts + frontFloorReceipts + backFloorReceipts;

        grossProfit = grossReceipts - eventCost;


        cout.setf(ios::fixed);                                                                 //use fixed point
    	cout.setf(ios::showpoint);                                                             //display the decimal
    	cout.precision(2);                                                                     //display two decimal places

    	cout << endl;
        cout << "Total ticket sales = " << ticketsSold << endl;
        cout  << endl << "Front floor tickets sold = " << frontFloorTicketSold << endl;
        cout << "Front floor ticket receipts = $" << frontFloorReceipts << endl;

        cout << endl;
        cout  << endl << "Back floor tickets sold = " << backFloorTicketSold << endl;
        cout << "Back floor ticket receipts = $" << backFloorReceipts << endl;

        cout << endl;
        cout << "Balcony tickets sold = " << balconySold << endl;
        cout << "Balcony ticket receipts = $" << balconyReceipts << endl;

        cout << endl;
        cout << "Gross receipts = $" << grossReceipts << endl;
        cout << "Profit = $" << grossProfit << endl;


    return 0;
}
