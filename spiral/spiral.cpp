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
	
	for(k = 0; k < n / 2; k++){

		for(i = k; i < n - k; i++){
			a[k][i] = ++base;
		}
		for(j = k + 1; j < n - k - 1; j++){
			a[j][n - k - 1] = ++base;
			//printf("n - k - 1 = %d\n", n - k - 1);
			//printf("j = %d\n", j);
			//printf("%d\n", a[j][n - k - 1]);
		}
		for(i = n - k - 1; i > k; i--){
			a[n - k - 1][i] = ++base;
			//printf("n - k - 1 = %d\n", n - k - 1);
			//printf("i = %d\n", i);
			//printf("%d\n", a[n - k - 1][i]);
		}
		for(j = n - k - 1; j > k; j--){
			a[j][k] = ++base;
		}
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
