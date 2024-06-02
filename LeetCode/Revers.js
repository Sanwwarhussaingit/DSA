let n = 123;
let rev = 0;
let digit;
for (let i = 1; i <= 3; i++) {
  digit = n % 10;
  rev = rev * 10 + digit;
  n = n / 10;   
  n = Math.floor(n);
}
console.log(rev);
