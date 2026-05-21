# include<iostream>
# include<vector>
using namespace std;
class Solution{
    public:
    vector<int> prefixCommonArray(vector<int>& A, vector<int>& B){
        vector<int> ans;
        for(int i=0;i<A.size();i++){
            int count=0;
            for(int j=0;j<=i;j++){
                for(int k=0;k<=i;k++){
                    if(A[j]==B[k]){
                        count++;

                    }
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
//Time complexity:- O(n^3)
// space complexity:- O(n) for ans vector