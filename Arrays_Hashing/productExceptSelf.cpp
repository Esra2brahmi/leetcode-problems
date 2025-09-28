//from typing import List
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    //def productExceptSelf(self, nums: List[int]) -> List[int]:
     {
        int n = nums.size();//len(nums)
        vector<int> prefix(n), suffix(n), res(n);
        // prefix = [0] * n , suffix = [0] * n , res = [0] * n

        prefix[0] = nums[0]; // prefix[0] = nums[0]
        for(int i = 1; i < n; i++) { //for i in range(1, n):
            prefix[i] = prefix[i-1] * nums[i];//prefix[i] = prefix[i-1] * nums[i]
        }

        suffix[n-1] = nums[n-1];//suffix[n-1] = nums[n-1]
        for(int i = n-2; i >= 0; i--) {//for i in range(n-2, -1, -1):
            suffix[i] = suffix[i+1] * nums[i];//suffix[i] = suffix[i+1] * nums[i]
        }

        for(int i = 0; i < n; i++) {// for i in range(n):
            long long left = (i == 0) ? 1 : prefix[i-1];//left = 1 if i == 0 else prefix[i-1]
            long long right = (i == n-1) ? 1 : suffix[i+1];//right = 1 if i == n-1 else suffix[i+1]

            res[i] = left * right;//res[i] = left * right
        }

        return res;
    }
};
