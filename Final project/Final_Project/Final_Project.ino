int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {

  RGB_color(255, 255, 125); // Raspberry
  delay(4000);
  RGB_color(255, 102, 255); // pink
  delay(4000);
  RGB_color(255, 255, 255); // White
  delay(4000);
  RGB_color(153, 255, 255); // blue
  delay(4000);
  RGB_color(255, 255, 125); // Raspberry
  delay(4000);
  RGB_color(102, 255, 102); // green
  delay(4000);
 
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
