
var once = function(fn) {
    let count=0;
    return function(...args){
        count++;
    
    if(count==1){
        return fn(...args)
    }}

};

