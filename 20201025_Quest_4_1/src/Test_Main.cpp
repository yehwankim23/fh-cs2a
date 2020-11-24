// Student ID: 20382528
// Quest: Three Zany Zebras

#include "Looping_Functions.h"

#include <iostream> // cout
#include <string> // string

using namespace std;

int main()
{
    cout << play_game(3) << endl;
    cout << etox(1, 4) << endl;
    cout << count_chars("1592653", '5') << endl;
    cout << gcd(897, 9) << endl;
    cout << get_ap_terms(3, 2, 3) << endl;
    cout << get_gp_terms(8, 4, 2) << endl;
    cout << get_nth_fibonacci_number(26) << endl;
    return 0;
}

/* Output
Welcome to my number guessing game

Enter your guess:
3
You entered: 3
You found it in 1 guess(es).
1
2.66667
2
3
3,5,7
8,32
121393

*/
