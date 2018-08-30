/* Jacob Privitt CS 150-0
1/29/18 */
#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Enter a number between 1-10." << endl;         //Output
    cin >> num1;                                            //Input

    switch (num1)                                           //Switch Statement
    {
    case 1:
        cout << "I";
        break;
    case 2:
        cout <<"II";
        break;
    case 3:
        cout << "III";
        break;
    case 4:
        cout << "IV";
        break;
    case 5:
        cout << "V";
        break;
    case 6:
        cout << "VI";
        break;
    case 7:
        cout << "VII";
        break;
    case 8:
        cout << "VIII";
        break;
    case 9:
        cout << "IX";
        break;
    case 10:
        cout << "X";
        break;
    default: cout << "You entered the wrong number.";
    }
}
