class Solution {
public:
    
    void nextPermutation(vector<int>& nums) {
        int idx=-1;
        int n=nums.size()-1;
        //finding pivot
        for(int i=n-1;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }      
        }   
        //if array is already greatest
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
      
        //sort/ reversing after pivot
        reverse(nums.begin()+idx+1,nums.end());
           //finding just greater number after pivot
        int gr=0;
        for (int i=idx+1;i<=n;i++){
            if(nums[i]>nums[idx]){
                gr=i;
                break;
            }
        }
    
        //swapping pivot with just after greater than that
       
        int temp=nums[idx];
        nums[idx]=nums[gr];
        nums[gr]=temp;        
    }
};
