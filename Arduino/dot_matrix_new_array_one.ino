
int G[]={13,8,17,10,5,16,4,14};      // LOW = ON
int V[]={9,3,2,12,15,11,7,6};        // HIGH  = ON

int xx;
int yy;

void setup() {
  int mm;
  for (mm=0;mm<8;mm++) {
     pinMode(V[mm], OUTPUT);
     pinMode(G[mm], OUTPUT);
  }

  for (mm=0;mm<8;mm++) {
     digitalWrite(G[mm], HIGH);  // off
     digitalWrite(V[mm], LOW);   // off
  }

}

//----------------------------------
void loop() {
  int mm,nn,pp,qq;
 
      for (mm=0;mm<8;mm++) {
        for (nn=0;nn<8;nn++) {

          for (qq=0;qq<30;qq++) {
            LED_ON(V[nn],G[mm]);
          }     // multi
   
        } // array V
      }   // array G
        
}// loop
//----------------------------------


//----------------------------------
void LED_ON(int xx, int yy) {

      digitalWrite(xx, HIGH); // ON
      digitalWrite(yy, LOW); 
      delay(5);
      digitalWrite(xx, LOW);  // OFF
      digitalWrite(yy, HIGH);  

}
//----------------------------------



    
