#include <stdio.h>

int main()
{
	int n,  i=0, sum =0;
	scanf("%d", &n);
	
	while(1){
		i++;
		sum += i;
		if(sum >= n) break;
	}
	printf("%d", i);
	
	return 0;
}
