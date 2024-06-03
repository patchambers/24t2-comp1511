// part5_roller_coaster
//
// Pat Chambers (z5264081), 3/6/24

#include <stdio.h>

#define MIN_HEIGHT 100
#define RIDE_ALONE_THRESHOLD 160

int main(void) {
	
	// 1. Scans in the users height.
	printf("Please enter your height in cm: ");
	int height;
	scanf("%d", &height);
	
	// 2. If the height is 0 or less, 
	//    it should print an error message
	if (height <= 0) {
		printf("Error: Invalid height!\n");
	} else if (height < MIN_HEIGHT) {
		// 3. If the height is below the minimum height (100cm), 
		//    it should print a message telling the user they are not tall enough to ride
		printf("Sorry, you aren't tall enough to get on this rollercoaster :(\n");
	} else if (height < RIDE_ALONE_THRESHOLD) {
		// 4. If the height is above or at the minimum but below the ride alone threshold (160cm),
		//    it should print a message telling the user they can ride with an adult
		printf("You can ride, but only with a responsible adult\n");
	} else {
		// 5. If the height is at or is above the ride alone threshold, 
		//    it should print a message telling the user they can ride.
		printf("Yay! You're tall enough to ride alone\n");
	}

	
	return 0;
}