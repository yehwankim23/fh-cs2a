// Student ID: 20382528
// Quest: The Megastore Martin

#include "Pet.h"

#include <iostream> // ostream
#include <sstream> // ostringstream
#include <string> // string
#include <vector> // vector

using namespace std;

size_t Pet::_population = 0;

Pet::Pet(string name, long id, int num_limbs)
{
    _population++;

    _name = name;
    _id = id;
    _num_limbs = num_limbs;
}

Pet::~Pet()
{
    _population--;
}

bool Pet::set_name(string name)
{
    bool result = false;

    if (name.length() > 0)
    {
        _name = name;
        result = true;
    }

    return result;
}

bool Pet::set_id(long id)
{
    bool result = false;

    if (id >= 0)
    {
        _id = id;
        result = true;
    }

    return result;
}

bool Pet::set_num_limbs(int num_limbs)
{
    bool result = false;

    if (num_limbs >= 0)
    {
        _num_limbs = num_limbs;
        result = true;
    }

    return result;
}

string Pet::to_string() const
{
    ostringstream oss_id, oss_num_limbs;
    oss_id << _id;
    oss_num_limbs << _num_limbs;
    string result = "(Name: " + _name + ", ID: " + oss_id.str()
        + ", Limb Count: " + oss_num_limbs.str() + ")";
    return result;
}

void Pet::get_n_pets(size_t n, vector<Pet>& pets, int name_len)
{
    pets.resize(n);

    long prev_id = 0;

    for (size_t i = 0; i < n; i++)
    {
        long id = prev_id + 1 + rand() % 10;
        pets[i].set_id(id);
        pets[i].set_num_limbs(rand() % 9);

        string name = make_a_name(name_len);
        pets[i].set_name(name);

        prev_id = id;
    }
}

string Pet::make_a_name(int len)
{
    int random = rand() % 2;
    string result;
    const string VOWELS = "aeiou";
    const string CONSONANTS = "bcdfghjklmnpqrstvwxyz";

    for (int i = random; i < len + random; i++)
    {
        if (i % 2 == 0)
        {
            result += CONSONANTS[rand() % CONSONANTS.length()];
        }
        else
        {
            result += VOWELS[rand() % VOWELS.length()];
        }
    }

    return result;
}

bool operator==(const Pet& pet1, const Pet& pet2)
{
    bool result = pet1.get_name() == pet2.get_name()
        && pet1.get_id() == pet2.get_id()
        && pet1.get_num_limbs() == pet2.get_num_limbs();
    return result;
}

bool operator!=(const Pet& pet1, const Pet& pet2)
{
    bool result = !operator==(pet1, pet2);
    return result;
}

ostream& operator<<(ostream& os, const Pet& pet)
{
    os << pet.to_string();
    return os;
}
