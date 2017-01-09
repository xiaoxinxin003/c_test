#include<stdio.h>
#include"max.h"
#include"min.h"
int main()
{
	int a = 33, b = 20;
	int maxNum = max(a, b);
	int minNum = min(a,b);
	printf("the max num is : %d\nthe min num is : %d\n", maxNum, minNum);
	return 0;
}
