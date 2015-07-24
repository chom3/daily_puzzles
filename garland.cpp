#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int garland(string word)
{
    // cout<<word.size();
    for (int i = word.size()-1; i > 0; i--)
    {
        cout << word.substr(0, i) << endl;
        cout << word.substr(word.size()-i, i) << endl;
        if (word.substr(0, i) == word.substr(word.size()-i, i))
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    cout << garland("programmer") << endl;
    cout << garland("ceramic") << endl;
    cout << garland("onion") << endl;
    cout << garland("alfalfa") << endl;
}