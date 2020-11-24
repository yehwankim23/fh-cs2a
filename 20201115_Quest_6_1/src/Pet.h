// Student ID: 20382528
// Quest: A Calculating Crow

#ifndef Pet_h
#define Pet_h

#include <iostream> // ostream
#include <sstream> // ostringstream
#include <string> // string
#include <vector> // vector

using namespace std;

class Pet
{
private:
    static size_t _population;

    string _name;
    long _id;
    int _num_limbs;

public:
    Pet(string name = "", long id = -1, int num_limbs = 0);
    ~Pet();

    static size_t get_population() { return _population; }

    string get_name() const { return _name; }
    long get_id() const { return _id; }
    int get_num_limbs() const { return _num_limbs; }

    bool set_name(string name);
    bool set_id(long id);
    bool set_num_limbs(int num_limbs);

    string to_string() const;

    static void get_n_pets(size_t n, vector<Pet>& pets, int name_length);
    static string make_a_name(int len);

    friend class Tests;
};

ostream& operator<<(ostream& os, const Pet& pet);
bool operator==(const Pet& pet1, const Pet& pet2);
bool operator!=(const Pet& pet1, const Pet& pet2);

#endif
