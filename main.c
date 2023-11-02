#include <stdio.h>
#include <stdlib.h>
#define SIZE  5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int a[SIZE] = {1, 2, 3, 4, 5};
	int b[SIZE] = {1, 2, 3, 4, 5};
	int flag = 0;
	 
	for(i=0;i<SIZE;i++)
	{
		if (a[i] != b[i]){
			printf("배열은 다른 값을 가집니다.\n");
			flag = 1;
		}
	}
	if (flag == 0)
		printf("배열은 같은 값을 가집니다.\n");
	return 0;
}
