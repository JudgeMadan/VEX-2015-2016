int autocomplete = 0;
task autonomousLift(){
	SensorValue(liftEncoder)=0;
	while(true){
		if(abs(18-roundsR)< 0.8 && abs(18-roundsL)<0.8){
			while(autocomplete == 0){
				wait1Msec(1000);
				while(SensorValue(liftEncoder)< 250){
					motor[lift] = 127 / 1.1;
				}
				motor[lift] = 0;
				wait1Msec(750);
				while(abs(x-roundsR)> 0.8 || abs(x-roundsL)>0.8){}
				while(SensorValue(liftEncoder)< 750){
					motor[lift] = 127 / 1.1;
				}
				motor[lift] = 0;
				wait1Msec(750);
				while(abs(x-roundsR)> 0.8 || abs(x-roundsL)>0.8){}
				SensorValue(liftEncoder)= 0;
				while(SensorValue(liftEncoder)< 950){
					motor[lift] = 127 / 1.1;
				}

				motor[lift] = 0;

				wait1Msec(750);
				while(abs(x-roundsR)> 0.8 || abs(x-roundsL)>0.8){}
				clearTimer(T4);
				while(time1[T4]<2000){
					motor[lift] = 127/1.1;
					motor[rollers] = 127;
				}
				motor[lift] = motor[rollers] = 0;
				SensorValue[backRight] = 0;
				while(nMotorEncoder[backRight] < 200){
					motor[frontRight] = motor[backRight] = 0;
				}
				while(time1[T2]<15000){
					motor[frontLeft] = motor[frontRight] = motor[backLeft] = motor[backRight] = 0;
					motor[rollers] = 0;
				}
				autocomplete = 1;
			}
		}
	}
}
