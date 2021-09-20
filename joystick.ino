#define pinVRx A1
#define pinVRy A0
#define pinSW 9

void setup() {
  pinMode(pinVRx, INPUT);
  pinMode(pinVRy,INPUT);
  pinMode(pinSW, INPUT);

  Serial.begin(9600);
}

void loop() {

  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  bool statusSW = analogRead(pinSW);

  Serial.print("Valor VRx: ");
  Serial.print(valorVRx);

  Serial.print("Valor VRy: ");
  Serial.print(valorVRy);

if (!statusSW) {
  Serial.println(" Botao: [solto] ");
} else {
  Serial.println(" Botao: [apertado] ");
}
  
}
