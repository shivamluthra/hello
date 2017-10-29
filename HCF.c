int main() {
  int no1, no2, x, y, t, hcf;
 
  printf("Enter two integers\n");
  scanf("%d%d", &no1, &no2);
 
  x = no1;
  y = no2;
 
  while (no2 != 0) {
    t = no2;
    no2 = no1 % no2;
    no1 = t;
  }
 
  hcf = no1;
  printf("Greatest common divisor of %d and %d = %d\n", x, y, hcf);
  return 0;
}
