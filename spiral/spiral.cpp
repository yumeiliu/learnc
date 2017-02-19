/* 输入矩阵阶数，输出对应阶数的螺旋矩阵 */

#include<stdio.h>

int main(){

	int n, i, j;

	printf("请输入螺旋矩阵的阶数：");
	scanf("%d", &n);

	int a[n][n];

	for(i = 0; i < n; i++){
		a[0][i] = i;
		printf("%d ", a[0][i] + 1);
	}
	
	printf("\n");

	return 0;
}
