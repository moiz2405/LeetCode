var debounce = function(fn, t) {
    let timeout = null
    return (...args) => {
        clearTimeout(timeout)
        timeout = setTimeout(fn, t, ...args)
    }
};