int redPin = 10;
int greenPin = 11;
int bluePin = 9;
 
//uncomment this line if using a Common Anode LED
//#define COMMON_ANODE
 
void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}
 
void loop()
{
  setColor(255, 0, 0);  // red
  delay(1000);
  setColor(0, 0, 255);  // blue
  delay(1000);
  setColor(80, 0, 80);  // purple
  delay(1000);
}
 
void setColor(int red, int green, int blue)
{Arduino: 1.8.10 (Windows 10), Board: "Arduino/Genuino Uno"




  #ifdef COMMON_ANODE
    red = 255 - red;
    green = 255 - green;
    blue = 255 - blue;
  #endif
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}
