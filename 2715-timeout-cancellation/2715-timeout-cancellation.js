
var cancellable = function(fn, args, t) {
    let s = setTimeout(fn,t, ...args)
    let cancelFn =()=> clearTimeout(s);
    return cancelFn;
};

