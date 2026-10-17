class Solution {
    public int threeSumClosest(int[] nums, int target) {
        int close = nums[0] + nums[1] + nums[2];

        int n = nums.length;
        Arrays.sort(nums);
        for(int i = 0 ; i<n-2 ;i++){

            int j = i+1;
            int k = n-1;

            while(j<k){

                int sum =  nums[i] + nums[j] + nums[k];

                int ben10 = Math.abs(sum - target);

                if(ben10 < Math.abs(close - target)){
                    close = sum;
                }
                if(sum < target){
                    j++;
                }
                else if(sum > target){
                    k--;
                }
                else{
                    return sum;
                }
            }
        }
        return close;
    }
}