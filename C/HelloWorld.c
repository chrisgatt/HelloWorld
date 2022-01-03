/**
 * HelloWorld.c
 * C program to say Hello World
 * 
 * @author Christophe Gattardi
 * @version 1.0 06/01/2021
 */

#include <stdio.h> 
  
/**
 * @brief main program
 * 
 */
int main() 
{ 
    int year = 2022;
    char msg[] = "Hello World from C! We are in";
    printf("%s %i!\n", msg, year);
    return 0; 
} 
