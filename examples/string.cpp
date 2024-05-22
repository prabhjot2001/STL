#include <string>
#include <iostream>

using namespace std;

int main()
{
    string s = "Hello";
    s += " World!";

    cout << s << endl;
    cout << "length of string is: " << s.length() << endl;
    cout << "s[3] = " << s[3] << endl;

    s.append(" Appended string");
    cout << "After appending the string: " << s << endl;

    cout << "length of string is : " << s.length() << endl;
    cout << "capacity of string : " << s.capacity() << endl;

    cout << s.compare("Hello World! Appended strin") << endl; // it should print 1 because the string s has greater length than the compared string
    string temp = "Hello World! Appended string";
    cout << s.compare(temp) << endl; // it should print 0 because string are matching

    size_t position = s.find("llo");
    if (position != string::npos)
        cout << position << endl;
}