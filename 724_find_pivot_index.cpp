class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = 0, sum = 0, pivsum = 0, endsum = 0, fsum = 0;
        int start = 0 , end = nums.size() - 1; 
        for ( int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
        }
        for(int i =1; i<nums.size(); i++){
            endsum = endsum + nums[i];
        }
        if (endsum == 0 )
            return 0;
                for(int i =0; i<nums.size(); i++){
            endsum = endsum + nums[i];
        }
        
        if (endsum == 0 )
            return 0;
        for ( int i = 1; i<nums.size(); i++){
            pivsum = pivsum + nums[i-1];
            if (pivsum == sum - pivsum - nums[i]){
                return i;
            }
        }
        //important : keep this case at last as if the sum of eariler might become zero and even though it will return the last index! 
        for(int i =0; i<nums.size() - 1; i++){
            fsum = fsum + nums[i];
        }
        if(fsum == 0)
            return (end);

        return -1;
    }
};

//Time Complexity : O(n)
// Space Complexity: O(n)