// Student ID: 20382528
// Quest: The Megastore Martin
// Trophies: 26/26

#include "Pet_Store.h"

#include <algorithm> // sort
#include <string> // string

using namespace std;

bool Pet_Store::_id_compare(const Pet& p1, const Pet& p2)
{
    return p1.get_id() < p2.get_id();
}

bool Pet_Store::_name_compare(const Pet& p1, const Pet& p2)
{
    return p1.get_name() < p2.get_name();
}

void Pet_Store::_sort_pets_by_id()
{
    sort(_pets.begin(), _pets.end(), Pet_Store::_id_compare);
    _sort_order = BY_ID;
}

void Pet_Store::_sort_pets_by_name()
{
    sort(_pets.begin(), _pets.end(), Pet_Store::_name_compare);
    _sort_order = BY_NAME;
}

Pet_Store::Pet_Store(size_t n)
{
    _pets.resize(n);

    _sort_order = NONE;
}

size_t Pet_Store::get_size() const
{
    return _pets.size();
}

void Pet_Store::set_size(size_t n)
{
    _pets.resize(n);
}

void Pet_Store::clear()
{
    _pets.clear();
}

void Pet_Store::populate_with_n_random_pets(size_t n)
{
    Pet::get_n_pets(n, _pets, 7);

    _sort_order = BY_ID;
}

bool Pet_Store::find_pet_by_id_lin(long id, Pet& pet)
{
    for (Pet& p : _pets)
    {
        if (p.get_id() == id)
        {
            pet = p;
            return true;
        }
    }

    return false;
}

bool Pet_Store::find_pet_by_id_bin(long id, Pet& pet)
{
    if (_sort_order != BY_ID)
    {
        _sort_pets_by_id();
    }

    long first_index = 0, last_index = _pets.size() - 1;

    while (first_index <= last_index)
    {
        long key = (first_index + last_index) / 2;
        Pet p = _pets[key];
        long p_id = p.get_id();

        if (p_id == id)
        {
            pet = p;
            return true;
        }
        else if (p_id > id)
        {
            last_index = key - 1;
        }
        else
        {
            first_index = key + 1;
        }
    }

    return false;
}

bool Pet_Store::find_pet_by_name_lin(string name, Pet& pet)
{
    for (Pet& p : _pets)
    {
        if (p.get_name() == name)
        {
            pet = p;
            return true;
        }
    }

    return false;
}

bool Pet_Store::find_pet_by_name_bin(string name, Pet& pet)
{
    if (_sort_order != BY_NAME)
    {
        _sort_pets_by_name();
    }

    long first_index = 0, last_index = _pets.size() - 1;

    while (first_index <= last_index)
    {
        long key = (first_index + last_index) / 2;
        Pet p = _pets[key];
        string p_name = p.get_name();

        if (!p_name.compare(name))
        {
            pet = p;
            return true;
        }
        else if (p_name.compare(name) > 0)
        {
            last_index = key - 1;
        }
        else
        {
            first_index = key + 1;
        }
    }

    return false;
}

string Pet_Store::to_string(size_t n1, size_t n2)
{
    string result;

    if (n1 < _pets.size() && n2 < _pets.size())
    {
        for (size_t i = n1; i < n2 + 1; i++)
        {
            result += _pets[i].to_string() + "\n";
        }
    }

    return result;
}
