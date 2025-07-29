/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
*/

#include <iostream>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{

    int left = 0;
    int right = nums.size() - 1;

    vector<int> result(nums.size());

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int square;
        if (abs(nums[left]) < abs(nums[right]))
        {
            square = nums[right];
            right--;
        }
        else
        {
            square = nums[left];
            left++;
        }
        result[i] = square * square;
    }
    return result;
}

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};
    // 16, 1,    0, 9, 100
    auto x = sortedSquares(nums);
    for (auto i : x)
        cout << i << " ";
}