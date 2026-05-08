class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int uzunluk = nums.size();
        for(int i=0;i<uzunluk;i++){
            for(int j=0;j<uzunluk;j++){
                if(nums[i] == nums[j] && i !=j ){
                 return true;
                }


            }
        }
      return false;
        
    }
};