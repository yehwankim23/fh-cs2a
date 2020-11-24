// Student ID: 20382528
// Quest: Takshaka the Serpent

#include "Eliza.h"

#include <iostream> // cout
#include <string> // string

using namespace std;

int main()
{
    cout << lispify("sixty six") << endl;

    string s = "that's really cool";

    cout << rotate_vowels(s) << endl;

    enter();
    return 0;
}

/* Output
thixty thix
thet's rielly cuul
What?
are you the doctor or her secretary?
    are you the doctor or her secretary?

Interethting. When did you thtop thtopping yout thibilanth?
are you the doctor or her thecretary?! Sheesh! Now what?
are you the doctor or not?
    are you the doctor or not?

eri yua thi ductur ur nut??
is this for real?
    is this for real?

Interethting. When did you thtop thtopping yout thibilanth?
ith thith for real?! Sheesh! Now what?
ok, gotta see the doc now... or maybe you do.
    ok, gotta see the doc now... or maybe you do.

Interethting. When did you thtop thtopping yout thibilanth?
ok, gotta thee the doc now... or maybe you do.! Sheesh! Now what?
yeah, you do.
    yeah, you do.

yieh, yua du.?
that does it. tell the good doctor i left.
    that does it. tell the good doctor i left.

Interethting. When did you thtop thtopping yout thibilanth?
that doeth it. tell the good doctor i left.! Sheesh! Now what?
bye.
    bye.

Ok Bye. Nice being a force of change in your life.

*/
