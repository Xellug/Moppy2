/*
 * MoppyInstrument.h
 * Stores useful constants for MoppyInstrument implementations
 */

#ifndef MOPPY_SRC_MOPPYINSTRUMENTS_MOPPYINSTRUMENT_H_
#define MOPPY_SRC_MOPPYINSTRUMENTS_MOPPYINSTRUMENT_H_

/*
 * Number of microseconds in a timer-tick for setting timer resolution
 * and calculating noteTicks.  Smaller values here will trigger interrupts more often,
 * which might interfere with other processes but will result in more accurate frequency
 * reproduction.
 */
#define TIMER_RESOLUTION 40

// In some cases a pulse will only happen every-other tick (e.g. if the tick is
// toggling a pin on and off and pulses happen on rising signal) so to simplify
// the already ugly arrays below, multiply the RESOLUTION by 2 here.
#define DOUBLE_T_RESOLUTION (TIMER_RESOLUTION*2)

// The period of notes in microseconds
const unsigned int notePeriods[128] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    30578, 28861, 27242, 25713, 24270, 22909, 21622, 20409, 19263, 18182, 17161, 16198, //C1 - B1
    15289, 14436, 13621, 12856, 12135, 11454, 10811, 10205, 9632, 9091, 8581, 8099, //C2 - B2
    7645, 7218, 6811, 6428, 6068, 5727, 5406, 5103, 4816, 4546, 4291, 4050, //C3 - B3
    3823, 3609, 3406, 3214, 3034, 2864, 2703, 2552, 2408, 2273, 2146, 2025, //C4 - B4
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};

// NOTE: Yes this is super ugly, but it avoids having to calculate this at runtime.  Changes
// to notePeriods above will require matching changes here
// The period of notes in two-tick units
const unsigned int noteDoubleTicks[128] = {
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    30578/DOUBLE_T_RESOLUTION, 28861/DOUBLE_T_RESOLUTION, 27242/DOUBLE_T_RESOLUTION, 25713/DOUBLE_T_RESOLUTION, 24270/DOUBLE_T_RESOLUTION, 22909/DOUBLE_T_RESOLUTION, 21622/DOUBLE_T_RESOLUTION, 20409/DOUBLE_T_RESOLUTION, 19263/DOUBLE_T_RESOLUTION, 18182/DOUBLE_T_RESOLUTION, 17161/DOUBLE_T_RESOLUTION, 16198/DOUBLE_T_RESOLUTION, //C1 - B1
    15289/DOUBLE_T_RESOLUTION, 14436/DOUBLE_T_RESOLUTION, 13621/DOUBLE_T_RESOLUTION, 12856/DOUBLE_T_RESOLUTION, 12135/DOUBLE_T_RESOLUTION, 11454/DOUBLE_T_RESOLUTION, 10811/DOUBLE_T_RESOLUTION, 10205/DOUBLE_T_RESOLUTION, 9632/DOUBLE_T_RESOLUTION, 9091/DOUBLE_T_RESOLUTION, 8581/DOUBLE_T_RESOLUTION, 8099/DOUBLE_T_RESOLUTION, //C2 - B2
    7645/DOUBLE_T_RESOLUTION, 7218/DOUBLE_T_RESOLUTION, 6811/DOUBLE_T_RESOLUTION, 6428/DOUBLE_T_RESOLUTION, 6068/DOUBLE_T_RESOLUTION, 5727/DOUBLE_T_RESOLUTION, 5406/DOUBLE_T_RESOLUTION, 5103/DOUBLE_T_RESOLUTION, 4816/DOUBLE_T_RESOLUTION, 4546/DOUBLE_T_RESOLUTION, 4291/DOUBLE_T_RESOLUTION, 4050/DOUBLE_T_RESOLUTION, //C3 - B3
    3823/DOUBLE_T_RESOLUTION, 3609/DOUBLE_T_RESOLUTION, 3406/DOUBLE_T_RESOLUTION, 3214/DOUBLE_T_RESOLUTION, 3034/DOUBLE_T_RESOLUTION, 2864/DOUBLE_T_RESOLUTION, 2703/DOUBLE_T_RESOLUTION, 2552/DOUBLE_T_RESOLUTION, 2408/DOUBLE_T_RESOLUTION, 2273/DOUBLE_T_RESOLUTION, 2146/DOUBLE_T_RESOLUTION, 2025/DOUBLE_T_RESOLUTION, //C4 - B4
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION,
    0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0/DOUBLE_T_RESOLUTION, 0
};



#endif /* MOPPY_SRC_MOPPYINSTRUMENTS_MOPPYINSTRUMENT_H_ */