
/*
 * Developed by Abdullah Al Mamun
 *  March 2015
 */
/*k=loopingUpDown(50,2);
k=upDown(100,4);
k=loopingDownUp(50,2);
k=downUp(100,4);
k=loopingUpDown(50,4);
k=upDownUpDown(200,5);
 */
 
/*k=loopingDownUp(20,5);
k=upDown(200,5);
k=frontBack(200,5);
k=rightLeft(200,5);
k=loopingUpDown(20,5);
k=downUp(200,5);
k=upDownUp(200,5);
k=rotational(200,5);
k=flash(200,5);
k=leftRight(200,5);
k=frontBackFront(200,5);
k=rightLeftRight(100,5);
*/
 //(1) for loop lighting from up to down style
int loopingUpDown(int wait, int times) 
{
   for ( int c=1;c<=times;c++){
   for( int b=2;b<5;b++)
  {
   digitalWrite(b,LOW);
   
  for( int a=13;a>4;a--)
  {
  digitalWrite(a, HIGH);   
  delay(wait);              
  digitalWrite(a, LOW);    
  delay(wait);
  }
  
  digitalWrite(b, HIGH);
  }  
 }
}   

// (2)for loop lighting from down to up style
int loopingDownUp(int wait, int times)
{
   for ( int c=1;c<=times;c++){
   for( int b=4;b>1;b--)
  {
   digitalWrite(b,LOW);
   
  for( int a=13;a>4;a--)
  {
  digitalWrite(a, HIGH);   
  delay(wait);              
  digitalWrite(a, LOW);    
  delay(wait);
  }
  
  digitalWrite(b, HIGH);
  }  
 }
}      



//(3)lighting ftom up to down
int upDown(int wait,int times) 
{
 for ( int c=1;c<=times;c++)
 {
  for( int b=2;b<5;b++){
  digitalWrite(b, LOW);
  
  for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);
   }
   delay(wait);
   
  for( int a=13;a>4;a--) {
  digitalWrite(a,LOW);
   }
digitalWrite(b, HIGH);
}   
}
}


// (4)lighting from up to down
int downUp(int wait,int times) 
{
for ( int c=1;c<=times;c++)
 {
   for( int b=4;b>1;b--){
     digitalWrite(b, LOW);
  
  for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);
   }
   delay(wait);
   
  for( int a=13;a>4;a--) {
  digitalWrite(a,LOW);
   }
digitalWrite(b, HIGH);
 
 }
}
}


// (5)lighting from up to down and down to up
int upDownUp(int wait,int times) 
{
for ( int c=1;c<=times;c++){
 int count=0;
 for( int b=2;b<5;b++){
  digitalWrite(b, LOW);
  
  for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);
   }
   delay(wait);
   
  for( int a=13;a>4;a--) {
  digitalWrite(a,LOW);
   }
digitalWrite(b, HIGH);
 
count++;
 }
  
  if(count=4){
  for( int b=4;b>1;b--){
     digitalWrite(b, LOW);
  
  for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);
   }
   delay(wait);
   
  for( int a=13;a>4;a--) {
  digitalWrite(a,LOW);
   }
digitalWrite(b, HIGH);
  }
 }
}
}


//(6)Rotating lighting form in to out
int rotational(int wait,int times){
for ( int c=1;c<=times;c++){
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
}
for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);
  delay(wait);
  digitalWrite(a,LOW);
   }
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
}
}
}


//(7)flashing lighigt
int flash(int wait,int times){
for ( int c=1;c<=times;c++){
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
 for( int a=13;a>4;a--) {
  digitalWrite(a,HIGH);}
  delay(wait);
  for( int a=13;a>4;a--) {
  digitalWrite(a,LOW);
   }
 delay(100);
}
}


//(8)front to back lighting
int frontBack(int wait,int times){
  for ( int c=1;c<=times;c++){
  
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(wait);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(wait);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
   }
}

//(9)back to front lighting
int backFront(int wait,int times){
 for ( int c=1;c<=times;c++){ 
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
 digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(wait);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(wait);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
   }
}

//(10)lighting from fron to back and back to front
int frontBackFront(int wait, int times){
  for ( int c=1;c<=times;c++){
  for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(wait);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(wait);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(8,HIGH);
  delay(wait);
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(8,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(wait);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
  }
}

//(11)lighting from right to left
int rightLeft(int wait,int times){
  for ( int c=1;c<=times;c++){
  
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
  digitalWrite(5,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(wait);
  digitalWrite(5,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  
  digitalWrite(6,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  delay(wait);
  digitalWrite(6,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
   }
}

//(12)lighting from left to right
int leftRight(int wait,int times){
  for ( int c=1;c<=times;c++){
  
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  
  digitalWrite(6,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  delay(wait);
  digitalWrite(6,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  
  digitalWrite(5,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(wait);
  digitalWrite(5,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
   }
}



//(13) Lighting from 
int rightLeftRight(int wait,int times){
  for ( int c=1;c<=times;c++){
  
for( int b=2;b<5;b++){
digitalWrite(b,LOW);
 }
  digitalWrite(5,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  delay(wait);
  digitalWrite(5,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  
  digitalWrite(6,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(10,HIGH);
  delay(wait);
  digitalWrite(6,LOW);
  digitalWrite(13,LOW);
  digitalWrite(10,LOW);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  delay(wait);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  
   for( int b=2;b<5;b++){
digitalWrite(b,HIGH);
   }
   }
}

//(14)dimond shape lighting
int dimond(int wait,int times){
for ( int c=1;c<=times;c++){
 for (int i=0;i<6000;i++){
 digitalWrite(2,LOW);
 digitalWrite(13,HIGH);
 digitalWrite(13,LOW);
 digitalWrite(2,HIGH);
 
  digitalWrite(3,LOW);
 digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(3,HIGH);

digitalWrite(4,LOW);
 digitalWrite(13,HIGH);
 digitalWrite(13,LOW);
 digitalWrite(4,HIGH);
 }
 delay(wait);
}  
}
//(15)pyramid lighting
int pyramid(int wait,int times){
for ( int c=1;c<=times;c++){
for(int i=0;i<6000;i++){
digitalWrite(4,LOW);
digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(13,LOW);
 digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);

digitalWrite(3,LOW);
digitalWrite(6,HIGH);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(12,HIGH);
digitalWrite(10,HIGH);
digitalWrite(6,LOW);
digitalWrite(8,LOW);
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(3,HIGH);

digitalWrite(2,LOW);
digitalWrite(13,HIGH);
digitalWrite(13,LOW);
digitalWrite(2,HIGH);
 }
delay(wait);
}
}

void setup() {
 
                                        
  for( int a=13;a>4;a--)         // initialize positive terminal 
  {
  pinMode(a, OUTPUT);
}
  
 
  for( int b=2;b<5;b++)  // initialize negative terminal 
   {
     pinMode(b, OUTPUT);
     digitalWrite(b, HIGH);
   }
   
int a=200,b=9;
  int  k;
 // k=rightLeft(100,10);
//k=upDownUpDown(200,4);
//k=loopingDownUp(300,10);
/*k=upDown(200,2);
k=loopingDownUp(20,6);
k=downUp(200,2);

*/
 
}


void loop(){
 int  k;
 k=loopingDownUp(20,5);
k=upDown(200,5);
k=frontBack(200,5);
k=rightLeft(200,5);
k=pyramid(50,5);
k=loopingUpDown(20,5);
k=downUp(200,5);
k=upDownUp(200,5);
k=rotational(200,5);
k=flash(200,5);
k=leftRight(200,5);
k=frontBackFront(200,5);
k=rightLeftRight(100,5);
k=dimond(50,5);

}  
