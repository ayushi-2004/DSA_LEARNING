class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        
        
        arr.insert(arr.end(), nums1.begin(), nums1.end());
        arr.insert(arr.end(), nums2.begin(), nums2.end());
        
        
        sort(arr.begin(), arr.end());
        
        int n = arr.size();
        
        
        if (n % 2 == 1) {
            return arr[n / 2];
        } 
        else {
            return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
        }


    }
};