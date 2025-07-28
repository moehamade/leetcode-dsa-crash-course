#include <iostream>
#include <vector>
using namespace std;

vector<int> combine(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0;
    int j = 0;

    vector<int> ans = {};

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }

        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < arr1.size())
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size())
    {
        ans.push_back(arr2[j]);
        j++;
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 4, 7, 20};
    vector<int> arr2 = {3, 5, 6};

    vector<int> result = combine(arr1, arr2);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
}