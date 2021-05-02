#include "score.h"
#include <stdio.h>
// define the function input_scores()

void input_scores(int s[]) {
	// get user's input using a sentinel- controled loop
	int i, input = 0;
	int k = 0; 
	printf("Enter scores, -1 to end:.\n");
	for (i = 0; i < MAX && input != -1; i++) {
		scanf("%d", &input);
		if (input >= -1 && input <= 100) {
			s[k] = input;
			k++;
		}else {
			printf("Invailid score. Please enter again!\n");
		}
	}
	printf("%d scores are given\n", k-1 );
}
