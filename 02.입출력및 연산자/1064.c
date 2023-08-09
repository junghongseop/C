#include <stdio.h>

int main() {
    
	int a,s,d;
	scanf("%d %d %d",&a,&s,&d);

	printf("%d",(a<s ? a:s)<d ? (a<s ? a:s):d );
	return 0;
}

