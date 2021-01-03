#define PIN_LED 13
int sensorThres = 680;
int smokeA0 = A5;
char data;
void setup()
{
  // put your setup code here, to run once:

 pinMode(PIN_LED , OUTPUT);
 pinMode(smokeA0, INPUT);

Serial.begin(9600);

}

void loop() 
{
 // put your main code here, to run repeatedly:
 
int analogSensor = analogRead(smokeA0);


 /*data='3';*/
/* Serial.write(data);*/
/*data=Serial.read()
 if(Serial.read()==)
 {
  Serial.print(data);
 }*/

 /* if(Serial.available()) 
  {
  
  data = Serial.read()  ; 
  
  }*/
  

 

  /* Serial.print("data: ");
  Serial.println(data);*/
 /*Serial.print("Pin A0: ");
  Serial.println(analogSensor);*/

 /*Serial.write(data);*/
  /*data='3';
  Serial.write(data);*/
  /*data='7';*/
  data='3';
 Serial.println(data);
 /*  data='3';*/
/*
if(Serial.available()>0)
{  
   data='3';
  Serial.write(data);
}  */
 /*
if (analogSensor > sensorThres)
{
   data='3';
  Serial.write(data);
   
} */

  /*data='3';
  Serial.write(data);

  Serial.print("data: ");
  Serial.println(data);
  */
  
  // Checks if it has reached the threshold value
  
if(Serial.available())
{  
  data=Serial.read();
         
  if(data=='1')
  
  {  int count=0;
     while(count<3)
     {
       digitalWrite(PIN_LED , HIGH);
       delay(1000);
       digitalWrite(PIN_LED , LOW);    
       delay(1000);
              Serial.write('1');

       count++;
     }   
     

      /* Serial.write('1');*/
  }
  else if (data=='0')
  {
    digitalWrite(13, LOW);
   
    Serial.write('0');
  }
  

  
}

}
  
