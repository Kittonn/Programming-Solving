function sumSquareDifference(n: number) {
  let sum = 0;
  let sum_sq = 0;
  let i = 1;
  while (i < n + 1) {
    sum += i;
    sum_sq += i * i;
    i++;
  }
  return sum * sum - sum_sq;
}
