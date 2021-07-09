#include<stdio.h>

int main() {

	int n, x = 1;
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
		x *= arr[i];
	}

	for (int i = 0; i < n - 1; i++) {
		printf("%d ", x / arr[i]);
	}
	printf("%d\n", x / arr[n - 1]);



	return 0;
}