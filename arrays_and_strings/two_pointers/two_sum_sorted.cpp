/*
Example 2: Given a sorted array of unique integers and a target integer,
return true if there exists a pair of numbers that sum to target, false otherwise.
This problem is similar to Two Sum. (In Two Sum, the input is not sorted).

For example, given nums = [1, 2, 4, 6, 8, 9, 14, 15] and target = 13,
return true because 4 + 9 = 13.
*/

#include <iostream>
#include <vector>

bool checkForTarget(std::vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left < right)
    {
        if (nums[left] + nums[right] > target) right--;

        else if (nums[left] + nums[right] < target) left++;

        else return true;
    }

    return false;

}

int main()
{

    std::vector<int> nums = {1, 2, 4, 6, 8, 9, 14, 15};
    int target = 13;

    std::cout << checkForTarget(nums, target);
}