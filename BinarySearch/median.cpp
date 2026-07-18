#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    double medianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
         // write your code here
        vector<int> ans;
        int i = 0, j = 0;

        while (i < arr1.size() && j < arr2.size()) {
            if (arr1[i] <= arr2[j])
                ans.push_back(arr1[i++]);
            else
                ans.push_back(arr2[j++]);
        }

        while (i < arr1.size())
            ans.push_back(arr1[i++]);

        while (j < arr2.size())
            ans.push_back(arr2[j++]);

        int n = ans.size();

        if (n % 2 == 1)
            return ans[n / 2];

        return (ans[n / 2] + ans[n / 2 - 1]) / 2.0;
    }
};
// Time complexity O(n+m) 
// space complexity O(n+m)