#include <iostream>
#include <sstream>
#include <fstream>
#define endl "\n";

using namespace std;

int main()
{
    // int i, j;
    // cin >> i >> j;

    // stringstream ss;
    // ss << "You have entered " << i << " and " << j << endl;
    // ss << i << " + " << j << " = " << i + j << endl;

    // string temp = ss.str();
    // cout << temp << endl;

    ofstream ofile;
    ofile.open("output.txt", std::ios::out);
    if (!ofile.is_open())
    {
        cerr << "Failed to open file" << endl;
    }
    ofile << "Random data";
    ofile.close();

    ifstream ifile;
    ifile.open("input.txt", std::ios::in);
    string read_input;
    getline(ifile, read_input);
    ifile.close();
    int i, j;
    stringstream ss(read_input);
    ss >> i >> j;
    cout << i << j << endl;
}