// Author: Steven Chavez
// Date: 9/18/2026
// Challenge: JBC 1
#include <kipr/wombat.h>  // this is the file with all the kipr functions
#include <stdio.h>        // this is the file that allows for output

int main(){
	// Initialize motor variables
	int right_motor = 3;
	int left_motor = 0;
	
	// Move forward to touch the can. Don't knock it down or move it out of the circle
	motor(right_motor, 70);
	motor(left_motor, 70);
	msleep(7100);
	
	ao();
	
	// Move back to start
	motor(right_motor, -70);
	motor(left_motor, -70);
	msleep(7100);
	
	ao();
	
	return 0;
}
