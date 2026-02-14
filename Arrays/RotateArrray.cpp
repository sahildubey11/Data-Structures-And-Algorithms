class Solution {
public:
    void rev(vector<int>& nums, int start, int end){
        for ( int i=start;i<=end;i++,end--){
            int temp =nums[i];
            nums[i]= nums[end];
            nums[end] = temp;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n;
        if (k==0) return;
        rev(nums, 0, n-k-1);
        rev(nums, n-k, n-1);
        rev(nums, 0, n-1);
        
       
       
    }
};
