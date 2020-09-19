#include "Arduino.h"
#include "Servo.h"
#include "Stepper.h"
#include "Motor.h"
#include "WiFi.h"


int Motor::Set_Motor(int type)
{
	
	/*
	Servo servo;
	Stepper stepper;
	if(Wifi.status==WL_CONNECTED)
	{
		int angle=0;
		int pin=0;
		if(type==1)                  // 1 is for activating servo motor
		{
			angle=e;
			pin=e;
			servo.attach(pin);
			servo.write(angle);
		}
		if(type==2)                  // 2 is for activating stepper motor
		{
			steps=e;
			speed=e;
			stepper.setspeed(speed);
			stepper.steps(steps/100);
		}
	}
	else
	{
		Serial.println("Sorry! The Wifi is not connected ");
	}*/
}

int Motor::Manual(int x)
{
	/*x= digitalWrite();     // take manual input
	int m1=digitalWrite(33,HIGH);    //attach the pin number
	int angle_Value = x;
	Servo.write(x); // rotate the motor by x angle;
	return angle_Value;
	*/
}



int Motor::ExtruderParallel(float u1, float u2,float u3, float u4, float h1, float h2)
{
	/*if((h1 == h2) & ( u1== u2 == u3 == u4))
	{
		return 1;        //this means extruder is parallel
	}
	else                        
	{
		return 0;
	}
	if( u1>u2 || u3>u4)
	{
		while((h1!=h2)&((u1==u2)||(u3==u4)))
		{
			rotate anticlockwise;
			// rotate until ((h1!=h2)&((u1==u2)||(u3==u4)))
		}
		return 1
	}
	if(u2>u1 || u4>u3)
	{
		while((h1!=h2)&((u1==u2)||(u3==u4)))
		{
			rotate clockwise;
			// rotate until((h1!=h2) &((u1==u2)||(u3==u4))))
        }
	return 1;
	}*/
}
int Motor::Install(int pins)
{
/*	pin_A = A;
	pin_B = B;
	pin_C = C;
	pin_D = D;
	pin_E = E;
	stepper.Set_Pin(int A, int B);
	stepper.Set_Pin(int A, int B, int C, int D);
	stepper.Set_Pin(int A, int B, int C, int D, int E);
	return motor_status;
	*/
}

void Motor::Set_Steps(int e)
{
	steps = e;
}

void Motor::Set_Speed(int e)
{
	speed = e;
}

void Motor::Set_Pin(int A, int B)     //set motor for 2 pin
	{
		/*pin_A = A;
		pin_B = B;
		*/
	}
	
void Motor::Set_Pin(int A, int B, int C, int D)     //set motor for 4 pins
	{
		/*pin_A = A;
		pin_B = B;
		pin_C = C;
		pin_D = D;
		*/
	}
	
void Motor::Set_Pin(int A, int B, int C, int D, int E)    // set motor for 5 pins
	{
		/*pin_A = A;
		pin_B = B;
		pin_C = C;
		pin_D = D;
		pin_E = E;
		*/
	}

int Motor::Value(int e)
{
	acknowledge_number=e;
	return acknowledge_number;
}


int Motor::Run(int value)
{
	/*if(Wifi.status==WL_CONNECTED)
	{
		if(client==server.available)         //this is to fetch value from the client and set the motor accordingly
		{
			Motor.Set_Motor(value);
		}
	}
	return acknowledge_number;
	*/
}

String Motor::Stop()
{
  /*if (client.available()){
    string c = client.read();  
    if(c=="STOP" || c=="Stop")        // if we want to stop the motor
	{
		motor_status=Motor.stop();
		client.disconnect();
	}  
  }
  return motor_status;
  */
}

int Motor::Acknowledge()
{
	return acknowledge_number;
}
