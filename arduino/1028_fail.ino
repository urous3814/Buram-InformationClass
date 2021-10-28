void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  if(Serial.available()){
    Serial.write('d');
    String input=Serial.readString();
    if(input=='a'){
      digitalWrite(13,HIGH);
      Serial.write('1');
    }
    if(input=='d'){
      digitalWrite(13,LOW);
      Serial.write('1');
    }
  }
}
