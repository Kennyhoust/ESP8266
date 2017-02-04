

#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306.h" // alias for `#include "SSD1306Wire.h"`


SSD1306  display(0x3c, D4, D3);


void setup(){
  // Initialising the UI will init the display too.
  display.init();

  display.flipScreenVertically();
  display.setFont(ArialMT_Plain_16);
  display.setTextAlignment(TEXT_ALIGN_LEFT);

}

void displayTempHumid(){


  // Check if any reads failed and exit early (to try again).
  display.clear();
  display.drawString(0, 0, "test");

}
void loop(){
  display.display();
  delay(2000);
}


