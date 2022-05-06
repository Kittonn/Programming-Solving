function check(num: number) {
  return Number(num.toString().split("").reverse().join(""));
}

function largestPalindromeProduct(n: number) {
  let start = Math.pow(10, n - 1);
  let end = Math.pow(10, n) - 1;
  let m = 0;
  for (let i = end; i >= start; i--) {
    for (let j = end; j >= start; j--) {
      if (i * j === check(i * j)) {
        if (i * j > m) {
          m = i * j;
        }
      }
    }
  }
  return m;
}
