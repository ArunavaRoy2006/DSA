class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int k =0;
        int count=0;
        //vector<int> arr[n];
        //for(int i=0;i<n;i++){
         //       arr[i]=nums[i];            
        //}
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
            else{
                count++;
            }
        }
        while(count--){
            nums[k]=0;
            k++;
        }
        
    }
};