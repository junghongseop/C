#include <stdio.h>

int main(){
    int a[24]={0};
    int q,w;
     
    scanf("%d\n",&q);
    
    for(int x=0;x<q;x++){
        scanf("%d",&w);
        a[w] += 1;
    }

    for(int c =1;c<24;c++){
        printf("%d ",a[c]);
    }

    return 0;
} 
