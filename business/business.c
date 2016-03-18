#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
	int n;
	scanf("%d", &n);
	int people[n];
	
	double total = 0;
	for (int i = 0; i < n; i++) {
		int in;
		scanf("%d", &in);
		people[i] = in;
		total += in;
	}

	for (int i = 0; i < n; i++) {
		int percent = (int) round(100 * people[i] / total);
		printf("%d%%\n", percent);
	}
}
