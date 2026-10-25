<h1 style="color: #00f0ff;">🚦 AUTOMATIC TIMER </h1>

  <p style="color: #ffb700; font-family: monospace;">&gt; SEQUENTIAL SIGNAL PROTOCOL // HARDWARE SIMULATION</p>



  <p>

    <img src="https://img.shields.io/badge/SYSTEM-NOMINAL-108de0?style=for-the-badge&logo=icloud&logoColor=black" alt="Status" />

    <img src="https://img.shields.io/badge/CORE-ARDUINO_UNO-f7366d?style=for-the-badge&logo=arduino&logoColor=black" alt="Core" />

    <img src="https://img.shields.io/badge/SENSOR-ANALOG_THERMAL-success?style=for-the-badge&logo=sensor&logoColor=white" alt="Sensor" />

  </p>



  <br>



  <a href="YOUR_TINKERCAD_SHARE_LINK_HERE">

    <img src="https://img.shields.io/badge/LAUNCH-TINKERCAD_SIMULATION-f28313?style=for-the-badge&logo=autodesk&logoColor=black" alt="Tinkercad Simulation" />

  </a>



</div>



---



### 📡 System Overview

An Arduino-powered countdown alarm terminal designed to trigger continuous audio/visual alerts once a preset countdown elapses. The system remains latched in an active alarm state until manually disarmed via a physical pushbutton input.

> **Note for Visitors:** Click the orange **"LAUNCH TINKERCAD SIMULATION"** badge above to interact with the virtual circuit directly in your browser.



---



### ⚙️ Hardware Architecture & Wire Optimization

**Microcontroller:** Arduino Uno R3 (C++ Firmware)

**Manual Override Input:** Physical Pushbutton (INPUT_PULLUP configured)

**Alert Matrix:** Piezo Buzzer & Warning LED Array

---



### 💻 System Sequence & State Machine 
<p>

[ STATE 01: COUNTDOWN ]  --->  Time Reaches 0  --->  Proceed to Alarm State
                                                              │
                                                              ▼
[ STATE 02: ACTIVE ALARM ] <--- Loops Siren Continuous <--- [ TRIGGER ALERT ]
          │
          ▼  (Physical Pushbutton Pressed)
[ STATE 03: SYSTEM DISARMED / RESET ]
</p>

