// Author: Steven Chavez
// Date: 9/18/2026
// Challenge: JBC 2
#include <kipr/wombat.h>  // this is the file with all the kipr functions
#include <stdio.h>        // this is the file that allows for output

void turnRight(int degrees){
	float three_hundred_sixty = 4600.0;
	int left_motor = 0;
	int right_motor = 3;
	float precent = degrees/360.0;
	int ticks = precent * three_hundred_sixty;
	
	printf("%d\n", ticks);
	
	// Reset the counters to 0 before turning
	clear_motor_position_counter(left_motor);
	clear_motor_position_counter(right_motor);
	
	// Start turning (left backward, right forward)
	motor(left_motor, -40);
	motor(right_motor, 40);
	
	while (get_motor_position_counter(right_motor) < ticks) {
		msleep(10); // Check every 10 milliseconds so we don't overwhelm the processor
	}
	
	// Stop everything
	ao();
}

int main() {
	turnRight(180);
	return 0;
}
