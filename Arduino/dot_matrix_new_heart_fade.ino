

int data[8][8]={        // heart data 
  {0,0,1,0,0,1,0,0},
  {0,1,1,1,1,1,1,0},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {1,1,1,1,1,1,1,1},
  {0,1,1,1,1,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,1,1,0,0,0} 
};

//------------------------------------------

int G[8]={13,8,17,10,5,16,4,14};      // 
int V[8]={9,3,2,12,15,11,7,6};        // 

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
int mm,nn,dd,qq;

    for (dd=0;dd<2;dd++) {
      
      for (qq=0;qq<30;qq++) {
      
        for (mm=0;mm<8;mm++) {      
        for (nn=0;nn<8;nn++) {
          digitalWrite(V[nn], data[nn][mm]); 
        }
        digitalWrite(G[mm], LOW);   
        delay(2-dd);  //  ON
        for (nn=0;nn<8;nn++) {
          digitalWrite(V[nn], LOW);
        } 
        digitalWrite(G[mm], HIGH);  
        delay(dd);    // OFF 
        }   //  array
        
      }     // multi
    } // fade 
    
}// loop
//----------------------------------




    
