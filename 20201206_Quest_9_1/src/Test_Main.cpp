// Student ID: 20382528
// Quest: The Duck-Billed Platypus

#include "String_List.h"

#include <iostream> // cout

using namespace std;

int main()
{
    String_List string_list;

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    string_list.push_back("1");

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    string_list.push_front("2");

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    string_list.advance_current();
    string_list.insert_at_current("3");
    string_list.rewind();

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    cout << "Current: " << string_list.get_current() << endl << endl;

    string_list.remove_at_current();

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    string_list.find_item("1") = "4";

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << endl;

    string_list.clear();

    cout << "Size: " << string_list.get_size() << endl;
    cout << string_list.to_string() << flush;
    return 0;
}

/* Output
Size: 0
# String_List - 0 entries total. Starting at cursor:

Size: 1
# String_List - 1 entries total. Starting at cursor:
1

Size: 2
# String_List - 2 entries total. Starting at cursor:
2
1

Size: 3
# String_List - 3 entries total. Starting at cursor:
2
3
1

Current: 2

Size: 2
# String_List - 2 entries total. Starting at cursor:
3
1

Size: 2
# String_List - 2 entries total. Starting at cursor:
3
4

Size: 0
# String_List - 0 entries total. Starting at cursor:

*/
