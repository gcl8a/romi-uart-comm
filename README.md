# romi-uart-comm

Sample codes to run on an ESP32 and ATmega32U4 (e.g., as on a [Pololu Romi](https://www.pololu.com/docs/0J69) or Arduino Leonardo) to test UART connectivity. 
Each code basically takes whatever it reads on one of its UARTs and writes it out to the other. That way, you can use the Serial Monitor on your computer to send messages and test if they are being received by the other device.
