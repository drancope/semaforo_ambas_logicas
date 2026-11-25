#include "Arduino.h"
#include <Adafruit_NeoPixel.h>

#define ROJO 3
#define AMARILLO 4
#define VERDE 5

//#define POSITIVO

#ifdef POSITIVO
  #define ENCENDIDO HIGH
  #define APAGADO LOW
#else
  #define ENCENDIDO LOW
  #define APAGADO HIGH
#endif

#define PIN        16 
#define NUM_LEDS 1

Adafruit_NeoPixel led(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  led.begin();
  led.setBrightness(30); // Brillo moderado (de 0 a 255)
  led.show();            // Aseguramos que empiece apagado
  // put your setup code here, to run once:
  pinMode(ROJO, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  led.setPixelColor(0, led.Color(0, 255, 0));
  led.show();
  delay(20);
  led.clear();
  led.show();
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
