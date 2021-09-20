void setup() {
  Serial.begin(9600);
  pinMode(9,INPUT);     // Sw pin
  digitalWrite(9,HIGH);

}

void loop() {
  int z=0;
  int x=analogRead(A0);
  int y=analogRead(A1);
  int xpos,ypos;  
  if(x>450 and x<550)   //when joystick is in center position
 xpos=0;
  if(x>=550)                     // when moved up 
  xpos=map(x,550,1023,0,80); 
  if(x<=450)                   // when moved down
  xpos=map(x,450,0,0,-80);   
  if(y>450 and y<550)       //when joystick is in center position
  ypos=0; 
  if(y>=550)                    // when moved right
  ypos=map(y,550,1023,0,80);  
  if(y<=450)                  // when moved left
  ypos=map(y,450,0,0,-80); 
  if(digitalRead(9)==LOW)   // when SW is pressed 
  z=1;
  else
  z=0;
  Serial.print(xpos);    // print the data and separating by ":"
  Serial.print(":");
  Serial.print(ypos);
  Serial.print(":");
  Serial.println(z);
  delay(120);         // for normal operation
 
}