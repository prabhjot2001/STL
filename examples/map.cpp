#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> mp;
    for (int i = 65; i <= 90; i++)
    {
        mp.insert(pair<char, int>((char)i, i));
    }
    map<char, int>::iterator it;
    it = mp.find('a');
    if (it == mp.end())
    {
        cout << "Match not found!" << endl;
    }
    else
    {
        cout << it->second << endl;
    }

    for (it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " : " << it->second << endl;
    }
}