function throttle(func, limit) {
  let lastCall = 0;

  return function (...args) {
    const now = Date.now();

    if (now - lastCall >= limit) {
      lastCall = now;
      func.apply(this, args);
    }
  };
}

window.addEventListener(
  "scroll",
  throttle(() => {
    console.log("Throttled scroll!");
  }, 2000),
);
