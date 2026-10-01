// Author: Steven Chavez
// Date: 10/1/2026
#include <kipr/wombat.h>
#include <stdio.h>

const int RIGHT_MOTOR = 3;
const int LEFT_MOTOR = 0;

void drive_ticks(int left_speed, int left_ticks, int right_speed, int right_ticks) {
    cmpc(LEFT_MOTOR);
    cmpc(RIGHT_MOTOR);

    // Tell both motors where to go
    mrp(LEFT_MOTOR, left_speed, left_ticks);
    mrp(RIGHT_MOTOR, right_speed, right_ticks);

    // Wait until BOTH motors finish their move
    bmd(LEFT_MOTOR);
    bmd(RIGHT_MOTOR);
}

int main() {

	drive_ticks(-800, -3000, 800, 3000);

	ao(); // Turn off all motors at the end
	return 0;
}
