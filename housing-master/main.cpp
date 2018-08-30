/* Jacob Privitt
CS 150-01 */
#include <iostream>

using namespace std;

int main()
{
 double rent;
 cout << "How much is your rent?" << endl;
 cin >> rent;

 double utilities;
 cout << "How much are your utilities every month?" << endl;
 cin >> utilities;

 double phone;
 cout << "How much is your phone bill  every month?" << endl;
 cin >> phone;

 double cable;
 cout << "How much is your cable bill every month?" << endl;
 cin >> cable;

 double totalCost = rent + utilities + phone + cable;

 double yearCost = totalCost * 12;

 cout << "The total cost per month is " << totalCost << endl;
 cout << "The yearly total is " << yearCost << endl;

}
