import keyboard
import serial

output = serial.Serial("COM3",9600)
while True:
	if keyboard.is_pressed("w") :
		output.write(b'w')
	else:
		output.write(b's')


#important note: you have to clear the python code and run an empty
#code then compile the upload the arduino code , then run python
#remember to document this
#note that we get unstable state at the first instance