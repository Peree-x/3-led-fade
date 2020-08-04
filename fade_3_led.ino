int pin9 = 9;
int pin6 = 6;
int pin5 = 5;

int fade = 5;

int br1 = 5;
int br2 = 0;
int br3 = 0;
void setup() {
  pinMode(pin9, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin5, OUTPUT);
}

void loop() {
  
  if((br1 <= 0 || br1 <= 250) || (fade == -5 && br2 <= 0)){
      br1 = br1 + fade;
      delay(10);
    }
  if(((fade == -5 && br3 <= 0)  || (br2 <= 0 || br2 <= 250)) && br1 == 255){
    br2 = br2 + fade;
    delay(10);
  }
  if(br2 == 255 && br3 != -5){
    br3 = br3 + fade;
    delay(10);
  }
  if(br3 == 255){
    fade = -fade;
    delay(30);
  } 
  if(br1 == 0){
    fade = -fade;
  }
  delay(30);
}
