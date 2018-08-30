#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int password = 1234;
    double user;
    ifstream inputFile;
    string name;

    cout << "Enter Your Password to see your list of friends." << endl;
    cin >> user;

    if(user == password)
    {
        cout << "Access Granted."<< endl;
        inputFile.open("Friends.txt");
        cout << "Here are the names stored in the Friends.txt file. \n";
    for(int count = 1; count <= 3; count++)
    {
        inputFile >> name;
        cout << name << endl;
    }
    inputFile.close();
    } else {
    cout << "Access Denied.";
    }
    return 0;
}
