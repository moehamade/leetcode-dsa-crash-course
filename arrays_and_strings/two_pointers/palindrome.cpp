#include <iostream>
using namespace std;

bool palindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    bool result = palindrome("racecar");
    std::cout << result;
}