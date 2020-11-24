// Student ID: 20382528
// Quest: Three Zany Zebras
// Trophies: 24/24

#include <iostream> // cout
#include <sstream> // ostringstream
#include <string> // string

using namespace std;

bool play_game(int n)
{
    cout << "Welcome to my number guessing game\n\n";

    const int MAX = 6;

    for (int i = 1; i <= MAX; i++)
    {
        cout << "Enter your guess: \n";

        string user_input;
        getline(cin, user_input);
        int x = 0;
        istringstream(user_input) >> x;

        cout << "You entered: " << x << endl;

        if (x == n)
        {
            cout << "You found it in " << i << " guess(es).\n";

            return true;
        }
    }

    cout << "\nI'm sorry. You didn't find my number.\nIt was " << n;
    return false;
}

double etox(double x, size_t n)
{
    double result;

    if (n == 0)
    {
        result = 0;
    }
    else
    {
        result = 1;
        double term;

        for (unsigned int i = 1; i < n; i++)
        {
            term = 1;

            for (unsigned int j = 1; j <= i; j++)
            {
                term *= x;
            }

            for (unsigned int j = 1; j <= i; j++)
            {
                term /= j;
            }

            result += term;
        }
    }

    return result;
}

size_t count_chars(string s, char c)
{
    size_t result = 0;

    for (unsigned int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            result++;
        }
    }

    return result;
}

size_t gcd(size_t a, size_t b)
{
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int remainder = 1;

    while (b > 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

string get_ap_terms(int a, int d, size_t n)
{
    int term = a;
    ostringstream oss;

    for (unsigned int i = 0; i < n; i++)
    {
        oss << term;

        if (i < n - 1)
        {
            oss << ",";
        }

        term += d;
    }

    string result = oss.str();
    return result;
}

string get_gp_terms(double a, double r, size_t n)
{
    double term = a;
    ostringstream oss;

    for (unsigned int i = 0; i < n; i++)
    {
        oss << term;

        if (i < n - 1)
        {
            oss << ",";
        }

        term *= r;
    }

    string result = oss.str();
    return result;
}

double get_nth_fibonacci_number(size_t n)
{
    double previous = 1;
    double result = 1;

    while (n-- > 2)
    {
        result += previous;
        previous = result - previous;
    }

    return result;
}
