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

	// Circle 3
	drive(-25, -50, 10000);

	// Circle 5
	drive(20, 50, 9800);
	drive(50, 50, 4000);

	// Circle 7 
	drive(10, 50, 5000);


	ao(); // Turn off all motors at the end
	return 0;
}
