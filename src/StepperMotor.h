#ifndef __STEPPERMOTOR_H__
#define __STEPPERMOTOR_H__

#include "jlmio.h"

class StepperMotor{

    public:
        StepperMotor(volatile uint8_t* dataDirection1, volatile uint8_t* pin1, uint8_t position1, volatile uint8_t* dataDirection2, 
            volatile uint8_t* pin2, uint8_t position2, volatile uint8_t* dataDirection3, volatile uint8_t* pin3, uint8_t position3, 
            volatile uint8_t* dataDirection4, volatile uint8_t* pin4, uint8_t position4);
        ~StepperMotor();
        void Step(int stepState);
        void setSpeed();
        void setDirection();
    private:
        
        int direction;
        int speed;
        int Steps;
        int stepState;

        volatile uint8_t* dataDirection1;
        volatile uint8_t* pin1;
        uint8_t position1;
        volatile uint8_t* dataDirection2;
        volatile uint8_t* pin2;
        uint8_t position2;
        volatile uint8_t* dataDirection3;
        volatile uint8_t* pin3;
        uint8_t position3;
        volatile uint8_t* dataDirection4;
        volatile uint8_t* pin4;
        uint8_t position4;

};

#endif