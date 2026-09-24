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
	
	// Can 1
	drive(50, 20, 3500);
	drive(20, 50, 5000);

	// Can 2
	drive(-20, 50, 2000);
	drive(40, 50, 2000);

	// Can 3
	drive(50, 40, 1500);
	drive(50, -20, 5000);

	// Can 4
	drive(50, 50, 3000);
	
	// Can 5
	drive(0, 50, 6000);
	
	ao(); // Turn off all motors at the end
	return 0;
}
