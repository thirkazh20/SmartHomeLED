
/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial // Digunakan untuk monitor blynk di serial

#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "mrO7DRPIA-nTrG-1yLB9QYaSwabxMU_C"; //token yang dikirim dari blynk ke email masing masing

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "WiFi";
char pass[] = "apaandahh";

void setup() // fungsi utama dijalankan
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan passwordnya
}

void loop() // fungsi utama dijalankan berulang kali
{
  Blynk.run(); // perintah untuk menjalankan blynk
}
