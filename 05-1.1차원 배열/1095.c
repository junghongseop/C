#include <stdio.h>
 
 
int main()
{
    
    int n, min, arr[10000]={0};
    scanf("%d",&n);
 
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    
    min = arr[1];
    
    for(int j=1; j<=n; j++){
        if(min>arr[j])
        min = arr[j];
    }
    printf("%d", min);
    
    return 0;
}
