// Student ID: 20382528
// Quest: The Megastore Martin

#include "Pet_Store.h"

#include <iostream> // cout

using namespace std;

int main()
{
    Pet_Store pet_store;

    cout << "Size: " << pet_store.get_size() << endl << endl;

    pet_store.set_size(5);

    cout << "Size: " << pet_store.get_size() << endl;
    cout << pet_store.to_string(0, pet_store.get_size() - 1) << endl;

    pet_store.populate_with_n_random_pets(5);

    cout << pet_store.to_string(0, pet_store.get_size() - 1) << endl;

    Pet pet;

    cout << pet_store.find_pet_by_id_lin(22, pet) << endl;
    cout << pet.to_string() << endl << endl;

    pet.set_name("sam");
    pet.set_id(23);
    pet.set_num_limbs(4);

    cout << pet_store.find_pet_by_id_bin(22, pet) << endl;
    cout << pet.to_string() << endl << endl;

    pet.set_name("sam");
    pet.set_id(23);
    pet.set_num_limbs(4);

    cout << pet_store.find_pet_by_name_lin("modegoc", pet) << endl;
    cout << pet.to_string() << endl << endl;

    pet.set_name("sam");
    pet.set_id(23);
    pet.set_num_limbs(4);

    cout << pet_store.find_pet_by_name_bin("modegoc", pet) << endl;
    cout << pet.to_string() << endl << endl;

    pet_store.clear();

    cout << "Size: " << pet_store.get_size() << endl;
    return 0;
}

/* Output
Size: 0

Size: 5
(Name: , ID: -1, Limb Count: 0)
(Name: , ID: -1, Limb Count: 0)
(Name: , ID: -1, Limb Count: 0)
(Name: , ID: -1, Limb Count: 0)
(Name: , ID: -1, Limb Count: 0)

(Name: yuvobiz, ID: 2, Limb Count: 8)
(Name: ikerixe, ID: 8, Limb Count: 2)
(Name: jirehol, ID: 10, Limb Count: 6)
(Name: obihugu, ID: 18, Limb Count: 0)
(Name: modegoc, ID: 22, Limb Count: 6)

1
(Name: modegoc, ID: 22, Limb Count: 6)

1
(Name: modegoc, ID: 22, Limb Count: 6)

1
(Name: modegoc, ID: 22, Limb Count: 6)

1
(Name: modegoc, ID: 22, Limb Count: 6)

Size: 0

*/