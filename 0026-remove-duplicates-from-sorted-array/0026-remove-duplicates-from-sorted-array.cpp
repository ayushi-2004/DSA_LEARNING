class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = 1;
        while (i < n && j < n){
            if (nums[i] == nums[j]){
                j++;
            }
            else if (j < n) {
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        return i+1;
    }
};