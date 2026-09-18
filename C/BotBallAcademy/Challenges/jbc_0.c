// Author: Steven Chavez
// Date: 9/18/2026
// Challenge: JBC 0
#include <kipr/wombat.h>  // this is the file with all the kipr functions
#include <stdio.h>        // this is the file that allows for output
 
int main(){
		// Initialize motor variables
     int right_motor = 3;
		 int left_motor = 0;

		// Move forward to the end of the matt
		 motor(right_motor, 70);
		 motor(left_motor, 70);
		 msleep(10000);

		// All off
		 ao();

		 return 0;
}
