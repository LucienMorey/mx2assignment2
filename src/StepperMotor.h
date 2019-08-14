#ifndef __STEPPERMOTOR_H__
#define __STEPPERMOTOR_H__

class StepperMotor{

    public:
        StepperMotor();
        ~StepperMotor();
        void setStep();
        void setSpeed();
        void setDirection();
    private:
        int direction;
        int speed;
        int Steps;

};

#endif