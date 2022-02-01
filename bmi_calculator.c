#include <stdio.h>
int main()
{
  float weight, height, bmi;
  
  puts("BMI values (for reference)");
  puts("Underweight: less than 18.5");
  puts("Normal: between 18.5 and 24.9");
  puts("Overweight: between 25 and 29.9");
  puts("Obese: 30 or greater");

  printf("\nEnter your weight (in kg): ");
  scanf("%f", &weight);
  printf("Enter your height (in m): ");
  scanf("%f", &height);

  bmi = weight / (height * height);
  printf("Your BMI is %.1f ", bmi);

  if(bmi < 18.5) {
    puts("(Underweight)");
  }
  if(bmi >= 18.5 && bmi <= 24.9) {
    puts("(Normal)");
  }
  if(bmi >= 25 && bmi <= 29.9) {
    puts("(Overweight)");
  }
  if(bmi >= 30) {
    puts("(Obese)");
  }

  return 0;
}