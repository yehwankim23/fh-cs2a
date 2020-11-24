// Student ID: 20382528
// Quest: A Joke Loving Jay
// Trophies: 6/6

#include <iostream> // cout
#include <string> // string
#include <sstream> // istringstream

using namespace std;

double etox_5_terms(double x)
{
    double result = 1 + x + x * x / 2 + x * x * x / 6 + x * x * x * x / 24;
    return result;
}

int main()
{
    cout << "Enter a value for x: ";

    string user_input;
    getline(cin, user_input);
    double x;
    istringstream(user_input) >> x;

    cout << etox_5_terms(x) << endl;
    return 0;
}

/* Output
Enter a value for x: 1
2.70833

*/
