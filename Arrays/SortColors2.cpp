class Solution {
public:
    void sortColors(vector<int>& nums) {
      int low=0;
      int mid = 0;
      int high = n-1;
    
       while(mid<=high){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid]=v[high];
            v[high]=temp;
            high--;
        }
    
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else{
            mid++;
        }
       }
    
};
