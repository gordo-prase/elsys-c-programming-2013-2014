#include <stdio.h>

int main(){
	unsigned long long l1,l2,l;
	int i;
	l1=2;
	l2=1;
	l=l1+l2;
	printf("%llu\n%llu\n%llu\n",l1,l2,l);
	for(i=4;i<=100;i++){
		l1=l2;
		l2=l;
		l=l1+l2;
		printf("%llu\n",l);
	}
	return 0;
}
