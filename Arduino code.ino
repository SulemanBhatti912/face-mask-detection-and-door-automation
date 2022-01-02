char inByte;  // initialize the variable inByte

void setup() {
  
  pinMode(13, OUTPUT);  // initialize the LED pin as an output
  Serial.begin(9600);  // set serial monitor to same speed
}

void loop() {

   if (Serial.available()>0) {  // check if any data received
    inByte = Serial.read(); // yes, so read it from incoming buffer
    if (inByte == '1'){
    digitalWrite(13, HIGH);
  }
 else {
    digitalWrite(13,LOW);
    } 
  } 

}
