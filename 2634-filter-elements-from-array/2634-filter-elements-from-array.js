var filter = function(arr, fn) {
    const filtarr = [];
    for(let i = 0;i<arr.length;i++){
        if(fn(arr[i],i)){
        filtarr.push(arr[i]);
    }}
    return filtarr;
};
