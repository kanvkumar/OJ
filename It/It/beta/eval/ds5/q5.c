#include <stdio.h>
/* solution for problem 5 in PA5
 takes O(n*k) where n is num coins, and k is change value
 An NP-hard problem (exponential in n) when k is not a constant */
main()
{
  int coins[] = { 1, 5, 10, 20, 25, 50, 100}, numCs = 7;
  int minUsed[10001], i, j, t, k;

  minUsed[0] = 0;
  for(i=1; i<10001; i++) {
    minUsed[i] = i;
    for(j=1; j<numCs; j++) {
      if(i>=coins[j] && 1+minUsed[i-coins[j]] < minUsed[i])
        minUsed[i] = 1+minUsed[i-coins[j]];
    }
  }

  scanf(" %d", &t);
  for(i=0; i<t; i++) {
    scanf(" %d", &k);
    printf("%d\n", minUsed[k]);
  }
}
