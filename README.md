# ESP8266 Temperature and Humidity Sensor Module (DHT11/DHT22) Project

#### Project Overview
This project demonstrates how to interface a DHT11 or DHT22 temperature and humidity sensor with an ESP8266 microcontroller to measure and display temperature and humidity readings. These sensors are widely used in various applications requiring environmental monitoring.

#### Components Needed
- **ESP8266 Microcontroller (NodeMCU)**
- **DHT11 or DHT22 Temperature and Humidity Sensor**
- **Jumper Wires**
- **Breadboard**

#### Block diagram


#### Circuit Setup
1. **Connecting the DHT Sensor to ESP8266:**
   - Connect the VCC pin of the DHT sensor to the 3.3V pin on the ESP8266.
   - Connect the GND pin of the DHT sensor to a ground (GND) pin on the ESP8266.
   - Connect the data pin of the DHT sensor to the GPIO pin D4 on the ESP8266.
   - If using the DHT22 sensor, ensure the sensor's type is defined correctly in the code.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.
   - Initialize the DHT sensor object with the correct pin and sensor type using `DHT dht(dhtPin, DHTTYPE)`.
   - Begin sensor operation in the `setup()` function using `dht.begin()`.

2. **Operation:**
   - In the `loop()` function:
     - Add a delay of 2 seconds between measurements to allow the sensor to stabilize.
     - Read the temperature and humidity values using `dht.readTemperature()` and `dht.readHumidity()`.
     - Check for failed readings using `isnan()` function and handle errors by printing an error message to the Serial Monitor.
     - Print the temperature in degrees Celsius and humidity percentage to the Serial Monitor.

#### Applications
- **Environmental Monitoring:** Measure and log temperature and humidity data for climate control and environmental studies.
- **Home Automation:** Integrate temperature and humidity sensors in home automation systems for heating, ventilation, and air conditioning (HVAC) control.
- **Weather Stations:** Use temperature and humidity sensors in DIY weather stations to monitor local weather conditions.

#### Notes
- **Sensor Selection:** Ensure the correct sensor type (DHT11 or DHT22) is defined in the code.
- **Delay Between Readings:** The DHT sensor requires a delay between readings to provide accurate data.
- **Serial Output:** Use the Serial Monitor to observe temperature and humidity readings and verify the correct operation of the sensor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Temperature and Humidity Sensor Module DHT11/DHT22](https://projectslearner.com/learn/esp8266-temperature-and-humidity-sensor-module-dht-11-dht22)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner