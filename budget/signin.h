//
// Created by Milinium Falcon on 2018-08-08.
//

#ifndef BUDGET_SIGNIN_H
#define BUDGET_SIGNIN_H

#endif //BUDGET_SIGNIN_H


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