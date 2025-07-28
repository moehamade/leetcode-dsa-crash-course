/*
Example 4: 392. Is Subsequence.
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
A subsequence of a string is a sequence of characters that can be obtained by deleting some (or none) of the characters from the original string, while maintaining the relative order of the remaining characters. For example, "ace" is a subsequence of "abcde" while "aec" is not.
*/

#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0;
    int j = 0;

    while (i< s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i == s.length();
}

int main()
{
    string s = "ace";
    string t = "abcde";

    cout<<isSubsequence(s, t);
}