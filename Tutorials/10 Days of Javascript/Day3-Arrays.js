function getSecondLargest(nums) {
    var largest=nums[0],secondLargest;
    for(var i=1; i<nums.length; i++) {
        if(nums[i]>largest) {
            secondLargest=largest;
            largest=nums[i];
        }
        else if(nums[i]<largest && nums[i]>secondLargest) {
            secondLargest=nums[i];
        }
    }
    return secondLargest;
}