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
void print_status(alt_u32 control_base_address)
{
	printf("--------------------------------------\n");
	printf("LEVEL = %u\n", altera_avalon_fifo_read_level(control_base_address) );
	printf("STATUS = %u\n", altera_avalon_fifo_read_status(control_base_address,
	ALTERA_AVALON_FIFO_STATUS_ALL) );
	printf("EVENT = %u\n", altera_avalon_fifo_read_event(control_base_address,
	ALTERA_AVALON_FIFO_EVENT_ALL) );
	printf("IENABLE = %u\n", altera_avalon_fifo_read_ienable(control_base_address,
	ALTERA_AVALON_FIFO_IENABLE_ALL) );
	printf("ALMOSTEMPTY = %u\n",
	altera_avalon_fifo_read_almostempty(control_base_address) );
	printf("ALMOSTFULL = %u\n\n",
	altera_avalon_fifo_read_almostfull(control_base_address));
	//full
	printf("FULL = %u\n\n",
	altera_avalon_fifo_read_status(control_base_address,0x01));
	//empty
	printf("EMPTY = %u\n\n",
	altera_avalon_fifo_read_status(control_base_address,0x02));
}


void WRITE_FIFO_1(int *buffer)
{
	// Wait if the fifo is full
//	while(altera_avalon_fifo_read_status(CTRL,0x01)){}

	// Write the data to FIFO
	altera_avalon_fifo_write_fifo(IN_BASE,CTRL,*buffer);


}


void READ_FIFO_1(int *buffer)
{
	// Wait if the fifo is empty
//	while(altera_avalon_fifo_read_status(CTRL,0x02)){}

	// Read the data
	*buffer = altera_avalon_fifo_read_fifo(OUT_BASE,CTRL);


}

//Initialization
void FIFO_1_INIT()
{
	altera_avalon_fifo_init(CTRL,0x0,ALMOST_EMPTY,ALMOST_FULL);
	/**
	 *
	 * address葉he base address of the FIFO control slave
	 * ienable葉he value to write to the interruptenable register
	 * emptymark葉he value for the almost empty threshold level
	 * fullmark葉he value for the almost full threshold level
	 *
	 * */



}
