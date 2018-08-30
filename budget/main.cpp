#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double salary;
double monthSal = salary / 12;
double rent;
double utilities;
double phone;
double enter;
double clothing;
double food;
double car;
double insurance;
double tax;
double monthTax = tax / 12;
double other;
double totalCost = rent + utilities + phone + enter + other + clothing + food + monthTax + insurance + car;
double yearCost = totalCost * 12;



void start(int)
{
    int des;
    cout << "Create an account or Sign In." << endl;
    cout << "Sign in = 1" << endl;
    cout << "Sign up = 2" << endl;
    cin >> des;
}
void data (double)
{
    string user1;
    string username;
    string password;
    ifstream inputFile;
    inputFile.open("newdata.txt");

    cout << "Enter your username." << endl;
    cin >> username;
    cout << "Enter your password." << endl;
    cin >> password;

    for (int count = 1; count <= 1; count++)
    {
        inputFile >> user1;
    }
    if (user1 == password){
        cout << "Access Granted." << endl;
    }else{
        cout << "Access Denied." << endl;
        exit(0);
    }
    inputFile.open("newdata.txt");
}
void create (double)
{
    string code;
    ofstream outputFile;
    outputFile.open("newdata.txt");

    cout << "Create your code." << endl;
    cin >> code;
    outputFile << code;
    outputFile.close();

    cout << "Your account has been created.\n" << endl;
}



    void questions(double) {

        /* Budget Manager */
        cout << "How much do you make in a year?" << endl;
        cout << "$";
        cin >> salary;


        cout << "How much do you pay in rent/mortgage?" << endl;
        cout << "$";
        cin >> rent;

        cout << "How much are your utilities every month?" << endl;
        cout << "$";
        cin >> utilities;

        cout << "How much is your phone bill  every month?" << endl;
        cout << "$";
        cin >> phone;

        cout << "How much do you pay for entertainment every month?" << endl;
        cout << "$";
        cin >> enter;

        cout << "How much do you spend on clothing per month?" << endl;
        cout << "$";
        cin >> clothing;

        cout << "How much do you spend of food in a month?" << endl;
        cout << "$";
        cin >> food;

        cout << "How much do you spend on gas?" << endl;
        cout << "$";
        cin >> car;

        cout << "How much do you pay in insurence? (Home, Liability, Car, Life, etc)" << endl;
        cout << "$";
        cin >> insurance;

        cout << "How much do you pay in taxes in a year?" << endl;
        cout << "$";
        cin >> tax;


        cout << "Other monthly expenses that wern't covered above?" << endl;
        cout << "$";
        cin >> other;



        cout << "Your total cost per month is, $" << totalCost << " and your total yearly cost is, $" << yearCost
             << endl << endl;

    }

    void goalQs () {

        double dispose;
        cout << "How much disposable income would you like at the end of the month? (Take Home)" << endl;
        cout << "$";
        cin >> dispose;

        double save;
        cout << "How much money would you like to put into savings each month." << endl;
        cout << "$";
        cin >> save;


        double realDispose = salary - yearCost;
        double monthlyDispose = monthSal - totalCost;
        cout << "Your yearly disposable income is $" << realDispose << " and your monthly disposable is $"
             << monthlyDispose << endl;

        if (dispose < monthlyDispose) {
            cout << "You have passed your monthly disposable goal. Great job!" << endl;
        } else if (dispose == monthlyDispose) {
            cout << "Your right on the money!" << endl;
        } else {
            cout << "You will need to cut back on spending or make more per month to make your goal." << endl;
        };

    }


int main() {
        start();
        data();
        create();
        if start() == 2 {
            questions();
            goalQs();
        }else{

        }
    }