float divideMove = 1.5;

task move(){
    while(true){
        motor[frontLeft] = motor[backLeft] = (vexRT[Ch3] + vexRT[Ch1])/divideMove;
        motor[frontRight] = motor[backRight] = (vexRT[Ch3] - vexRT[Ch1])/divideMove;
	}
}

task precision(){
	while(true){
		if(vexRT[Btn8R] == 1){
			divideMove = 4;
		}
		else{
			divideMove = 1.5;
		}
}
}

int limit = 11;

task autoIntake(){
	while(true){
		if(vexRT[Btn6DXmtr2] == 1){
			clearTimer(T4);
			while(time1[T4]<2000){
			motor[rollers] = -127;
		}
		}
		else if(vexRT[Btn6U] == 1 && abs(x-roundsR)<1.5 && abs(x-roundsL)<1.5){
			motor[rollers] = 127;
			motor[lift] = 127/ 1.1;
		}
		else if(vexRT[Btn5UXmtr2] == 1){
			motor[rollers] = 127;
			motor[lift] = 127/ 1.1;
		}
		else if(vexRT[Btn6D] == 1){
			if(SensorValue(ultraLift)>limit){
				motor[rollers] = 127;
				motor[lift] = 127/1.1;
			}
			else if(SensorValue(ultraLift)<=limit){
				motor[rollers] = 127;
				motor[lift] = 0;
			}
		}
		else if(SensorValue(ultraIntake) <= 24 && SensorValue(ultraLift)>limit){
			clearTimer(T3);
			while(time1[T3]<3000){
				motor[rollers] = 127;
				motor[lift] = 127 / 1.1;
				if(SensorValue(ultraLift)<=limit||vexRT[Btn5U] == 1){break;}
			}
		}
		else if(SensorValue(ultraIntake) <= 24 && SensorValue(ultraLift)<=limit){
			clearTimer(T3);
			while(time1[T3]<3000){
				motor[rollers] = 127;
				motor[lift] = 0;
				if(SensorValue(ultraLift)>limit||vexRT[Btn5U] == 1){break;}
			}

		}
		else{
			motor[rollers] = 0;
			motor[lift] = 0;

		}

	}
}
