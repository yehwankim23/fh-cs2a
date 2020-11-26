// Student ID: 20382528
// Quest: An Elephant Who Remembers
// Trophies: 20/20

#ifndef Stacks_h
#define Stacks_h

#include <sstream> // ostringstream
#include <string> // string
#include <vector> // vector

using namespace std;

class Stack_Int
{
private:
    vector<int> _data;

public:
    bool is_empty() const { return _data.empty(); }
    size_t size() const { return _data.size(); }

    void push(int val) { _data.push_back(val); }
    int top(bool& success) const
    {
        if (_data.empty())
        {
            success = false;
            return 0;
        }

        success = true;
        return _data[_data.size() - 1];
    }
    bool pop()
    {
        if (_data.empty())
        {
            return false;
        }

        _data.pop_back();
        return true;
    }
    bool pop(int& val)
    {
        if (_data.empty())
        {
            val = 0;
            return false;
        }

        val = _data[_data.size() - 1];
        _data.pop_back();
        return true;
    }

    string to_string() const
    {
        ostringstream oss;
        oss << _data.size();
        string result = "Stack (" + oss.str() + " elements):\n";

        for (int i = 0; i < 10; i++)
        {
            oss.str("");
            oss.clear();
            oss << _data[_data.size() - 1 - i];
            result += oss.str() + "\n";
        }

        if (_data.size() > 10)
        {
            result += "...\n";
        }

        result += "Elements, if listed above, are in increasing order of age.";

        return result;
    }

    friend class Tests;
};

class Stack_String
{
private:
    vector<string> _data;

public:
    bool is_empty() const { return _data.empty(); }
    size_t size() const { return _data.size(); }

    void push(string val) { _data.push_back(val); }
    string top(bool& success) const
    {
        if (_data.empty())
        {
            success = false;
            return "";
        }

        success = true;
        return _data[_data.size() - 1];
    }
    bool pop()
    {
        if (_data.empty())
        {
            return false;
        }

        _data.pop_back();
        return true;
    }
    bool pop(string& val)
    {
        if (_data.empty())
        {
            val = "";
            return false;
        }

        val = _data[_data.size() - 1];
        _data.pop_back();
        return true;
    }

    string to_string() const
    {
        ostringstream oss;
        oss << _data.size();
        string result = "Stack (" + oss.str() + " elements):\n";

        for (int i = 0; i < 10; i++)
        {
            result += _data[_data.size() - 1 - i] + "\n";
        }

        if (_data.size() > 10)
        {
            result += "...\n";
        }

        result += "Elements, if listed above, are in increasing order of age.";

        return result;
    }

    friend class Tests;
};

#endif
