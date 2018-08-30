/* Jacob Privitt
Tax and Tip calculator with a $44.50 meal charge. The tax should be 6.75% of
meal cost, and the tip should be 15% of the total with tax. Display the cost for
all of the amounts and the total bill. */
#include <iostream>

using namespace std;

int main()
{
    double mealCost = 44.50,            //Meal Cost
    taxRate = .0675,                    //Tax Rate
    tipRate = .15,                      //Tip Rate
    taxAmt = mealCost * taxRate,        //Tax Amount
    subtotal = mealCost + taxAmt,       //Subtotal
    tipAmt = subtotal * tipRate,        //Tip Amount
    totalCost = subtotal + tipAmt;      //Total Cost


    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Tax Amount: $" << taxAmt << endl;
    cout << "Tip Amount: $" << tipAmt << endl;
    cout << "Total Cost: $" << totalCost << endl;

}
