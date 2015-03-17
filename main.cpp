#include "stdio.h"
#include "ralg/ralg.h"

int main() {
	int array[] = {6, 6, 0, 1, 4, 3, 3, 4, 0};
	int mu, lam;
	ralg_cycle_detection_floyd_a(array, 5, mu, lam);
	printf("%d %d\n", mu, lam);
}