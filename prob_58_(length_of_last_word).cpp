#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string str, word;
    getline(cin, str);
    stringstream stream(str);
    vector<string> result;

    while (stream >> word)
    {
        result.push_back(word);
    }

    cout << result[result.size() - 1].size() << endl;

    return 0;
}