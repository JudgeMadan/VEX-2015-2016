/*
 genMove.c
 General Movements
*/

//// headers
void preMove(int angle, int power);
void rotate(int time); // positive time(ms) is clockwise, neg is anti


//// implementations
void preMove(int angle, int power){
	float x = sinDegrees(angle)*power;
	float y = cosDegrees(angle)*power;

	motor[FLMove]=y+x;
	motor[FRMove]=y-x;
	motor[BLMove]=y-x;
	motor[BRMove]=y+x;
}
void rotate(int time){
	if(time>0){
		motor[FLMove]=motor[BLMove]=127;
		motor[FRMove]=motor[BRMove]=-127;
	} else {
		time=-time;
		motor[FLMove]=motor[BLMove]=-127;
		motor[FRMove]=motor[BLMove]=127;
	}
	wait1Msec(time);
}
