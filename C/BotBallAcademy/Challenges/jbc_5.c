// Author: Steven Chavez
// Date: 10/1/2026
// Challenge: JBC 5
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
	// Circle 1
	drive(50, 10, 3000);
	drive(30, 50, 4000);

	// Circle 2
	drive(-50, 50, 3000);
	drive(55, 30, 9000);

	// Circle 3
	drive(50, 10, 2000);
	
	ao(); // Turn off all motors at the end
	return 0;
}
