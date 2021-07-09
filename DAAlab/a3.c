#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>

int main() {

	int n;
	scanf("%d", &n);
	int A[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", (A + i));

		if (i && (A[i] < A[i - 1])) {
			printf("Index : %d", (i - 1));
			break;
		}
	}
	return 0;
}