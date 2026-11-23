class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        int n = nums1.size();
        int m = nums2.size();
        vector<int>arr;
        for(int i = 0 ;i<n;i++){
            arr.push_back(nums1[i]);
        }
        for(int i=0 ;i<m ; i++){
            arr.push_back(nums2[i]);
        }
        sort(arr.begin(),arr.end());
        int k = arr.size();
        if(k%2 == 0){
            ans = (arr[k/2 - 1] + arr[k/2])/2.0;
        }
        else{
            ans = arr[k/2];
        }
        return ans;
    }
};
