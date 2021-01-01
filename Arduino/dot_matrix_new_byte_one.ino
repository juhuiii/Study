int data[8][8]={\       
  {0,0,0,1,1,1,0,0},\
  {0,0,0,1,1,1,0,0},\
  {0,0,0,0,1,0,0,1},\
  {1,1,1,1,1,1,1,1},\
  {1,0,0,0,1,1,0,0},\
  {0,0,0,1,0,0,1,0},\
  {0,0,1,0,0,0,0,1},\
  {0,1,0,0,0,0,0,1} \
};

int G[8]={13,8,17,10,5,16,4,14};      // LOW   = ON
int V[8]={9,3,2,12,15,11,7,6};        // HIGH  = ON

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
int mm,nn;

      for (mm=0;mm<8;mm++) {
        for (nn=0;nn<8;nn++) {
          
            if ( data[nn][mm] == 1) {         
              LED_ON(V[nn],G[mm]);
            }
          
        } // array
      }   //  array
     
}// loop
//----------------------------------

void LED_ON(int xx, int yy) {

      digitalWrite(xx, HIGH); // ON
      digitalWrite(yy, LOW); 
      delay(1);  // 켜지는 시간 
      digitalWrite(xx, LOW);  // OFF
      digitalWrite(yy, HIGH); 
}
//----------------------------------



    
