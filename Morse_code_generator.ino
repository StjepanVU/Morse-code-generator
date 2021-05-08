#define outputLED 13 // LED output pin
#define outputBUZ 11 //  Buzzer pin


void setup() {
 pinMode(outputLED,OUTPUT);
 pinMode(outputBUZ,OUTPUT);
 Serial.begin(9600);
}

String letters="";
char letter;


void loop() {

  if(Serial.available()>0){
   
    letter= Serial.read();
    
    
    if(letter=='a'||letter=='A'){dot();dash();}
   
    else if(letter=='b'||letter=='B'){dash();dot();dot();dot();} //B
    
    else if(letter=='c'||letter=='C'){dash();dot();dash();dot();} //C
    
    else if(letter=='d'||letter=='D'){dash();dot();dot();} //D
    
    else if(letter=='e'||letter=='E'){dot();}
    
    else if(letter=='f'||letter=='F'){dot();dot();dash();dot();}
    
    else if(letter=='g'||letter=='G'){dash();dash();dot();}

    else if(letter=='h'||letter=='H'){dot();dot();dot();dot();}

    else if(letter=='i'||letter=='I'){dot();dot();}

    else if(letter=='j'||letter=='J'){dot();dash();dash();dash();}

    else if(letter=='k'||letter=='K'){dash();dot();dash();}

    else if(letter=='l'||letter=='L'){dot();dash();dot();dot();}

    else if(letter=='m'||letter=='M'){dash();dash();}

    else if(letter=='n'||letter=='N'){dash();dot();}

    else if(letter=='o'||letter=='O'){dash();dash();dash();}

    else if(letter=='p'||letter=='P'){dot();dash();dash();dot();}
    
    else if(letter=='q'||letter=='Q'){dash();dash();dot();dash();}

    else if(letter=='r'||letter=='R'){dot();dash();dot();}

    else if(letter=='s'||letter=='S'){dot();dot();dot();}

    else if(letter=='t'||letter=='T'){dash();}

    else if(letter=='u'||letter=='U'){dot();dot();dash();}

    else if(letter=='v'||letter=='V'){dot();dot();dot();dash();}

    else if(letter=='w'||letter=='W'){dot();dash();dash();}

    else if(letter=='x'||letter=='X'){dash();dot();dot();dash();}

    else if(letter=='y'||letter=='Y'){dash();dot();dash();dash();}

    else if(letter=='z'||letter=='Z'){dash();dash();dot();dot();}

    else if(letter=='.'){dot();dash();dot();dash();dot();dash();}

    else if(letter==','){dash();dash();dot();dot();dash();dash();}

    if(letter!='\n'){
      letters+=letter;
    }
    
    
 }
}

void dot(){
  beep(300,outputBUZ);
  digitalWrite(outputLED,HIGH);
  delay(300);
  digitalWrite(outputLED,LOW);
  delay(300);
  }

///////////////
//1 DASH=3 DOTS: delay ce onda biti 3 puta veci
///////////////
void dash(){
  beep(900,outputBUZ);
  digitalWrite(outputLED,HIGH);
  delay(900);
  digitalWrite(outputLED,LOW);
  delay(900);
  }
  
void beep(byte delayms,int pin){
  analogWrite(pin,120);
  delay(delayms);
  analogWrite(pin,0);
  delay(delayms); 
  }
