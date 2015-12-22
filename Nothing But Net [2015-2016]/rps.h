void RPS(float outcome) { // this task measures the Rounds Per Second of the shooting mechanism constantly.
    if(time1[T1]>=1000/updateFrequency){
        clearTimer(T1);
        roundsR = ((nMotorEncoder[pewR1])/(627.2)*(84/36)*(84/12))*updateFrequency; // rounds per second right
        roundsL = ((nMotorEncoder[pewL1])/(627.2)*(84/36)*(84/12))*updateFrequency; // rounds per second left
        nMotorEncoder[pewR1] = 0;
        nMotorEncoder[pewL1] = 0;

        if(roundsL > outcome){
            lSpeed -= increment;
        }
        else if(roundsL<outcome){
            lSpeed += increment;
        }



        //right side
        if(roundsR > outcome){
            rSpeed -= increment;
        }
        else if(roundsR<outcome){
            rSpeed += increment;
        }


    }
    motor[pewL1] = motor[pewL2] = lSpeed;
    motor[pewR1] = motor[pewR2] = rSpeed;


}
