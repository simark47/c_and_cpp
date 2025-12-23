
#include <stdio.h>

int main() {

  int a, b;

  // Get the two numbers from the user

  scanf("%d", &a);

  scanf("%d", &b);

  // Find the larger number (optional, but improves efficiency)

  int max;

  if (a > b) {

    max = a;

  } else {

    max = b;

  }

  int ans = -1;//It's initialized to -1 as a flag to indicate that the LCM hasn't been found yet.

  // Start checking from the larger number as the LCM can't be smaller

  // Loop until both divisibility conditions are met (avoiding infinite loop)
  int count=0;
int counts=0;

  while (max <= a * b) {


    if (max % a == 0 && max % b == 0 && ans == -1) {

      ans = max;
      counts++; // this executes only once

    }
     count++; //unlike this

    max++;


  }
// show iteration and success count
  printf("%d %d\n ",count, counts);


  // Print result

  printf("%d : LCM", ans);


  return 0;

}