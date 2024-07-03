/*
 * 	Template of producer application using FIFO
 *
 
*/

#include "FIFO_1.h"


void delay(int n);
int producer();


int main()
{

	alt_u32 sw_fast_timeA, sw_fast_timeB;
	alt_timestamp_start();
	sw_fast_timeA = alt_timestamp();

	producer();

	sw_fast_timeB = alt_timestamp();

	printf("Time for Write operation: %.2lu ms\n",1000*((unsigned long)(sw_fast_timeB-sw_fast_timeA))/((unsigned long)alt_timestamp_freq()));
	while(1) { }
	
//	printf("Producer starting..\n");
////	IOWR_32DIRECT(MEM_BASE,writep,25);
//	printf("\n");
//	while(1){}
	return 0;
}

int producer()
{
	printf("Producer starting..\n");

	FIFO_1_INIT(); // Initialize the FIFO

	int j = 5;
	while(j<=500)
	{
		delay(100000);

		WRITE_FIFO_1(&j); // Write to the producer-consumer fifo

		delay(100000);

		printf("Producer sent [%i]\t%x\n",j,writep);

		j+=10;

	}

	printf("Producer finished..\n");
	return 0;
}


void delay(int n)
{
	int i;
	for(i=n; i>0; i--)
	{
		continue;
	}
}
