#include <stdio.h>

int main() {

  char operator;
  double one, two;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);
  printf("Enter two operands: ");
  scanf("%lf %lf", &one, &two);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", one, two, one + two);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", one, two, one - two);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", one, two, one * two);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", one, two, one / two);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}