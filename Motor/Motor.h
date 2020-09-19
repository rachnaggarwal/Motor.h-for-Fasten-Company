#ifndef Motor_h
#define Motor_h

#include "Arduino.h" 
#include "Servo.h"
#include "Stepper.h"
#include "WiFi.h"


class Motor{
    public:
    	int commmand_key;
    	int motor_status;
    	int acknowledge_number;
    	int motor_type;
    	int angle;
    	int speed;
		int steps;
	
    
    	void Set_Steps(int e);
    	void Set_Speed(int e);
        void Set_Pin(int A, int B);
        void Set_Pin(int A, int B, int C, int D);
        void Set_Pin(int A, int B, int C, int D, int E);
        
    	
    	int Set_Motor(int type);
    	int Manual(int x);
    	int Install(int pins);
    	int ExtruderParallel(float u1, float u2, float u3, float u4, float h1, float h2);
    	int Value(int e);
    	int Run(int value);
    	String Stop();
    	int Acknowledge();
    	
};

#endif
