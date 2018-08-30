/* Jacob Privitt
Stadium Program
Chapter 3
Due 01/28/18
2 Point Precision*/

#include <iostream>
#include <iomanip>

using namespace std;

double classA = 15;                                                     //Class A
double classB = 12;                                                     //Class B
double classC = 9;                                                      //Class C

int main ()
{
cout << fixed << setprecision(2);
    double classASales;                                                 //Defining A Sales
cout << "How many Class A tickets were sold?" << endl;
cin >> classASales;
    double classBSales;                                                 //Defining B Sales
cout << "How many Class B tickets were sold?" << endl;
cin >> classBSales;
    double classCSales;                                                 //Defining C Sales
cout << "How many Class C tickets were sold?" << endl;
cin >> classCSales;

double classATotal = classASales * classA;                              //Defining Totals
double classBTotal = classBSales * classB;
double classCTotal = classCSales * classC;

cout << "Profit from Class A tickets are: $" << classATotal << endl;      //Outputs for profits
cout << "Profit from Class B tickets are: $" << classBTotal << endl;
cout << "Profit from Class C tickets are: $" << classCTotal << endl;

double profitTotal = classATotal + classBTotal + classCTotal;           //Total Profit

cout << "Total Sales: $" << profitTotal << endl;                          //Output for total profit

}
