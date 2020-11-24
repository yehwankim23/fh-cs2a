// Student ID: 20382528
// Quest: A Calculating Crow

#include "Pet.h"

#include <iostream> // cout
#include <sstream> // ostringstream

using namespace std;

int main()
{
    cout << "Default Pet: " + Pet().to_string() << endl << endl;

    cout << "Population: " << Pet::get_population() << endl << endl;

    {
        vector<Pet> pets;

        Pet::get_n_pets(5, pets, 5);

        cout << "Population: " << Pet::get_population() << endl << endl;

        for (size_t i = 0; i < pets.size(); i++)
        {
            ostringstream oss;
            oss << i;

            cout << "Pet " + oss.str() + ": " + pets[i].to_string() << endl;
        }
    }

    cout << endl << "Population: " << Pet::get_population() << endl;
    return 0;
}

/* Output
Default Pet: (Name: , ID: -1, Limb Count: 0)

Population: 0

Population: 5

Pet 0: (Name: yuvob, ID: 2, Limb Count: 8)
Pet 1: (Name: arike, ID: 5, Limb Count: 2)
Pet 2: (Name: emuwo, ID: 11, Limb Count: 8)
Pet 3: (Name: ezale, ID: 14, Limb Count: 7)
Pet 4: (Name: ihugu, ID: 16, Limb Count: 0)

Population: 0

*/
