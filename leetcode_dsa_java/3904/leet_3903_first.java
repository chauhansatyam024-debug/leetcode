class Solution {
    public int firstStableIndex(int[] nums, int k) {
        int n = nums.length;
        int[] minn = new int[n];
        minn[n-1] = nums[n-1];
        for(int i = n-2 ; i>=0 ; i--){
            minn[i] = minn[i+1] < nums[i] ? minn[i+1] : nums[i];
        }
        int maxx = 0;
        for(int i = 0 ; i<n ; i++){
            maxx = maxx < nums[i] ? nums[i] : maxx;
            if(maxx - minn[i] <= k)return i;
        }
        return -1;

    }
}