#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int main(int argc, char *argv[])
{
    string word1 = argv[1];
    string word2 = argv[2];
    cout << word1 << endl;
    cout << word2 << endl;
    for(int i = 0; i < word1.size(); i++)
    {
        for (int j = 0; j < word2.size(); j++)
        {
            if(word1[i] == word2[j])
            {
                // cout << "Cancel " << word2[j] << endl;
                word1.erase(i,1);
                word2.erase(j,1);
                // cout << word1[i] << endl;
                // cout << word2[j] << endl;
                i = -1;
                j = -1;
                // cout << i << endl;
                // cout << j << endl;
            }
            // cout << word1 << endl;
            // cout << word2 << endl;
        }
    }
    cout << word1 << " " << word2 << endl;
    if (word1.size() > word2.size())
    {
        cout << "Winner: Left" << endl;
    }
    else if( word1.size() < word2.size())
    {
        cout << "Winner: Right" << endl;
    }
    else
    {
        cout << "Tie!" << endl;
    }
}