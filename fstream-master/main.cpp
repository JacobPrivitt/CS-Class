#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");

    cout << "Here are the names stored in the Friends.txt file. \n";

    for (int count = 1; count <= 3; count++)
    {
        inputFile >> name;
        cout << name <<endl;
    }
    inputFile.close();
    return 0;
}
