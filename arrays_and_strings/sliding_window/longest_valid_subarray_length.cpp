/*
Example 1: Given an array of positive integers nums and an integer k, 
find the length of the longest subarray whose sum is less than or equal to k. 
*/

#include <iostream>
using namespace std;

int longestValidSubArrayLength(vector<int> &nums, int k)
{
    int left = 0, curr = 0, answer = 0;

    for (int right = 0; right < nums.size(); right++)
    {
        curr += nums[right];
        while (curr > k)
        {
            curr -= nums[left];
            left++;
        }
        answer = max(answer, right - left + 1);
    }

    return answer;
}

int main()
{
    int k = 8;
    vector<int> nums = {3, 1, 2, 7, 4, 2, 1, 1, 5};
    cout<<longestValidSubArrayLength(nums, k);
}