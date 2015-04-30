/*
rc.c
Controlling
*/

//// headers
task rc();

//// implementations
task rc()
{

	int rcY;
	int rcX;
	int rcT; // theta for rotation

	float multiplier;

	while(true){

		multiplier = 0.5;

		if(vexRT[Btn5U]){
			multiplier*=0.5;
		}
		if(vexRT[Btn5D]){
			multiplier*=0.3;
		}
		if(vexRT[Btn7D]){
			multiplier*=2;
		}


		motor[LLift]=motor[RLift]=0;
		// need to check angle limit
		if(vexRT[Btn8U] && (SensorValue[LEnc]<100||vexRT[Btn7U])){
			motor[LLift]=motor[RLift]=127;
			} else if(vexRT[Btn8D] && (SensorValue[LEnc]>5||vexRT[Btn7U])){
			motor[LLift]=motor[RLift]=-127;
		}


		// arm
		if(!autoBalance){
			motor[ABal]=0;
		}
		if(vexRT[Btn6U] && (SensorValue[AEnc]<-5 || vexRT[Btn7U])){
			autoBalance = false;
			motor[ABal]=127;
			} else if(vexRT[Btn6D] && (SensorValue[AEnc]>-300 || vexRT[Btn7U])){
			autoBalance = false;
			motor[ABal]=-64;
		}

		if(vexRT[Btn7L]){
			autoBalance = !autoBalance;
			wait1Msec(500);
		}

		rcY = filter(vexRT[Ch3],10,127)*multiplier;
		rcX = filter(vexRT[Ch4],10,127)*multiplier;
		rcT = filter(vexRT[Ch1],10,127)*multiplier;

		motor[FLMove] = rcY + rcX + rcT;
		motor[FRMove] = rcY - rcX - rcT;
		motor[BLMove] = rcY - rcX + rcT;
		motor[BRMove] = rcY + rcX - rcT;

		stdWait();
	}
}
