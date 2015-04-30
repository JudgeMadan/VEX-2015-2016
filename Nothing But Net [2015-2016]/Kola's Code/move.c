/*
 move.c
 Movement
*/

//// headers
void setLeftMove(int power);
void setRightMove(int power);

//// implementations
void setLeftMove(int power){
	motor[FLMove]=motor[BLMove]=power;
}
void setRightMove(int power){
	motor[FRMove]=motor[FRMove]=power;
}
