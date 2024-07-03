/*
 * 	FIFO queue for shared memory communication between niosII processors
 *
 *  	DATE		: 19-08-2016
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
	while(IORD_32DIRECT(MEM_BASE,fullp)==0x1){}

	// Write the data to FIFO
	IOWR_32DIRECT(MEM_BASE,writep,buffer);

	// Update the write pointer
	writep += UNIT_SIZE;
//	if(writep == STARTP + (CAPACITY * UNIT_SIZE)){
//		writep=STARTP;
//	}

	// Update "count" in shared mem
	IOWR_32DIRECT(MEM_BASE, countp, IORD_32DIRECT(MEM_BASE,countp) + 0x1);

	// Update the "full?" and "empty?" flags accordingly
	// Set the full flag if FIFO is now full
	// Reset the empty flag if FIFO now has 1 entry
	if(IORD_32DIRECT(MEM_BASE,countp)==CAPACITY){
		IOWR_32DIRECT(MEM_BASE,fullp,0x1);
	}else{
		IOWR_32DIRECT(MEM_BASE,fullp,0x0);
	}
	if(IORD_32DIRECT(MEM_BASE,countp)==0x0){
		IOWR_32DIRECT(MEM_BASE,emptyp,0x1);
	}else{
		IOWR_32DIRECT(MEM_BASE,emptyp,0x0);
	}
}


void READ_FIFO_1(int *buffer)
{
	// Wait if the fifo is empty
	while(IORD_32DIRECT(MEM_BASE,emptyp)==0x1){}

	// Read the data
	buffer = IORD_32DIRECT(MEM_BASE,readp);

	// Update the read pointer
	readp += UNIT_SIZE;

	// Update "count" in shared mem
	IOWR_32DIRECT(MEM_BASE, countp, IORD_32DIRECT(MEM_BASE,countp) - 0x1);

	// Update the "full?" and "empty?" flags accordingly
	// Set the empty flag if FIFO is now empty
	// Reset the full flag if FIFO now has 1 entry less than capacity
	if(IORD_32DIRECT(MEM_BASE,countp)==CAPACITY){
		IOWR_32DIRECT(MEM_BASE,fullp,0x1);
	}else{
		IOWR_32DIRECT(MEM_BASE,fullp,0x0);
	}
	if(IORD_32DIRECT(MEM_BASE,countp)==0x0){
		IOWR_32DIRECT(MEM_BASE,emptyp,0x1);
	}else{
		IOWR_32DIRECT(MEM_BASE,emptyp,0x0);
	}
}

//Initialization
void FIFO_1_INIT()
{
	writep = STARTP; // Initially the FIFO is empty, so start writing at the first slot
	readp  = STARTP;
	fullp   = 0x0; // SET THIS OFFSET (If there are previous FIFOs in shared memory, use Prev Fifo's STARTP + Prev Fifo's size)
	emptyp   = fullp + UNIT_SIZE;
	countp  = emptyp + UNIT_SIZE;

	// Assigning values for the flags.
	IOWR_32DIRECT(MEM_BASE, fullp, 0x0);
	IOWR_32DIRECT(MEM_BASE, emptyp, 0x1); // The fifo is empty at the start
	IOWR_32DIRECT(MEM_BASE, countp, 0x0); // The fifo is empty at the start
}
