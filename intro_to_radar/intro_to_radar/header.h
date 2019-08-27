#pragma once 

#ifndef HEADER_H
#define HEADER_H

typedef double KILOMETERS; 
typedef double MICROSECONDS;
typedef double KILOWATTS; 
typedef double MEGAWATTS; 
typedef double HERTZ; 
typedef double JOULES; 

#define c 300000 // km per second 

class PulseWaveform
{
public:
	PulseWaveform(MEGAWATTS INPUT_peak_power, HERTZ INPUT_pulse_repetition_frequency, MICROSECONDS INPUT_pulse_width); 
	KILOWATTS get_average_power(); 
	JOULES get_pulse_energy(); 

private:
	KILOWATTS peak_power;
	KILOWATTS average_power; 
	HERTZ pulse_repetition_frequency;
	MICROSECONDS pulse_repetition_period; 
	MICROSECONDS pulse_width; 
	JOULES pulse_energy; 
};

#endif