/*****************************************************************************/
//	Auteur:				    Guillaume Pelletier
//	Description:		  Prototype écran OLED
//	Date de creation:	Octobre 2020
//	But:				      Vérifier le fonctionnement d'un l'écran OLED
/*****************************************************************************/
#include <Wire.h>                   //Librairie requise pour communiquer avec les appareils I2C
#include <Arduino.h>                //Librairie pour le SDK Arduino
#include <Adafruit_GFX.h>           //Librairie requise pour l'affichage graphique sur l'OLED
#include <Adafruit_SSD1306.h>       //Librairie requise pour l'affichage graphique sur l'OLED


#define SCREEN_WIDTH 128 // Largeur en pixel de l'OLED
#define SCREEN_HEIGHT 64 // Hauteur en pixel de L'OLED

// Declaration pour un ecran I2C SSD1306
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

//Affichage des données à l'aide des méthodes des librairies
void setup() {
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);}

    display.clearDisplay();

    display.setTextSize(1);
    display.setTextColor(WHITE);

    display.setCursor(0, 40);
    display.println("IP: 192.168.0.121");

    display.setCursor(0, 20);
    display.println("Aquarium de Guigui");

    display.setCursor(0, 50);
    display.println("Temp: 15 C");

    display.display(); 
}

void loop() {
}