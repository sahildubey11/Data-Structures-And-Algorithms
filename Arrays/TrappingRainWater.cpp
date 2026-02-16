class Solution {
public:
    int trap(vector<int>& height) {
        int a=height.size();
        //prev
        vector<int> prev(a);
        prev[0]=-1;
        int max=height[0];
        for(int i=1;i<=a-1;i++){
            prev[i]=max;
            if(max<height[i]) max=height[i];

        }
       //next greatest-> prev as next
        prev[a-1]=-1;
        max=height[a-1];
        for(int i=a-1;i>=0;i--){
            if(max<prev[i]) prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        
        //calculating water
        int water=0;
        for(int i=1;i<=a-2;i++){
            if(height[i]<prev[i]){
                water+=(prev[i]-height[i]);
            }
        }
        return water;
    }
};
