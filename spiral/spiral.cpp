/* 输入矩阵阶数，输出对应阶数的螺旋矩阵 */

#include<stdio.h>

int main(){

	int n, i, j, k, base = 0;

	printf("请输入螺旋矩阵的阶数：");
	scanf("%d", &n);

	int a[n][n];

	if(n % 2 != 0){
		a[n / 2][n / 2] = n * n;	
	}
	
	for(i = 0; i < n; i++){
		a[0][i] = ++base;
	}
	for(j = 1; j < n - 1; j++){
		a[j][i - 1] = ++base;
		//printf("i = %d\n", i);
		//printf("j = %d\n", j);
		//printf("%d\n", a[j][i]);
	}
	for(i = n - 1; i > 0; i--){
		a[j][i] = ++base;
	}
	for(j = n - 1; j > 0; j--){
		a[j][0] = ++base;
	}

	//输出二维数组
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%4d", a[i][j]);
		}
	printf("\n");
	
	}
	
	printf("\n");

	return 0;
}
