#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

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
    string code;
    ifstream inputFile;
    inputFile.open("newdata.txt");

    cout << "Enter your code." << endl;
    cin >> code;

    for (int count = 1; count <= 1; count++)
    {
        inputFile >> user1;
    }
    if (user1 == code){
        cout << "Access Granted." << endl;
    }else{
    cout << "Access Denied." << endl;
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
void check (int)
{
    int des;
    if (des == 1)
    {
        data(1);
    }else{
    create(1);
    }
}
void balaceQuestion (int)
{
    int option;
    cout <<"Would you like to view your balance?" << endl;
    cout <<"Yes = 1"<< endl;
    cout <<"No = 2"<< endl << endl;
    cin >> option;
}
void veiwBalance (double)
{
	string dalla;
	ifstream inputFile;
	inputFile.open ("mymoney.txt");
	for (int count = 1; count <= 1; count++)
	{
		inputFile >> dalla;
		cout << "You have $" << dalla << " in your account." << endl;
	}
}
void balanceCheck (double)
{
        int option;
        if (option == 1)
        {
		veiwBalance(1);
        }else{
        cout << "OK." << endl;
        }
}
void withdrawQuestion (int)
{
	int withdrawQuestion;
	cout << "Would you like to withdraw money?." << endl;
	cout << "Yes = 1"<< endl;
	cout << "No = 2" << endl;
	cin >> withdrawQuestion;
}
void withdraw (double)
{
	string dalla;
	ifstream inputFile;
	inputFile.open ("mymoney.txt");
	for (int count = 1; count <= 1; count++)
	{
		inputFile >> dalla;
	}
	double amount;
	ofstream outputFile;
	outputFile.open("mymoney.txt");
	cout << "How much would you like to withdraw?" << endl;
	cin >> amount;
	stringstream geek(dalla);
	int fixDalla = 0;
	geek >> fixDalla;
	double total = fixDalla - amount;
	outputFile << total;
	outputFile.close();
    cout << "Amount Withdrawn." << endl;
}
void withdrawCheck (double)
{
	int withdrawQuestion;
	if (withdrawQuestion == 1)
	{
		withdraw(1);
	}else{
		cout << "OK.";
	}
}
void depositQuestion (int)
{
	int question;
	cout << "Would you like to deposit money?" << endl;
	cout << "Yes = 1" << endl;
	cout << "No = 2" << endl << endl;
	cin >> question;
}
void deposit (double)
{
    string dalla;
	ifstream inputFile;
	inputFile.open ("mymoney.txt");
	for (int count = 1; count <= 1; count++)
	{
		inputFile >> dalla;
	}
	double amount;
	ofstream outputFile;
	outputFile.open("mymoney.txt");
	cout << "How much would you like to deposit?" << endl;
	cin >> amount;
	stringstream geek(dalla);
	int fixDalla = 0;
	geek >> fixDalla;
	double total = amount + fixDalla;
	outputFile << total;
	outputFile.close();
    cout << "Amount deposited." << endl;
}
void depositCheck (double)
{
	int question;
	if (question == 1)
	{
		deposit(1);
	}else{
		cout << "OK." << endl;
	}
}
int main()
{
    start(1);
    check(1);
    balaceQuestion(1);
    balanceCheck(1);
    depositQuestion(1);
    depositCheck(1);
    withdrawQuestion(1);
    withdrawCheck(1);
    return 0;
}
