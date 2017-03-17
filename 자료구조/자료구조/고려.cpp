#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

int main() {
	int a[5] = { 1,2,3,4,5 };
	int *pt;
	int i;

	pt = a;
	*pt = 1;
	pt += 2;
	*pt = 1;

	for (i = 0; i < 5; i++) {
		printf("%d\n", a[i]);
	}
}