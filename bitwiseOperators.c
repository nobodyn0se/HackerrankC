#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a[n];
  for(int i=0; i<n; i++) 
    a[i] = i+1;
  int i,j,m1=0,pa,po,px,m2=0,m3=0;
  for(i=0; i<n; i++) {
      for(j=i+1; j<n; j++) {
          pa = a[i] & a[j];
          po = a[i] | a[j];
          px = a[i] ^ a[j];
          if(m1 < pa && pa < k)
            m1 = pa;
          if(m2 < po && po < k)
            m2 = po;
          if(m3 < px && px < k)
            m3 = px;

      }
  }
  printf("%d\n%d\n%d",m1,m2,m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
