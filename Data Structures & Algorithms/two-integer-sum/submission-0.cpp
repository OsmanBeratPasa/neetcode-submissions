class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            vector<int> sayilar;
            for(int j=0;j<nums.size();j++){
                int toplam = nums[i] + nums[j];
                if(i!=j && toplam == target){
                    sayilar.push_back(i);
                    sayilar.push_back(j);
                    return sayilar;
                    
                }
            }
        }
        
    }
};
