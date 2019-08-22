## intro_to_radar_systems
A repository for notes from Introduction to Radar Systems, Volume 3. (author: Merill Skolnik)

## Issue 1

Be careful when using assertions, for instance, the following test will fail:

assert(get_result() == 0.15); // when get_result() returns 0.15 as a float

0.15 is actually a double by default. 
