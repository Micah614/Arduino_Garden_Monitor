String str;
int counter = 0;  // variable for data sent to Serial port. 

void setup() {
  Serial.begin(9600);  // initialize serial port with Baud rate = 9600 ^-s
  Serial.print("Serial connection established. Ready to recieve serial input.");
}

void loop() {
  Serial.print("counter: ");
  Serial.println(counter);
  delay(1000);
  counter++;
}

/* 
SerialEvent() is a serial port interruption function. 
It interrupts instruction flow to read buffer data int "str" and prints it to the serial monitor.
*/
void serialEvent() {  // event listener function
  if (Serial.available()) {  // determine if serial port buffer is full.
    str = Serial.readString();  // if so, read string
    Serial.print("Control Board received:");  // println.
    Serial.println(str);  // print str to the serial monitor.
  }
}


