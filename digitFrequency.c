#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count[10] = {0};
    char a[1000];
    scanf("%[^\n]*c",a);
    int n = strlen(a);
    for(int i = 0; i < n; i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            count[a[i]-'0']++;
        }
    }
    for(int i = 0; i < 10; i++) 
        printf("%d ",count[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
