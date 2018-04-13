import subprocess
import os

main = True
rec = False

snowboyProc = subprocess.Popen(['python3','demo.py','Knightbot.pmdl'])
snow = True


while main:
    while snow:
        #subprocess.Popen.poll will return None if the process is running
        sbStatus = subprocess.Popen.poll(snowboyProc)
        sbStatusString = str(sbStatus)
        if sbStatusString != "None":
            recordProc = subprocess.Popen(['python3','audio_record.py'])
            snow = False
            rec = True
    while rec:
        arStatus = subprocess.Popen.poll(recordProc)
        arStatusString = str(arStatus)
        if arStatusString != "None":
            snowboyProc = subprocess.Popen(['python3','demo.py','Knightbot.pmdl'])
            os.system("python detect_intent_audio.py --project-id knightbot-c9389 --audio-file-path /home/pi/snowboy/examples/Python3/file.wav")

            snow = True
            rec = False

