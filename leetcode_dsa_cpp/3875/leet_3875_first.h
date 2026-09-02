class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool res = false;
        if(nums1.size() < 2) return true;
        for(int i = 0; i < nums1.size()-1; i++){
            
            if(nums1[i] % 2 == 0 && nums1[i+1] % 2 ==0){
                res = true;
            }
            else if(nums1[i] % 2 == 0  && nums1[i+1] % 2 != 0 ){
                res = true;
            }
            else if(nums1[i] % 2 == 1 && nums1[i+1] % 2 == 0) res = true;
            else if(nums1[i] % 2 == 1 && nums1[i+1] % 2 == 1) res = true;

        
        }
        return res;

    }
};
