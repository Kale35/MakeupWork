/*
 * time_to_sec.c
 *
 *  Created on: Sep 14, 2020
 *      Author: Berat Kales
 */
// appropriate #include statements

/* Convert a time interval specified in hours, minutes and seconds to
 * seconds.
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Preconditions:
 *     0 <= minutes < 60
 *     0 <= seconds < 60 
 * Return:
 *     number of seconds in the interval
 */
unsigned int time_to_sec(unsigned int hours, unsigned int minutes,
                         unsigned int seconds)
{
    int timeinSec = seconds;
    timeinSec = timeinSec + minutes * 60;
    timeinSec = timeinSec + hours * 3600;
}

/* Print a formatted representation of the calculation
 * Parameters:
 *     hours, minutes, seconds: input time elements
 * Postcondition:
 *     Function will write the calculation to standard output.
 */
void format_seconds(unsigned int hours, unsigned int minutes,
                    unsigned int seconds)
{
    int timeinSec = time_to_sec(hours, minutes, seconds);
    printf("%d hours, %d minutes and %d seconds is equal to %d.\n", hours, minutes, seconds, timeinSec);
}

int main(void)
{
    format_seconds(4, 13, 20);
    format_seconds(8, 0, 0);
    format_seconds(1, 30, 0);
}