

#define encA 2
#define encB 3
#define PWM 5
#define IN1 6
#define IN2 7


void setup() {
  Serial.begin(9600);

  pinMode(encA,INPUT);
  pinMode(encB,INPUT);
  pinMode(PWM,OUTPUT);
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  
}

void loop() {
  int pwmV = 255;
  int dir = 1;
  setMotor(dir,pwmV,PWM,IN1,IN2);


 
 

}

void setMotor(int dir, int pwmVal, int pwm, int in1, int in2){
  analogWrite(pwm,pwmVal);
  if(dir==1){
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
  }
  else if(dir==-1){
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);
  }
  else{
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
  }
}
