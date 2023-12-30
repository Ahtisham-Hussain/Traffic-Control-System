int lane1[]={13,12,11}; // { L1.1, L1.2, L1.3 }  ( RED, Yellow, Green )
int lane2[]={10,9,8};   // { L2.1, L2.2, L2.3 }  ( RED, Yellow, Green )
int lane3[]={7,6,5};    // { L3.1, L3.2, L3.3 }  ( RED, Yellow, Green )
int lane4[]={4,3,2};    // { L4.1, L4.2, L4.3 }  ( RED, Yellow, Green )

void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<3;i++){
    pinMode(lane1[i],OUTPUT);
    pinMode(lane2[i],OUTPUT);
    pinMode(lane3[i],OUTPUT);
    pinMode(lane4[i],OUTPUT);
  }
  for(int i=0;i<3;i++){
    digitalWrite(lane1[i],LOW);
    digitalWrite(lane2[i],LOW);
    digitalWrite(lane3[i],LOW);
    digitalWrite(lane4[i],LOW);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(lane1[2],HIGH);
  digitalWrite(lane1[1],LOW);
  digitalWrite(lane2[0],HIGH);
  digitalWrite(lane3[0],HIGH);
  digitalWrite(lane4[0],HIGH);
  digitalWrite(lane4[1],LOW);
  delay(5000);

  digitalWrite(lane1[2],LOW);
  digitalWrite(lane1[1],HIGH);
  digitalWrite(lane2[0],LOW);
  digitalWrite(lane2[1],HIGH);
  delay(2000);

  digitalWrite(lane1[0],HIGH);
  digitalWrite(lane1[1],LOW);
  digitalWrite(lane2[1],LOW);
  digitalWrite(lane2[2],HIGH);
  delay(5000);

  digitalWrite(lane2[2],LOW);
  digitalWrite(lane2[1],HIGH);
  digitalWrite(lane3[0],LOW);
  digitalWrite(lane3[1],HIGH);
  delay(2000);

  digitalWrite(lane2[0],HIGH);
  digitalWrite(lane2[1],LOW);
  digitalWrite(lane3[1],LOW);
  digitalWrite(lane3[2],HIGH);
  delay(5000);

  digitalWrite(lane3[2],LOW);
  digitalWrite(lane3[1],HIGH);
  digitalWrite(lane4[0],LOW);
  digitalWrite(lane4[1],HIGH);
  delay(2000);

  digitalWrite(lane3[0],HIGH);
  digitalWrite(lane3[1],LOW);
  digitalWrite(lane4[1],LOW);
  digitalWrite(lane4[2],HIGH);
  delay(5000);

  digitalWrite(lane1[0],LOW);
  digitalWrite(lane1[1],HIGH);
  digitalWrite(lane4[2],LOW);
  digitalWrite(lane4[1],HIGH);
  delay(2000);

}
