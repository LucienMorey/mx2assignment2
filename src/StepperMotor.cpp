#include "StepperMotor.h"

StepperMotor::StepperMotor(volatile uint8_t* dataDirection1, volatile uint8_t* pin1, uint8_t position1, volatile uint8_t* dataDirection2, 
        volatile uint8_t* pin2, uint8_t position2, volatile uint8_t* dataDirection3, volatile uint8_t* pin3, uint8_t position3, 
        volatile uint8_t* dataDirection4, volatile uint8_t* pin4, uint8_t position4){
    
    this->dataDirection1 = dataDirection1;
    this->position1 = position1;
    this->dataDirection2 = dataDirection2;
    this->pin2 = pin2;
    this->position2 = position2;
    this->dataDirection3 = dataDirection3;
    this->pin3 = pin3;
    this->position3 = position3;
    this->dataDirection4 = dataDirection4;
    this->pin4 = pin4;
    this->position4 = position4;

    jlm::PinMode(this->dataDirection1,this->position1,OUTPUT);
    jlm::PinMode(this->dataDirection2,this->position2,OUTPUT);
    jlm::PinMode(this->dataDirection3,this->position3,OUTPUT);
    jlm::PinMode(this->dataDirection4,this->position4,OUTPUT);

    jlm::WritePin(this->pin1,this->position1,LOW);
    jlm::WritePin(this->pin2,this->position2,LOW);
    jlm::WritePin(this->pin3,this->position3,LOW);
    jlm::WritePin(this->pin4,this->position4,LOW);


}

StepperMotor::~StepperMotor(){

}

void StepperMotor::Step(int stepState){
    switch (stepState){
    case 1:
        jlm::WritePin(this->pin1,this->position1,HIGH);
        jlm::WritePin(this->pin2,this->position2,LOW);
        jlm::WritePin(this->pin3,this->position3,LOW);
        jlm::WritePin(this->pin4,this->position4,LOW);
        break;
    
    case 2:
        jlm::WritePin(this->pin1,this->position1,LOW);
        jlm::WritePin(this->pin2,this->position2,HIGH);
        jlm::WritePin(this->pin3,this->position3,LOW);
        jlm::WritePin(this->pin4,this->position4,LOW);
        break;
    
    case 3:
        jlm::WritePin(this->pin1,this->position1,LOW);
        jlm::WritePin(this->pin2,this->position2,LOW);
        jlm::WritePin(this->pin3,this->position3,HIGH);
        jlm::WritePin(this->pin4,this->position4,LOW);
        break;
    
    case 4:
        jlm::WritePin(this->pin1,this->position1,LOW);
        jlm::WritePin(this->pin2,this->position2,LOW);
        jlm::WritePin(this->pin3,this->position3,LOW);
        jlm::WritePin(this->pin4,this->position4,HIGH);
        break;
    }
}

void StepperMotor::setSpeed(){

}

void StepperMotor::setDirection(){

}