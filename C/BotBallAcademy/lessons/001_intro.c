#include <stdio.h> // Library provides basic C commands
#include <kipr/wombat.h> // Library provides Robot commands
// <-- This is a comment
int main() // Start Program
{
	// --- ROBOT COMMANDS START HERE ---
	motor(0, 50); // Left motor at 50% power
	motor(3, 50); // Right motor at 50% power
	msleep(10000); // Wait 10,000 ms (10 seconds)
	
	ao(); // Turn ALL motors OFF safely
	// --- ROBOT COMMANDS STOP HERE ---
	return 0; // End program
}
