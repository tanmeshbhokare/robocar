
int r_mtr_n = 9; // assign motor pins to arduino

int r_mtr_p = 10; 

int l_mtr_p = 11; 

int l_mtr_n = 12; 



int incomingByte = 0;
int l=13;
void setup()

{

pinMode(r_mtr_n, OUTPUT);
pinMode(l,OUTPUT);

pinMode(r_mtr_p, OUTPUT);

pinMode(l_mtr_p, OUTPUT);

pinMode(l_mtr_n, OUTPUT);


digitalWrite(r_mtr_n, LOW);

digitalWrite(r_mtr_p, LOW);
  
digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, LOW);


Serial.begin(9600);

Serial.println("start");

}

void loop()

{

if (Serial.available() > 0) {

incomingByte = Serial.read();

}

switch(incomingByte)

{

case 'S':                  // control for stop

digitalWrite(r_mtr_n, LOW); 

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, LOW);

Serial.println("Stop\n");

incomingByte='*';

break;

case 'R':               // control for right

digitalWrite(r_mtr_n, HIGH); 

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, HIGH);

digitalWrite(l_mtr_n, LOW);

Serial.println("right\n");

incomingByte='*';

break;

case 'L': 

digitalWrite(r_mtr_n, LOW); // control for left

digitalWrite(r_mtr_p, HIGH);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, HIGH);

Serial.println("left\n");

incomingByte='*';

break;

case 'F': 

digitalWrite(r_mtr_n, HIGH); // control for forward

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, HIGH);

Serial.println("forward\n");

incomingByte='*';

break;

case 'B': 

digitalWrite(r_mtr_n, LOW); // control for backward

digitalWrite(r_mtr_p, HIGH);

digitalWrite(l_mtr_p, HIGH);

digitalWrite(l_mtr_n, LOW);

Serial.println("backwards\n");

incomingByte='*';

break;

case 'f':

digitalWrite(r_mtr_n, LOW); // control for stop

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, LOW);

Serial.println("Stop\n");

incomingByte='*';

break;

case 'd':

digitalWrite(r_mtr_n, HIGH); // control for right

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, HIGH);

digitalWrite(l_mtr_n, LOW);

Serial.println("right\n");

incomingByte='*';

break;

case 'a':

digitalWrite(r_mtr_n, LOW); // control for left

digitalWrite(r_mtr_p, HIGH);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, HIGH);

Serial.println("left\n");

incomingByte='*';

break;

case 'w':

digitalWrite(r_mtr_n, HIGH); // control for forward

digitalWrite(r_mtr_p, LOW);

digitalWrite(l_mtr_p, LOW);

digitalWrite(l_mtr_n, HIGH);

Serial.println("forward\n");
digitalWrite(l,HIGH);
incomingByte='*';

break;

case 's':

digitalWrite(r_mtr_n, LOW); // control for backward

digitalWrite(r_mtr_p, HIGH);

digitalWrite(l_mtr_p, HIGH);

digitalWrite(l_mtr_n, LOW);

Serial.println("backwards\n");

incomingByte='*';

break;

delay(5000);

}

}
