//Floyd's cycle-finding algorithm, also called the "tortoise and the hare algorithm"
//Robert W. Floyd

#if RALG_VERBOSE
#	include "stdio.h"
#endif

void ralg_cycle_detection_floyd_a(int f[], int x0, int&mu, int&lam) {

	#if RALG_VERBOSE
		printf("tortoise: %d\n", f[x0]);
		printf("hare    : %d\n", f[f[x0]]);
	#endif

	int tortoise = f[x0];
	int hare = f[f[x0]];

	#if RALG_VERBOSE
		printf("*** Detect loop\n");
	#endif

	while (tortoise != hare) {
		#if RALG_VERBOSE
			printf("tortoise: %d -> %d\n", tortoise, f[tortoise]);
			printf("hare    : %d -> %d -> %d\n", hare, f[hare], f[f[hare]]);
		#endif
		tortoise = f[tortoise];
		hare = f[f[hare]];
	}

	#if RALG_VERBOSE
		printf("*** Find loop input\n");
	#endif

	mu = 0;
	tortoise = x0;
	while (tortoise != hare) {
		#if RALG_VERBOSE
			printf("tortoise: %d -> %d\n", tortoise, f[tortoise]);
			printf("hare    : %d -> %d\n", hare, f[hare]);
		#endif
		tortoise = f[tortoise];
		hare = f[hare];
		mu ++;
	}
	#if RALG_VERBOSE
		printf("mu      : %d\n", mu);
		printf("*** Find cycle length\n");
	#endif

	lam = 1;
	hare = f[tortoise];
	while (tortoise != hare) {
		hare = f[hare];
		lam ++;
	}
	#if RALG_VERBOSE
		printf("lam     : %d\n", lam);
	#endif
}



