#include <iostream>

using namespace std;

int main() {

    cout << "Please input your current grade: ";

    double cur_grade;
    cin >> cur_grade;
    cout << endl;

    cout << "Please input passing grade: ";

    double pass_grade;
    cin >> pass_grade;
    cout << endl;

    cout << "Please input the worth of the final as a percentage: ";

    double per_grade;
    cin >> per_grade;
    cout << endl;

//Required = (Goal − Current × (100% − Final Weight)) / Final Weight

    double end_all = (100*pass_grade-(100-per_grade)*cur_grade)/per_grade;

    cout << "You need to make a " << end_all << " on your final to pass the class with a " << pass_grade << endl;

    return 0;
}