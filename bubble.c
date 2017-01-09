#include<stdio.h>
#define SIZE 8

void bubble_sort(int a[], int n);


void bubble_sort(int a[], int n)
{
	int i, j, temp;
	for(j = 0;j < n; j++)
	{
        for(i = 0; i < n -1 -j; i++)
        {
            if(a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }		
	}
}

int main()
{
    int num[SIZE] = {95,23,54,15,78,51,21,10};
    int i;
    bubble_sort(num, SIZE);
    for(i = 0; i < SIZE; i++)
    {
        printf("%d ,", num[i]);
    }
    printf("\n");
    return 0;
}
//代码来源：百度
