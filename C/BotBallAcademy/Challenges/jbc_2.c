// Author: Steven Chavez
// Date: 9/18/2026
// Challenge: JBC 2
#include <kipr/wombat.h>  // this is the file with all the kipr functions
#include <stdio.h>        // this is the file that allows for output

void goRight(int sleep){
	int right_motor = 3;
	int left_motor = 0;
	
	motor(right_motor, 30);
	motor(left_motor, -30);
	msleep(sleep);
	ao();
}

void goLeft(int sleep){
	int right_motor = 3;
	int left_motor = 0;
	
	motor(right_motor,-30);
	motor(left_motor, 30);
	msleep(sleep);
	ao();
}

void goStraight(int sleep){
	int right_motor = 3;
	int left_motor = 0;

	motor(right_motor, 70);
	motor(left_motor, 70);
	msleep(sleep);
	ao();
}

int main(){
	goStraight(3000);
	goRight(2550);
	goStraight(2000);
	goLeft(2600);
	goStraight(4000);
	goLeft(2600);
	goStraight(3500);
	goLeft(2600);
	goStraight(7000);
	return 0;
}
