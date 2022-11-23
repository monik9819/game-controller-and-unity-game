int carRotation=0;          //variable to read the values from the potentiometers
int carSpeed=0;

void setup() {
  Serial.begin(9600);       //start the serial communication
  pinMode(A0,INPUT);        //initialize the potentiometers inputs
  pinMode(A1,INPUT);
}

void loop() {
  carRotation = analogRead(A0); //read the values of the potentiometers - between 0 and 1023
  carSpeed = analogRead(A1);
  Serial.print(map(carSpeed,0,1023,-100,100)); //scale it to use it with the car speed
  Serial.print(",");
  Serial.println(map(carRotation,0,1023,-100,100)); //scale it for the car rotation
  delay(50);
}
