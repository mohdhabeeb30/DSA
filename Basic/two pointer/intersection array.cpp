class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        vector<int>ans;
        while (i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                i++;// if the element in nums1 is smaller than the element in nums2, we move the pointer of nums1 to the right
            }
            else if (nums1[i]>nums2[j]){
                j++;// if the element in nums1 is greater than the element in nums2, we move the pointer of nums2 to the right
            }
            else {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }


        }
        return ans;
    }
};