var ArrayWrapper = function(nums) {
    this.array = nums
};

ArrayWrapper.prototype.valueOf = function() {
    return this.array.reduce((pre, cur)=>pre+cur,0)
}

ArrayWrapper.prototype.toString = function() {
    return JSON.stringify(this.array)
}