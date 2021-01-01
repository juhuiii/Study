
#define data1 {\       
  {0,0,1,0,0,1,0,0},\
  {0,1,0,1,1,0,1,0},\
  {1,0,0,0,0,0,0,1},\
  {1,0,0,0,0,0,0,1},\
  {1,0,0,0,0,0,0,1},\
  {0,1,0,0,0,0,1,0},\
  {0,0,1,0,0,1,0,0},\
  {0,0,0,1,1,0,0,0} \
}

#define data2 {\      
  {0,0,1,0,0,1,0,0},\
  {0,1,1,1,1,1,1,0},\
  {1,1,0,0,0,0,1,1},\
  {1,1,0,0,0,0,1,1},\
  {1,1,0,0,0,0,1,1},\
  {0,1,1,0,0,1,1,0},\
  {0,0,1,1,1,1,0,0},\
  {0,0,0,1,1,0,0,0} \
}

#define data3 {\      
  {0,0,1,0,0,1,0,0},\
  {0,1,1,1,1,1,1,0},\
  {1,1,1,1,1,1,1,1},\
  {1,1,1,0,0,1,1,1},\
  {1,1,1,0,0,1,1,1},\
  {0,1,1,1,1,1,1,0},\
  {0,0,1,1,1,1,0,0},\
  {0,0,0,1,1,0,0,0} \
}

#define data4 {\      
  {0,0,1,0,0,1,0,0},\
  {0,1,1,1,1,1,1,0},\
  {1,1,1,1,1,1,1,1},\
  {1,1,1,1,1,1,1,1},\
  {1,1,1,1,1,1,1,1},\
  {0,1,1,1,1,1,1,0},\
  {0,0,1,1,1,1,0,0},\
  {0,0,0,1,1,0,0,0} \
}

//------------------------------------------
byte patterns[4][8][8]={data1,data2,data3,data4};
int number = 4;

int G[]={13,8,17,10,5,16,4,14};      // HIGH = ON
int V[]={9,3,2,12,15,11,7,6};        // LOW  = ON

//-------------------------------

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
  //Serial.begin(9600);
}


//----------------------------------
void loop() {
int mm,nn,pp,qq;


  for (pp=0;pp<number;pp++) {
  //for (pp=number-1;pp>=0;pp--) {
       
    for (qq=0;qq<30;qq++) {  // 반복 
      
      for (mm=0;mm<8;mm++) {
        
        for (nn=0;nn<8;nn++) {
          digitalWrite(V[nn], patterns[pp][nn][mm]); 
        }
        digitalWrite(G[mm], LOW);   // ON
        
        delay(1);
        
        for (nn=0;nn<8;nn++) {
          digitalWrite(V[nn], LOW);
        } 
        digitalWrite(G[mm], HIGH);  // OFF

      }   //  array
      
    }     // multi
    
  }  // pattern


}// loop
//----------------------------------


//----------------------------------
void LED_ON(int xx, int yy) {

      digitalWrite(xx, HIGH); 
      digitalWrite(yy, LOW); 
      delay(1);
      digitalWrite(xx, LOW); 
      digitalWrite(yy, HIGH);  

}
//----------------------------------



    
