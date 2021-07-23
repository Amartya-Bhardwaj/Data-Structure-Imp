#include <stdio.h>
#include <time.h>
#include <stdlib.h>



int main() {


	int n = 100000;
	int arr[n];

	for(int i=0;i<n;i++) {
		//arr[i] = 1 + rand() % 100;
		arr[i] = i + 1;
	}

	int best = arr[0];
	int worst = arr[n - 1];
	int avg = arr[n / 2];
	time_t strt, end;

	strt = clock();
	for(int i=0;i<n;i++) {
		if (best == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for best case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
	}

	strt = clock();
	for(int i=0;i<n;i++) {
		if (avg == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for avg case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
	}

	strt = clock();
	for(int i=0;i<n;i++) {
		if (worst == arr[i]) {
			end = clock();
			double t = end - strt;
			printf("Time taken for worst case: %f\n", (t / CLOCKS_PER_SEC));
			break;
		}
    }
	return 0;
}