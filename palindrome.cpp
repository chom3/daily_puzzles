#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

//function to reverse strings
void reverseChar(char* str) {
    reverse(str, str + strlen(str));
}

int main()
{
    string line1 = "123";
    string line2 = "286";
    string line3 = "196196871";
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    while (line1 != string(line1.rbegin(), line1.rend()))
    {
        int inp1 = stoi(line1,nullptr,10);
        int inp1rev = stoi(string(line1.rbegin(), line1.rend()));
        line1 = to_string(inp1+inp1rev);
        counter1++;
    }
    while (line2 != string(line2.rbegin(), line2.rend()))
    {
        long long inp2 = stoll(line2,nullptr,10);
        long long inp2rev = stoll(string(line2.rbegin(), line2.rend()));
        line2 = to_string(inp2+inp2rev);
        counter2++;
    }
    while (line3 != string(line3.rbegin(), line3.rend()))
    {
        unsigned long long inp3 = stoull(line3,nullptr,10);
        unsigned long long inp3rev = stoull(string(line3.rbegin(), line3.rend()));
        line3 = to_string(inp3+inp3rev);
        counter3++;
    }
    cout << line1 << " with " << counter1 << " steps."<< endl;
    cout << line2 << " with " << counter2 << " steps."<< endl;
    cout << line3 << " with " << counter3 << " steps."<< endl;
}
