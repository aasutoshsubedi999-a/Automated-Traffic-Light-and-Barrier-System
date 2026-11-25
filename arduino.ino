// Importing the library to control the servo motor
#include <Servo.h>

// Creating a servo object named barrier
Servo barrier;

// Assigning Arduino pins to the LEDs and servo motor
int red = 7;
int yellow = 6;
int green = 5;
int servoPin = 9;

// The setup function runs only once when the Arduino starts
void setup() {

  // Setting the LED pins as output so we can turn them on and off
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);

  // Telling the Arduino that the servo is connected to pin 9
  barrier.attach(servoPin);

  // Closing the barrier when the system first starts
  barrier.write(0);
}

// The loop function keeps running repeatedly
void loop() {

  // Red light: vehicles must stop
  digitalWrite(red, HIGH);     // Turn on the red LED
  digitalWrite(yellow, LOW);    // Turn off the yellow LED
  digitalWrite(green, LOW);     // Turn off the green LED

  barrier.write(0);            // Move the barrier to 0 degrees to close it
  delay(5000);                 // Wait for 5 seconds


  // Green light: vehicles are allowed to pass
  digitalWrite(red, LOW);      // Turn off the red LED
  digitalWrite(yellow, LOW);    // Turn off the yellow LED
  digitalWrite(green, HIGH);    // Turn on the green LED

  barrier.write(90);           // Move the barrier to 90 degrees to open it
  delay(5000);                 // Allow vehicles to pass for 5 seconds


  // Yellow light: vehicles should prepare to stop
  digitalWrite(red, LOW);      // Turn off the red LED
  digitalWrite(yellow, HIGH);   // Turn on the yellow LED
  digitalWrite(green, LOW);     // Turn off the green LED

  barrier.write(90);           // Keep the barrier open
  delay(2000);                 // Wait for 2 seconds before the red light

  // The cycle starts again from the red light
}
