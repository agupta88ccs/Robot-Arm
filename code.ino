
#include <Servo.h> 

Servo myservo;
Servo myservo2;
Servo myservo3;

int serv1h[] = {2115, 2200, 2110, 2110, 2110}; // All of these lines are the numbers in order for each servo for each letter
int serv2h[] = {1100, 980, 1015, 950, 950}; 
int serv3h[] = {1400, 1000, 1000, 1000, 1400};

int serv1e[] = {2050, 1975, 1975, 2050, 2030, 1980, 1980}; 
int serv2e[] = {1035, 1025, 1100, 1035, 975, 975, 975};
int serv3e[] = {1400, 1000, 1000, 1000, 1000, 1000, 1400}; //picks up marker at beginning and end of the letter and in between its down and writing

int serv1L[] = {1920, 1930, 1930};
int serv2L[] = {1150,1030, 1030};
int serv3L[] = {1400, 1000, 1400};

int serv1L2[] = {1855, 1865, 1865};
int serv2L2[] = {1185, 1050, 1050};
int serv3L2[] = {1400, 1000, 1400};

int serv1O[] = {1830, 1720, 1730, 1830, 1830, 1830};
int serv2O[] = {1070, 1100, 1270, 1240, 1070, 1070};
int serv3O[] = {1400, 1000, 1000, 1000, 1000, 1400};


void setup() 
{ 
  myservo.attach(9); //set up pins for servos
  myservo2.attach(10); //""
  myservo3.attach(11);//""
  
  myservo3.writeMicroseconds(1100); // pen up      // w/o these lines the servoos go crazy at the beginning
  myservo.writeMicroseconds(2115);                
  myservo2.writeMicroseconds(1100);               
  delay(300);                                    
  
 for (int i = 0; i < 5; i++){  //The 5 is because there are 5 steps in h
  myservo3.writeMicroseconds(serv3h[i]);                
  delay(1000);                 
  //for ( int j = 0; j <100; j++);
  //{
   // int 1h = (serv1h[i]+serv1h[i+1])*j/100;
 // myservo.writeMicroseconds(serv1h[i]);              // This is code that would hopefully make the writng more smooth 
    //delay(10);                                       // by adding more points in between to be more accurate
    //int 2h = (serv2h[i]+serv2h[i+1])*j/100;
 // myservo.writeMicroseconds(serv2h[i]);              
   // delay(10);
 // }
  myservo.writeMicroseconds(serv1h[i]);              
  myservo2.writeMicroseconds(serv2h[i]); 
  delay(1000);
 }
 
 for (int i = 0; i < 7; i++) {
  myservo3.writeMicroseconds(serv3e[i]);                
  delay(1000);                 
  myservo.writeMicroseconds(serv1e[i]);              
  myservo2.writeMicroseconds(serv2e[i]); 
  delay(1000);
 } 
 for (int i = 0; i < 3; i++) {
  myservo3.writeMicroseconds(serv3L[i]);                
  delay(1000);                 
  myservo.writeMicroseconds(serv1L[i]);              
  myservo2.writeMicroseconds(serv2L[i]); 
  delay(1000);
 } 
 for (int i = 0; i < 3; i++) {
  myservo3.writeMicroseconds(serv3L2[i]);                
  delay(1000);                 
  myservo.writeMicroseconds(serv1L2[i]);              
  myservo2.writeMicroseconds(serv2L2[i]); 
  delay(1000);
 } 
 for (int i = 0; i < 6; i++) {
  myservo3.writeMicroseconds(serv3O[i]);                
  delay(1000);                 
  myservo.writeMicroseconds(serv1O[i]);              
  myservo2.writeMicroseconds(serv2O[i]); 
  delay(1000);
 }  
 // below is the original hard code before i made this simpler one                    
}
/* 
  myservo3.writeMicroseconds(1100); // pen up      // h
  myservo.writeMicroseconds(2115);                // h
  // myservo.writeMicroseconds(serv1h[0]);                // h
  myservo2.writeMicroseconds(1100);               // h
  delay(1000);                                    // h
  myservo3.writeMicroseconds(1400); // pen down   // h
  delay(1000);                                    // h
  myservo.writeMicroseconds(2200);                // h
  // myservo.writeMicroseconds(serv1h[1]);
  myservo2.writeMicroseconds(980);                // h
  delay(1000);                                    // h
  myservo.writeMicroseconds(2110);                // h
  // myservo.writeMicroseconds(serv1h[2]);
  myservo2.writeMicroseconds(1015);               // h
  delay(1000);                                    // h
  myservo.writeMicroseconds(2110);                // h
  myservo2.writeMicroseconds(950);                // h
  delay(1000);                                    // h
  myservo3.writeMicroseconds(1100); // pen up      // h
  delay(1000);
  
  myservo.writeMicroseconds(2050);                // e
  myservo2.writeMicroseconds(1035);    
  delay(1000);
  myservo3.writeMicroseconds(1400); 
  delay(1000);
  myservo.writeMicroseconds(1975);                // e
  myservo2.writeMicroseconds(1025);               // e
  delay(1000);
  myservo.writeMicroseconds(1975);                // e
  myservo2.writeMicroseconds(1100);               // e
  delay(1000);
  myservo.writeMicroseconds(2050);                // e
  myservo2.writeMicroseconds(1035);  
  delay(1000);
  myservo.writeMicroseconds(2030);                // e
  myservo2.writeMicroseconds(975);     
  delay(1000);
  myservo.writeMicroseconds(1980);                // e
  myservo2.writeMicroseconds(975);     
  delay(1000);
  myservo3.writeMicroseconds(1100);
  delay(1000);
  
  myservo3.writeMicroseconds(1100);
  myservo.writeMicroseconds(1920);                // l
  myservo2.writeMicroseconds(1150);               // l
  delay(1000);
  myservo3.writeMicroseconds(1400);
  delay(1000);
  myservo.writeMicroseconds(1930);                // l
  myservo2.writeMicroseconds(1030);               // l
  delay(1000);
  myservo3.writeMicroseconds(1100);
  delay(1000);

  myservo3.writeMicroseconds(1100);
  myservo.writeMicroseconds(1855);                // 12         
  myservo2.writeMicroseconds(1185);               // l2
  delay(1000);
  myservo3.writeMicroseconds(1400);
  delay(1000);
  myservo.writeMicroseconds(1865);                // l2             
  myservo2.writeMicroseconds(1050);               // l2
  delay(1000);   
  myservo3.writeMicroseconds(1100);
  delay(1000);

  myservo3.writeMicroseconds(1100);
  myservo.writeMicroseconds(1830);                // o       
  myservo2.writeMicroseconds(1070);               // o  
  delay(1000);
  myservo3.writeMicroseconds(1400);
  delay(1000);
  myservo.writeMicroseconds(1720);                // o       
  myservo2.writeMicroseconds(1100); 
  delay(1000);                                    // o    
  myservo.writeMicroseconds(1730);                // o       
  myservo2.writeMicroseconds(1270);  
  delay(1000);
  myservo.writeMicroseconds(1830);                // o       
  myservo2.writeMicroseconds(1240);  
  delay(1000);  
  myservo.writeMicroseconds(1830);                // o       
  myservo2.writeMicroseconds(1070);  
  delay(1000);  
  myservo3.writeMicroseconds(1100
  
  );
  delay(1000);
}
*/

void loop() 
{
// 300-2500(0-180), 1400 is 90

// Need to connect battery pack bc not enough power for 3 servo
} 





 
