#define ROJO 3
#define AMARILLO 4
#define VERDE 5

#define POSITIVO

#ifdef POSITIVO
  #define ENCENDIDO HIGH
  #define APAGADO LOW
#else
  #define ENCENDIDO LOW
  #define APAGADO HIGH
#endif

void setup() {
  // put your setup code here, to run once:
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(ROJO, HIGH);
   digitalWrite(VERDE, LOW);
   delay(1000);
   digitalWrite(AMARILLO, HIGH);
   digitalWrite(ROJO, LOW);
   delay(1000);
   digitalWrite(VERDE, HIGH);
   digitalWrite(AMARILLO, LOW);
   delay(1000);
   
}
