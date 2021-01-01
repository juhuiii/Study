
//------------------------------------------

//int G[8]={14,4,16,5,10,17,8,13};      
//int V[8]={6,7,11,15,12,2,3,9};        

int G[8]={13,8,17,10,5,16,4,14};      
int V[8]={9,3,2,12,15,11,7,6};    


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
int dd,duration=2000;

    for (dd=0;dd<duration;dd+=5) {
      
        digitalWrite(V[2], HIGH); 
        digitalWrite(G[6], LOW);   
        delayMicroseconds(duration-dd);  //  ON

        digitalWrite(V[2], LOW);
        digitalWrite(G[6], HIGH);  
        delayMicroseconds(dd);    // OFF 

    } // fade 
    delay(300);
    
}// loop
//----------------------------------




    
