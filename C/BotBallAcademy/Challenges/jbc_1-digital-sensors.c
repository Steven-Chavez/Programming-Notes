// Author: Steven Chavez
// Challenge: JBC 1 (Touch Sensor)
#include <kipr/wombat.h>
#include <stdio.h>

const int RIGHT_MOTOR = 3;
const int LEFT_MOTOR = 0;

// Drives both motors forward at specified power levels
void drive(int left_power, int right_power) {
	motor(LEFT_MOTOR, left_power);
	motor(RIGHT_MOTOR, right_power);
}

int main() {
	drive(50, 50);
	while (digital(0) == 0){
		printf("Touch Sensor: %d\n", digital(0));
    msleep(10);
	}
	ao();

	drive(-50,-50);
	msleep(5000);
	
	return 0;
}
