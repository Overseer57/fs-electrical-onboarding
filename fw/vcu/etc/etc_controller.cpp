//
// Created by Jackson Pinsonneault on 3/24/26.
//

#include "etc_controller.h"

// Assign appropriate GPIO objects depending on pin parameters
ETCController::ETCController(PinName APPS1_pin, PinName APPS2_pin) {}

/* 
    Nice function to write which returns a wrapped version of the
    value given between 0 and 1 (-0.1 => 0, 10 => 1, 0.3 => 0.3).
*/
float ETCController::clamp(float value) {}

/*
    Simple function to write which returns a bool of true or false
    depending on whether low <= value <= high is true.
*/
bool ETCController::in_range(float value, float low, float high) {}

/*
    Complicated method with the goal of refreshing voltages, pedal
    positions, implausibilities, and motor torque demand.
*/
void ETCController::update_state() {
    /*
        Retrieve both APPS sensor voltages, determine pedal
        positions, then calculate a motor torque demand based off
        the two positions.
    */



    /*
        Finish the step listed above.
    */

    // Here to simplify this function and readability.
    update_implausibilities();
}

/*
    Timer based logic for the ETC to be rules compliant. MUST
    include rules T.4.2.4, T.4.2.9 (out of range).
*/
void ETCController::update_implausibilities() {
    /*
        Start of implaus logic checking.
    */



    /*
        End of implaus logic checking.
    */

    /*
        Run timers and check their count(), may be different
        place. Remember where you are.
    */

    
}
