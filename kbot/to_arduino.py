import serial
arduinoSerialData = serial.Serial('/dev/ttyACM0',9600)

def blink(pin):
    arduinoSerialData.write('pin')
    return



