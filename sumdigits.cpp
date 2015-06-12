#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

//http://www.reddit.com/r/dailyprogrammer/comments/1fnutb/06413_challenge_128_easy_sumthedigits_part_ii/


int main(int argc, char *argv[])
{
    string ques = argv[1];
    cout << ques << endl;
    int sum = 0;
    // cout << to_string(sum) << endl;
    char sub = '0';
    // cout << ques.size() << endl;
    while (ques.size() != 1){
        for (int i = 0; i < ques.size(); i++)
        {
            // cout << ques[i] << endl;
            // cout << (int) ques[i] - (int)sub << endl;
            // cout << ques[i] << endl;
            sum += (ques[i]-(int)sub);
            // cout << sum << endl;
        }
        ques = to_string(sum);
        cout << ques << endl;
        sum = 0;
        // cout << ques << endl;
        // cout << ques.size() << endl;
    }
}