class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    // def longestConsucutive(self, nums:List[int]) -> int:
        if (nums.empty()) return 0;  // if not nums: return 0
        set<int> s(nums.begin(), nums.end()); // s= set(nums)
        int count = 1; // count=1
        int res = 1; //res=1
        for (auto it = s.begin(); it != prev(s.end()); ++it) { // for it in s:
            if (*next(it) - *it == 1) { // if next(it) -it == 1:
                count++; // count+=1
                res = max(res, count); // res =max(res,count)
            } else { //else:
                count = 1; //count=1
            }
        }
        return res; // return res
    }
};
