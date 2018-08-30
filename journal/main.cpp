#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

//Table of Context

using namespace std;

int entryNum = 0;

void saveMaster() {

    ofstream outputFile;
    outputFile.open("master_file.txt", iostream::trunc);

    outputFile << entryNum;

    outputFile.close();

}

void readMaster() {

    ifstream inputFile;
    inputFile.open("master_file.txt");

    inputFile >> entryNum;

    inputFile.close();

}

void createJournal() {

// Test for multiple journal entries.

    readMaster();

    int number = ++entryNum;

    ofstream outputFile;
    outputFile.open("journal_entry" + to_string(number) + ".txt");

    cout << "Journal Entry #" << number << endl << endl;
    string entry;
    getline(cin, entry); // TODO: See if this fixes the journal issue UPDATE: It doesn't
    do {
        getline(cin, entry);
        outputFile << entry << endl;
    } while (!cin.eof());

    cin.clear();

    outputFile.close();

    saveMaster();

}

void showJournal(int index) {

    cout << "Journal Entry #" << index << endl << endl;

    ifstream journal;
    journal.open("journal_entry" + to_string(index) + ".txt");

    string line;
    while (!journal.eof()) {
        getline(journal, line);
        cout << line << endl;
    }

    string ignore;
    getline(cin, ignore);

}

void specificJournal() {

    readMaster();

    cout << "You have made " << entryNum << " journal entries. Which one would you like to read?" << endl << endl;
    cout << "(1-" << entryNum << ") > ";

    int choice;
    cin >> choice;
    cout << endl;

    if (choice <= entryNum && choice >= 1) {
        showJournal(choice);
    }
    else {
        cerr << "Error: invalid choice entered" << endl << endl;
        cin.clear();
    }

    string ignore;
    getline(cin, ignore);

}

int main() {
    cout << endl;

    bool stop /* Get some help*/= false;
    while (!stop /* Get some help*/) {
        cout << "What would you like to do?" << endl << endl;
        cout << "1. Create new journal entry" << endl;
        cout << "2. Read last journal entry" << endl;
        cout << "3. Read specific journal entry" << endl;
        cout << "4. Exit" << endl << endl;
        cout << "> ";

        int choice;
        cin >> choice;
        cout << endl;

        switch (choice) {

            case 1:
                createJournal();
                break;

            case 2:
                readMaster();
                showJournal(entryNum);
                break;

            case 3:
                specificJournal();
                break;

            case 4:
                stop = true;
                break;

            default:
                cerr << "Error: invalid choice entered" << endl << endl;
                cin.clear();
                break;
        }

        string ignore;
        getline(cin, ignore);
    }
}