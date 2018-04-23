from flask import Flask
from flask_assistant import Assistant, ask, tell
import logging
import sys
import os
import serial
sys.path.append(os.path.abspath("/home/pi/kbot"))
from get_office_hours import give_office_hours
#arduinoSerialData = serial.Serial('/dev/ttyACM0',9600)
#arduinoSerialData2 = serial.Serial('/dev/ttyACM0',9600)

logging.getLogger('flask_assistant').setLevel(logging.DEBUG)



app = Flask(__name__)
assist = Assistant(app, '/')


@assist.action('greeting')
def greet_and_start():
    speech = "Hey! What can I help you with?"
    return ask(speech)

@assist.action('get-office-hours')
def ask_for_hours(professor):
    print(professor)
    num = '0.0.1'
    #arduinoSerialData.write(num.encode())
    speech = give_office_hours(professor)
    return tell(speech)

@assist.action('blink')
def rotate_servo():
    num = '1.0.0'
    #arduinoSerialData.write(num.encode())
    speech = "Blinking"
    return tell(speech)

@assist.action('rotate')
def rotate_servo():
    num = '0.1.0'
    #arduinoSerialData.write(num.encode())
    speech = "Rotating servo"
    return tell(speech)

@assist.action('lizard')
def rotate_servo():
    num = '0'
    #arduinoSerialData.write(num.encode())
    speech = "Rotating servo"
    return tell(speech)

@assist.action('gugu')
def swank():
    speech = "swank"
    return tell(speech)


@assist.action('fallback', is_fallback = True)
def confused():
    num = '1'
    speech =  "What was that?"
    #arduinoSerialData.write(num.encode())
    return tell(speech)








if __name__ == '__main__':
    app.run(debug=True)
