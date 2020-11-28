// Student ID: 20382528
// Quest: The Duck-Billed Platypus
// Trophies: 33/33

#ifndef String_List_h
#define String_List_h

#include <sstream> // ostringstream
#include <string> // string

using namespace std;

class String_List
{
private:
    struct Node
    {
        string data;
        Node* next;

        Node(string s = "") : data(s), next(nullptr) {}
    };

    Node* _head, * _tail, * _prev_to_current;
    size_t _size;

public:
    String_List()
    {
        _head = new Node("_SENTINEL_");
        _tail = _prev_to_current = _head;
        _size = 0;
    }
    ~String_List()
    {
        clear();
        delete _head;
    }

    String_List* insert_at_current(string s)
    {
        Node* new_node = new Node(s);
        new_node->next = _prev_to_current->next;
        _prev_to_current->next = new_node;
        _size++;

        if (_head == _tail)
        {
            _tail = _tail->next;
        }

        return this;
    }
    String_List* push_back(string s)
    {
        Node* prev = _prev_to_current;
        _prev_to_current = _tail;
        insert_at_current(s);
        _tail = _prev_to_current->next;
        _prev_to_current = prev;
        return this;
    }
    String_List* push_front(string s)
    {
        Node* prev = _prev_to_current;
        _prev_to_current = _head;
        insert_at_current(s);
        _prev_to_current = prev;
        return this;
    }
    String_List* advance_current()
    {
        if (_prev_to_current == _tail)
        {
            return nullptr;
        }

        _prev_to_current = _prev_to_current->next;
        return this;
    }
    string get_current() const
    {
        if (_prev_to_current == _tail)
        {
            return _head->data;
        }

        return _prev_to_current->next->data;
    }
    String_List* remove_at_current()
    {
        _prev_to_current->next = _prev_to_current->next->next;
        _size--;
        return this;
    }
    size_t get_size() const { return _size; }
    String_List* rewind()
    {
        _prev_to_current = _head;
        return this;
    }
    void clear()
    {
        rewind();

        while (_prev_to_current != nullptr)
        {
            _head = _prev_to_current->next;
            delete _prev_to_current;
            _prev_to_current = _head;
        }

        _head = new Node("_SENTINEL_");
        _tail = _prev_to_current = _head;
        _size = 0;
    }

    string& find_item(string s) const
    {
        Node* curr = _head->next;

        while (curr != nullptr)
        {
            string& result = curr->data;

            if (result == s)
            {
                return result;
            }

            curr = curr->next;
        }

        return _head->data;
    }
    string to_string() const
    {
        ostringstream oss;
        oss << _size;
        string result = "# String_List - " + oss.str()
            + " entries total. Starting at cursor:\n";
        Node* curr = _prev_to_current->next;

        for (int i = 0; i < 25 && curr != nullptr; i++)
        {
            result += curr->data + "\n";
            curr = curr->next;
        }

        if (_size > 25)
        {
            result += "...\n";
        }

        return result;
    }

    friend class Tests;
};

#endif
