/*
 By:Farkad Adnan
 E-mail: farkad.hpfa95@gmail.com
 inst : farkadadnan
 #farkadadnan , #farkad_adnan , فرقد عدنان#
 FaceBook: كتاب عالم الاردوينو
 inst : arduinobook
 #كتاب_عالم_الاردوينو  #كتاب_عالم_الآردوينو 
 */
#include "max6675.h"
int thermoSO = 4; 
int thermoCS = 5; 
int thermoSCK = 6;  
float temp1 = 0;
MAX6675 thermocouple(thermoSCK, thermoCS, thermoSO);
void setup() {
  Serial.begin(9600); 
   delay(500); 
}
void loop() {
  temp1 = thermocouple.readCelsius();
     Serial.println(temp1);               
        if(temp1 < 40   ){
          Serial.println("normal"); 
        delay(1000);
        } 
        if(temp1 > 40)
        {
          Serial.println("High");
           delay(1000);
        } else 
        delay(500);
}
