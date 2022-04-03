# K-Type-Thermocouple-with-MAX-6675-Amplifier
Chapter 3 code_Project_79 The second part 2 of "The Arduino World Book" code_Project_79
- code_Project_79
-  By:Farkad Adnan فرقد عدنان - 
 -E-mail: farkad.hpfa95@gmail.com 
-inst : farkadadnan 
- #farkadadnan , #farkad_adnan , فرقد عدنان# 
- FaceBook: كتاب عالم الاردوينو 
- inst : arduinobook
1. #كتاب_عالم_الاردوينو
2. #كتاب_عالم_الآردوينو

* facebook : https://www.facebook.com/profile.php?id=100002145048612-
* instagram:  https://www.instagram.com/farkadadnan/
* linkedin : https://www.linkedin.com/in/farkad-adnan-499972121/

 <p>
 <a href='https://mobile.twitter.com/farkadadnan'>
        <img alt="Twitter Follow" src="https://img.shields.io/twitter/follow/farkadadnan?label=%40farkadadnan&style=social" alt='Twitter' align="center"/>
    </a>
</p>

# K-Type Thermocouple with MAX 6675 Amplifier

 ![ME097_01](https://user-images.githubusercontent.com/35774039/161411490-3f77cb6d-66bb-4237-81a2-267abfccd446.png)

# Introduction
-وحدة MAX6675 الحرارية الحرارية عبارة عن محول رقمي يتراوح نطاقه من 0 درجة مئوية إلى 1024 درجة مئوية عند إقرانه بمزدوجة حرارية مناسبة من النوع K.
-The MAX6675 Thermocouple Temperature Module is a digital converter that has a range of 0°C up to 1024°C when paired with a suitable K-Type thermocouple.

# What is a K-Type Thermocouple?
A thermocouple is a device that consists of two different electrical conductors that form an electrical junction—thermal junction. The change in temperature at the junction creates a slightly but measurable voltage at the reference junction that can be used to calculate the temperature.

# KEY FEATURES OF MAX6675 THERMOCOUPLE TEMPERATURE MODULE:
Module uses MAX6675 IC which can handle readings from 0°C to 1024°C
0.25°C resolution, ±3°C accuracy
Compatible with K-Type thermocouples that use spade lug connections
Uses 3-wire SPI interface
3.0 – 5.5V operation

# Module Connections
When hooking up a thermocouple, the red lead of the thermocouple typically attaches to the ‘+’ terminal on the module.  If the reading goes down when temperature increases, then the leads should be reversed.

1 x 5 Header

- GND =  Connect to system ground.  This ground needs to be in common with the MCU.
- VCC =   Connect to 3.0 – 5.5V.  Typically connected to MCU operating power.
- SCK =   Serial Clock Input.  Connect to any digital pin on MCU.
- CS =      Chip Select.  Connect to any digital pin on MCU.
- SO  =     Serial Data Output.  Connect to any digital pin on MCU.
![Capture](https://user-images.githubusercontent.com/35774039/161411598-3a291d32-85aa-47c0-9566-25f5f87d3423.JPG)
![Capture1](https://user-images.githubusercontent.com/35774039/161411601-15024d14-8397-4c86-94d3-4a7d533ed8af.JPG)

# MAX6675 Amplifier
![asa](https://user-images.githubusercontent.com/35774039/161411614-ff37ad06-506e-45fd-abed-36a93185d5be.JPG)
- Usually, you can get a pack with a k-type thermocouple and the MAX6675 amplifier. Here’s a list of the MAX6675 most relevant features. For a more detailed description, please consult the  [MAX6675 datasheet](https://datasheets.maximintegrated.com/en/ds/MAX6675.pdf).



