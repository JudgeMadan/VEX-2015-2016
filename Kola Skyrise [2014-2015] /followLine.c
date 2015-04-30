/*
lineTracker.c
Line Tracker
*/

//// headers
void followLine(int time);

//// implementations
void followLine(int time){
	int threshold = 505;
	int tstep = 10;
	for(int t=0;t<time;t+=tstep){
		// high value is dark
		// line is white - low vale
		if(SensorValue[RLine] < threshold)
		{
			// counter-steer right:
			setLeftMove(64);
			setRightMove(0);
		}
		// CENTER sensor sees dark:
		if(SensorValue[CLine] < threshold)
		{
			// go straight
			setLeftMove(127);
			setRightMove(127);
		}
		// LEFT sensor sees dark:
		if(SensorValue[LLine] < threshold)
		{
			// counter-steer left:
			setLeftMove(0);
			setRightMove(64);
		}
		wait1Msec(tstep);
	}
}
