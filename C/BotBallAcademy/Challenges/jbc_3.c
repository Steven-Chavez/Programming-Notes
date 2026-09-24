// Author: Steven Chavez
// Date: 9/24/2026
// Challenge: JBC 3 (Optimized Arc Motion)
#include <kipr/wombat.h>
#include <stdio.h>

const int RIGHT_MOTOR = 3;
const int LEFT_MOTOR = 0;

// Drives both motors forward at specified power levels
void drive(int left_power, int right_power, int sleep_ms) {
	motor(LEFT_MOTOR, left_power);
	motor(RIGHT_MOTOR, right_power);
	msleep(sleep_ms);
}

int main() {
	
	// Go to green parking garage
	drive(70, 70, 5000);
	drive(-70, -70, 5000);
	
	// Go to blue parking garage
	drive(70, 70, 7000);
	drive(30, 70, 2000);
	drive(50, 50, 2000);
	
	// Return to start
	drive(-50, -50, 2000);
	drive(-30, -70, 2000);
	drive(-70, -70, 7000);	
	
	ao(); // Turn off all motors at the end
	return 0;
}
