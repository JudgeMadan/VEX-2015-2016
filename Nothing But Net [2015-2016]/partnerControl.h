task varPower(){
    while(true){
        if(vexRT[Btn8UXmtr2] ==1){
            x = 18;
        }
        else if(vexRT[Btn8RXmtr2] == 1){
            x = 16.5;
        }
        //else if(vexRT[Btn8DXmtr2] == 1){
        //    x = 15;
        //}
        else if(vexRT[Btn8LXmtr2] == 1){
            x = 15;
        }
        else if(vexRT[Btn6UXmtr2] == 1){
            x = 0;
        }
        else if(vexRT[Btn7UXmtr2] ==1){
            increment = 5;
        }
        else if(vexRT[Btn7DXmtr2] == 1){
            increment = 1;
        }
        else{}
    }
}
