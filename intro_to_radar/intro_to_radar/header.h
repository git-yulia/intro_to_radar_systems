#pragma once 

#ifndef HEADER_H
#define HEADER_H

typedef double KILOMETERS; 
typedef double MICROSECONDS;
typedef int KILOWATTS; 
typedef int HERTZ; 
typedef int JOULES; 

#define c 300000 // km per second 

class PulseWaveform
{
public:
	PulseWaveform(); 

private:
	KILOWATTS peak_power;
	KILOWATTS average_power; 
	HERTZ pulse_repetition_frequency;
	MICROSECONDS pulse_repetition_period; 
	MICROSECONDS pulse_width; 
	JOULES pulse_energy; 
};

#endif
