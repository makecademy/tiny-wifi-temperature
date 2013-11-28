/* 
*  Test for the TMP36 sensor
*  Writtent by Marco Schwartz for Open Home Automation
*/
                                         
void setup(void)
{
  Serial.begin(115200);
}
  
void loop(void)
{
  
    // Measure the temperature
    int sensorValue = analogRead(A4);
    float milliVoltsValue = sensorValue * 5000. / 1024.;
    float temperature = (milliVoltsValue - 500.)/10.;
 
    // Print the result
    Serial.println(temperature);
    delay(100);
}
