// Student ID: 20382528
// Quest: An Elephant Who Remembers

#include "Stacks.h"

#include <iostream> // cout

using namespace std;

int main()
{
    Stack_Int stack_int;

    cout << "Empty: " << stack_int.is_empty() << endl;
    cout << "Size: " << stack_int.size() << endl << endl;

    bool b;

    cout << "Top: " << stack_int.top(b) << endl;
    cout << b << endl << endl;

    stack_int.push(3);
    stack_int.push(1);
    stack_int.push(4);
    stack_int.push(1);
    stack_int.push(5);
    stack_int.push(9);
    stack_int.push(2);
    stack_int.push(6);
    stack_int.push(5);
    stack_int.push(3);
    stack_int.push(5);
    stack_int.push(8);
    stack_int.push(9);
    stack_int.push(7);
    stack_int.push(9);

    cout << "Empty: " << stack_int.is_empty() << endl;
    cout << "Size: " << stack_int.size() << endl << endl;

    cout << "Top: " << stack_int.top(b) << endl;
    cout << b << endl << endl;

    stack_int.pop();

    cout << "Size: " << stack_int.size() << endl << endl;

    int i;

    cout << "Pop: " << stack_int.pop(i) << endl;
    cout << i << endl << endl;

    cout << stack_int.to_string() << endl << endl;

    Stack_String stack_string;

    cout << "Empty: " << stack_string.is_empty() << endl;
    cout << "Size: " << stack_string.size() << endl << endl;

    cout << "Top: " << stack_string.top(b) << endl;
    cout << b << endl << endl;

    stack_string.push("3");
    stack_string.push("1");
    stack_string.push("4");
    stack_string.push("1");
    stack_string.push("5");
    stack_string.push("9");
    stack_string.push("2");
    stack_string.push("6");
    stack_string.push("5");
    stack_string.push("3");
    stack_string.push("5");
    stack_string.push("8");
    stack_string.push("9");
    stack_string.push("7");
    stack_string.push("9");

    cout << "Empty: " << stack_string.is_empty() << endl;
    cout << "Size: " << stack_string.size() << endl << endl;

    cout << "Top: " << stack_string.top(b) << endl;
    cout << b << endl << endl;

    stack_string.pop();

    cout << "Size: " << stack_string.size() << endl << endl;

    string s;

    cout << "Pop: " << stack_string.pop(s) << endl;
    cout << s << endl << endl;

    cout << stack_string.to_string() << endl;
    return 0;
}

/* Output
Empty: 1
Size: 0

Top: 0
0

Empty: 0
Size: 15

Top: 9
1

Size: 14

Pop: 1
7

Stack (13 elements):
9
8
5
3
5
6
2
9
5
1
...
Elements, if listed above, are in increasing order of age.

Empty: 1
Size: 0

Top:
0

Empty: 0
Size: 15

Top: 9
1

Size: 14

Pop: 1
7

Stack (13 elements):
9
8
5
3
5
6
2
9
5
1
...
Elements, if listed above, are in increasing order of age.

*/
