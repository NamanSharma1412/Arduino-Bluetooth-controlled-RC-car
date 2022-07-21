char vale;
#define en1 3
#define in1 9
#define in2 10
#define in3 11
#define in4 12
#define en2 6
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(en1,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(en2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    vale = Serial.read();
    Serial.println(vale);
  }
    if(vale=='F')
    {
      analogWrite(en1,65);
      analogWrite(en2,65);
     
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
    }
    else if (vale=='B')
    {
      analogWrite(en1,65);
      analogWrite(en2,65);
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
    }
    else if (vale=='L')
    {
      analogWrite(en1,65);
      analogWrite(en2,65);
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW); 
    }
    else if (vale=='R')
    {
      analogWrite(en1,65);
      analogWrite(en2,65);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH); 
    }
    else if (vale=='S')
    {
      digitalWrite(en2,LOW);
      digitalWrite(en1,LOW);
    }
}