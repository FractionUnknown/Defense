#include <Arduboy2.h>
Arduboy ardu;

int gamestate = 0;
int Playerlife;
int Level;



void setup() {
  // put your setup code here, to run once:
ard.begin();
ard.setFrameRate(30);
ard.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
if(!ard.nextFrame()){
  return;}
  ard.clear();
 

  switch(gamestate){
    case 0:
    //title screen
      ard.setCursonr(0.0);
      ard.print("Title")
      break;
    case 1: 
    //Gameplay
      ard.setCursonr(0.0);
      ard.print("Gameplay")
    break;
    case 2:
    //Win screen
      ard.setCursonr(0.0);
      ard.print("Win Screen")
      break;
    case 3:
    //lose screen
      ard.setCursonr(0.0);
      ard.print("Lose Screen")
      break;
    }
 ard.display();
 
}
