function fiboEvenSum(n: number) {
  let sum = 0;
  let x = 0;
  let y = 1;

  while (x < n) {
    let z = x + y;
    x = y;
    y = z;
    if (z % 2 == 0) {
      sum += z;
    }
  }
  return sum;
}
