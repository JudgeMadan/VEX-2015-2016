



task tracking(){
    int sampleRate = 4 //count per second
    
    float encoderCount[sampleRate * 120][2]; // initializes array with sampleRate * 120, 4 each
    
    int counter = 0;
    
    //cleartimer t1
    
    while(true){
        if(/*t1timer > (1000/sampleRate) -1*/){
            //cleartimer
            encoderCount[counter][0] = SensorValue(frontLeftEncoder);
            encoderCount[counter][1] = SensorValue(frontRightEncoder);
            counter = counter + 1;
            
        }
    }
    
}