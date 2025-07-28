/*
Write a function that reverses a string. The input string is given as an array of characters s.
You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include <iostream>
using namespace std;

void reverseString(vector<char> &s)
{
    char temp;
    for (int i = s.size() - 1, j = 0; j < i; i--, j++)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}

int main()
{
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
}