#include <iostream>
#include <math.h>
#include <cassert> 
#include <string>

#include "header.h"

using namespace::std; 

KILOMETERS get_range_to_target(MICROSECONDS round_trip_time)
{
	return round_trip_time * 0.15; 
}

KILOMETERS get_max_unambiguous_range(MICROSECONDS pulse_repetition_period)
{
	pulse_repetition_period /= 1000000; // MICROSECONDS -> SECONDS 
	return (c * pulse_repetition_period) / 2; 
}

void main()
{
	/* Run all tests */
	assert(get_range_to_target(1) == 0.15);
	assert(get_max_unambiguous_range(1000) == 150);
}