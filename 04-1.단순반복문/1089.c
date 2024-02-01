#include<stdio.h>

int main(){
    int s, a, e, sum;
    
    scanf("%d %d %d", &s, &a, &e);
    sum = s;
    
    
    for (int i = 0; i <= e - 2; i++){
        sum += a;
    }
    printf("%d", sum);
    
    return 0;
}
