#include <stdio.h> 

/*
SUMMARY
In C, variables must have a specific type, which tells the program what kind of data the variable can store.
  int - stores whole numbers (integers), such as 123 or -123
  float - stores numbers with decimals, such as 19.99 or -19.99
  char - stores a single character, such as 'a' or 'B'. Characters are surrounded by single quotes

SYNTAX
type variableName = value;
*/
int main() { 
  /*************************
  * CREATE VARIABLES
  */
  // declare a variable
  int firstInt;
  // assign a variable
  firstInt = 5;
  // Declare and assign variable in one line
  // int firstInt = 10;

  /*************************
  * FORMAT SPECIFIERS (printf)
  * Placeholders starting with '%' that define how data types are output.
  * Syntax: printf("%[specifier]", variable);
  * Example: %d = int
  */
  float firstFloatNum = 2.28;
  char firstChar = 'D';
  
  printf("%d\n", firstInt);
  printf("%f\n", firstFloatNum);
  printf("%c\n", firstChar);
  
  return 0; 
}
