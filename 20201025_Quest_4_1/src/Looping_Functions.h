// Student ID: 20382528
// Quest: Three Zany Zebras

#ifndef Looping_Functions_h
#define Looping_Functions_h

#include <iostream> // cout
#include <sstream> // ostringstream
#include <string> // string

using namespace std;

bool play_game(int n);
double etox(double x, size_t n);
size_t count_chars(string s, char c);
size_t gcd(size_t n1, size_t n2);
string get_ap_terms(int a, int d, size_t n);
string get_gp_terms(double a, double r, size_t n);
double get_nth_fibonacci_number(size_t n);

#endif
