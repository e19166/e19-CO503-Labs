/*
 * 	FIFO queue for shared memory communication between niosII processors
 *
 *  	DATE		: 18-08-2016
 *      AUTHOR	: Isuru Nawinne
*
*	Structure of the FIFO:
*	___________________________________________________________________________
*	| 	full	| 	empty	| 	count		|	|	|	|	|	|	|	|	|
*	| 	?	| 	?		| 	?		|	|	|	|	|	|	|	|	|
*	___________________________________________________________________________
*/


#include "FIFO_1.h"


void WRITE_FIFO_1(int *buffer)
{
	// Wait if the fifo is full

	// Write the data to FIFO

	// Update the write pointer

	// Update "count" in shared mem

	// Update the "full?" and "empty?" flags accordingly
	// Set the full flag if FIFO is now full
	// Reset the empty flag if FIFO now has 1 enrty

	altera_avalon_fifo_write_fifo(IN_BASE,CONTROL_BASE,*buffer);
}


void READ_FIFO_1(int *buffer)
{
	// Wait if the fifo is empty

	// Read the data

	// Update the read pointer

	// Update "count" in shared mem

	// Update the "full?" and "empty?" flags accordingly
	// Set the empty flag if FIFO is now empty
	// Reset the full flag if FIFO now has 1 enrty less than capacity
	*buffer = altera_avalon_fifo_read_fifo(OUT_BASE,CONTROL_BASE);
}



//Initialization
void FIFO_1_INIT()
{
	altera_avalon_fifo_init(CONTROL_BASE,0x0,ALMOST_EMPTY,ALMOST_FULL);
}
