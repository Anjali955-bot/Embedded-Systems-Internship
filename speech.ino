# Task 4 - Speech Recognition System

import speech_recognition as sr

recognizer = sr.Recognizer()

print("====================================")
print("   Speech Recognition System")
print("====================================")
print("Say 'ON' to turn device ON")
print("Say 'OFF' to turn device OFF")
print("Say 'EXIT' to stop the program")

while True:
    try:
        with sr.Microphone() as source:
            print("\nListening...")
            recognizer.adjust_for_ambient_noise(source)
            audio = recognizer.listen(source)

            command = recognizer.recognize_google(audio)
            command = command.lower()

            print("You said:", command)

            if "on" in command:
                print("Device is TURNED ON")

            elif "off" in command:
                print("Device is TURNED OFF")

            elif "exit" in command:
                print("Exiting system...")
                break

            else:
                print("Command not recognized")

    except Exception as e:
        print("Could not understand audio")
