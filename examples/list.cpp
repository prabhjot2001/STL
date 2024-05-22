#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

// custom find function
list<int>::iterator find(list<int>::iterator begin, list<int>::iterator end, int key)
{
    list<int>::iterator it;

    for (it = begin; it != end; it++)
    {
        if (*it == key)
        {
            return it;
        }
    }
    return end;
}

int main()
{
    list<int> li;
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);

    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); it++)
    {
        cout << *it << endl;
    }

    it = find(li.begin(), li.end(), 410);
    if (it != li.end())
    {
        cout << *it << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }
}