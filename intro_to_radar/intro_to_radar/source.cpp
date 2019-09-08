#include <iostream>
#include <math.h>
#include <cassert> 
#include <string>
#include <stdio.h>

#include "header.h"

using namespace::std; 

/* PulseWaveform Constructor */
PulseWaveform::PulseWaveform (
	KILOWATTS INPUT_peak_power, 
	HERTZ INPUT_pulse_repetition_frequency, 
	MICROSECONDS INPUT_pulse_width )
{
	peak_power = INPUT_peak_power * 1000; // unit change: MEGAWATTS -> KILOWATTS
	pulse_repetition_frequency = INPUT_pulse_repetition_frequency; 
	pulse_width = INPUT_pulse_width;

	pulse_repetition_period = pulse_repetition_frequency; // unit change: MICROSECONDS -> HERTZ
	average_power = (peak_power * pulse_width) / pulse_repetition_period; 
	pulse_energy = INPUT_peak_power * pulse_width; // in JOULES
}

KILOWATTS PulseWaveform::get_average_power()
{
	return average_power; 
}

JOULES PulseWaveform::get_pulse_energy()
{
	return pulse_energy;
}

KILOMETERS get_max_unambiguous_range(MICROSECONDS pulse_repetition_period)
{
	pulse_repetition_period /= 1000000; // MICROSECONDS -> SECONDS 
	return (c * pulse_repetition_period) / 2; 
}

KILOMETERS get_range_to_target(MICROSECONDS round_trip_time)
{
	return round_trip_time * 0.15; 
}

void main()
{
	char press_any_key = '0'; 

	/* Run all tests */
	assert(get_range_to_target(1) == 0.15);
	assert(get_max_unambiguous_range(1000) == 150);

	PulseWaveform example_pulse = PulseWaveform((MEGAWATTS)1, (HERTZ)1000, (MICROSECONDS)1); 
	assert(example_pulse.get_average_power() == 1);
	assert(example_pulse.get_pulse_energy() == 1);

	scanf_s("%c", press_any_key, 1);
}