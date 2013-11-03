
http://brandontilley.com/2012/03/02/controlling-an-arduino-from-nodejs.html

http://docs.nodejitsu.com/articles/advanced/buffers/how-to-use-buffers
http://www.barryvandam.com/arduino/node-js-communicating-with-arduino/




Browser >socket.io> Node.js >serialport> Arduino


get a list of your computer tty interface
ls /dev/tty.*


npm i serialport // shorthand for install 


two communications
1. from web to arduino
2. vice versa


in Arduino
– create a function that control the behavior you want
e.g., sweeping motor, blinking LED, activating analogRead, ..


0x0000 is hexdecimal.
0x indicates base 16


http://easycalculation.com/hex-converter.php

http://stackoverflow.com/questions/57803/how-to-convert-decimal-to-hex-in-javascript


