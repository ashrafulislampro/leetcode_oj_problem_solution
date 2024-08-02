#include <iostream>
#include <string>
using namespace std;

int main()
{
    string main_str, sub_str;
    getline(cin, main_str);
    getline(cin, sub_str);

    size_t pos = main_str.find(sub_str);
    if (pos != string::npos)
    {
        cout << pos << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}