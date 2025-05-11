class Solution {
    public int[] numberGame(int[] nums) {
       Arrays.sort(nums);
       int f=0;
       int b=1;
       while(b<=nums.length-1){
        int temp=nums[b];
        nums[b]=nums[f];
        nums[f]=temp;
        f+=2;
        b+=2;
       }
       return nums;

    }
}