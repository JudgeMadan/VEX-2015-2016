void display_voltage(){
  bLCDBacklight = true;                                    // Turn on LCD Backlight
  string mainBattery, backupBattery;
  clearLCDLine(0);                                            // Clear line 1 (0) of the LCD
  clearLCDLine(1);                                            // Clear line 2 (1) of the LCD
 
  //Display the Primary Robot battery voltage
  // LOOP THE NEXT SECTION with while(true) for a separate task. this function just displays for 1000 ms. Do not loop this funciton.
  displayLCDString(0, 0, "Primary: ");
  sprintf(mainBattery, "%1.2f%c", nImmediateBatteryLevel/1000.0,'V'); //Build the value to be displayed
  displayNextLCDString(mainBattery);
 
  //Display the Backup battery voltage
  displayLCDString(1, 0, "Backup: ");
  sprintf(backupBattery, "%1.2f%c", BackupBatteryLevel/1000.0, 'V');    //Build the value to be displayed
  displayNextLCDString(backupBattery);
 
  //Short delay for the LCD refresh rate
  wait1Msec(1000);
}

//we must also write to choose one of the 4 autonomous code possibilitie.
//http://www.robotc.net/blog/2012/05/18/advanced-applications-with-the-vex-lcd/
