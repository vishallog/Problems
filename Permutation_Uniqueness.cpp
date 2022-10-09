class Solution {
public:
    void permute(vector<int>& nums, int idx, std::set<std::vector<int>>& uniqueSet) {
        if (idx == nums.size()) return;
        vector<int>temp = nums;
        int val = temp[idx];
        temp.erase(temp.begin() + idx);
        for (int idx1 = 0; idx1 < nums.size(); idx1++) {
            temp.insert(temp.begin() + idx1, val);
            if (uniqueSet.find(temp) == uniqueSet.end()) {
                uniqueSet.insert(temp);
                permute(temp, idx1, uniqueSet);  
            }
            std::reverse(temp.begin(), temp.end());
            if (uniqueSet.find(temp) == uniqueSet.end()) {
                uniqueSet.insert(temp);
                permute(temp, idx1, uniqueSet);  
            } 
            std::reverse(temp.begin(), temp.end());
            temp.erase(temp.begin() + idx1);
        }
        permute(nums, idx+1, uniqueSet);   
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> temp = nums;
        std::set<std::vector<int>> uniqueSet;
        permute(nums, 0, uniqueSet);
        vector<vector<int>> ans;
        for (auto itr : uniqueSet) {
            ans.push_back(itr);
        }
        return ans;
    }
};
