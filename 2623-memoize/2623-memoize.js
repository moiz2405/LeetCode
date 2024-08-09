/**
 * @param {Function} fn
 * @return {Function}
 */
function memoize(fn) {
    var keysval = {};
    var op;
    return function(...args) {
       const keys = args;
            if(keys in keysval){
                return keysval[keys];
            } else {
                keysval[keys]= fn(...args);
                return keysval[keys];
        }
        
    }
}



/** 
 * let callCount = 0;
 * const memoizedFn = memoize(function (a, b) {
 *	 callCount += 1;
 *   return a + b;
 * })
 * memoizedFn(2, 3) // 5
 * memoizedFn(2, 3) // 5
 * console.log(callCount) // 1 
 */