// Student ID: 20382528
// Quest: Takshaka the Serpent
// Trophies: 33/33

#include <iostream> // cout
#include <string> // string

using namespace std;

string lispify(string s)
{
    const int LENGTH = s.length();
    string result;

    for (int i = 0; i < LENGTH; i++)
    {
        char c = s[i];

        if (c == 's')
        {
            result += string("th");
        }
        else if (c == 'S')
        {
            result += string("Th");
        }
        else
        {
            result += c;
        }
    }

    return result;
}

string rotate_vowels(string& s)
{
    const int LENGTH = s.length();

    for (int i = 0; i < LENGTH; i++)
    {
        char c = s[i];

        switch (c)
        {
            case 'a':
                s[i] = 'e';
                break;
            case 'e':
                s[i] = 'i';
                break;
            case 'i':
                s[i] = 'o';
                break;
            case 'o':
                s[i] = 'u';
                break;
            case 'u':
                s[i] = 'a';
                break;
            case 'A':
                s[i] = 'E';
                break;
            case 'E':
                s[i] = 'I';
                break;
            case 'I':
                s[i] = 'O';
                break;
            case 'O':
                s[i] = 'U';
                break;
            case 'U':
                s[i] = 'A';
                break;
        }
    }

    return s;
}

void enter()
{
    cout << "What?\n";

    while (true)
    {
        string input;
        getline(cin, input);

        if (input.length() == 0)
        {
            cout << "What?\n";
            continue;
        }

        cout << "    " << input << "\n\n";

        if (input.find("!") != string::npos)
        {
            cout << "OMG! You don't say!! " << input << "!!!!!\n";
            continue;
        }

        if (input.find("why") != string::npos
            || input.find("what") != string::npos)
        {
            cout << "I'm sorry, I don't like questions that contain what or "
                "why.\n";
            continue;
        }

        if (input.find("s") != string::npos)
        {
            cout << "Interethting. When did you thtop thtopping your "
                "thibilanth?\n" << lispify(input) << "! Sheesh! Now what?\n";
            continue;
        }

        if (input.find("bye") != string::npos
            || input.find("quit") != string::npos
            || input.find("Bye") != string::npos
            || input.find("Quit") != string::npos)
        {
            cout << "Ok Bye. Nice being a force of change in your life.\n";
            break;
        }

        if (rand() % 10 > 7)
        {
            cout << "Huh? Why do you say: " << input << "?\n";
        }
        else
        {
            cout << rotate_vowels(input) << "?\n";
        }
    }
}
