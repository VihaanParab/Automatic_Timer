const int BUZZERpin=9;
const int LEDpin=8;
const int BUTTONpin=2;

bool alarmtriggered=false;
unsigned long targetime=15000;

void setup(){
  pinMode(BUTTONpin,INPUT_PULLUP);
  pinMode(BUZZERpin,OUTPUT);
  pinMode(LEDpin,OUTPUT);
  Serial.begin(9600);
  Serial.print("Timer started! Alarm will ring after the interval.");
}

void loop(){
  if(!alarmtriggered & millis() >= targetime){
    alarmtriggered=true;
    Serial.print("TIME'S UP! ALARM RINGING!");
  }
  
  if(alarmtriggered){
    digitalWrite(LEDpin,HIGH);
    tone(BUZZERpin,1000);
    delay(150);
    noTone(BUZZERpin);
    digitalWrite(LEDpin,LOW);
    delay(150); 
  
  if(digitalRead(BUTTONpin)== LOW){  
    /* this code block is inside the main if because we are only
    concerned with it if the alarm is going off */
    alarmtriggered=false;
    noTone(BUZZERpin);
    digitalWrite(LEDpin,LOW);
    Serial.print("Alarm stopped by user. Resetting timer.");
    
    targetime=millis()+15000;
    delay(500);
  }
  }
}