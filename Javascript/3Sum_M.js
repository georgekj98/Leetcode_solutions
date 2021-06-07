/*
 * @param {number[]} nums
 * @return {number[][]}
 */
let threeSum = function(nums) {
        nums = nums.sort( (a,b) => a-b);
        let out = [];
        if( nums.length < 3)
            return out;
        
        for( let i =0; i<=nums.length-3; i++){
            
            while( nums[i] === nums[i-1]) i++;
            let left =i+1;
            let right = nums.length-1;

            while( left < right){
                let sum = nums[i] +nums[left] +nums[right];
                if( sum === 0){
                    out.push([ nums[i], nums[left], nums[right] ]);
                    left++;
                     while( nums[left] === nums[left-1]) left++;
                    right--;
                     while( nums[right] === nums[right+1]) right++;
                }
                else if (sum < 0){
                    left++;
                }
                else{
                    right--;
                }

            }

        }
        return out;
}