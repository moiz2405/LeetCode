let count=0;
var createCounter = function(n) {
    x=n;
    return function() {
        return x++;
        
    };
};

