int max_of_four(int, int, int, int);
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int m1,m2, max;
    m1 = ((a>b?a:b));
    m2 = ((c>d?c:d));
    max = ((m1>m2?m1:m2));
    return(max);

}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

