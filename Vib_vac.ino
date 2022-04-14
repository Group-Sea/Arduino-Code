int sensorPin = A0;    // Pin to check if voltage is being sent to pin
int VaccumPump = 11;  //set component pins
int Vibrator = 10;   
int sensorValue = 0;  // variable to check if voltage is being sent to pin
void setup() {
  // declare the PinModes as an OUTPUT:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(sensorPin, INPUT);  //The pin which checks if the switch is in 3rd postition 
    Serial.begin(9600); //starts serial monitor

}

void loop() {
  sensorValue = analogRead(sensorPin);    // read the value from the pin, if in 3rd position reads 5v is running into pin
      //Serial.println(sensorValue); //Test code to print the value
      if (sensorValue > 1100){ //If sensor value reads an input showing voltage going directly in 
       digitalWrite(Vibrator,255);  //Turns on the vaccum to a certain voltage, Due to arduino output is half of what it should be
      // digitalWrite(VaccumPump,255); //Unable to use arduino to power vibrator as resistance is too low
        } else{ //If the pin dosnt have sufficent voltage running
        digitalWrite(Vibrator,0); //turns off the vibrator and vaccum pins
       //digitalWrite(VaccumPump,0); 
          }
}
