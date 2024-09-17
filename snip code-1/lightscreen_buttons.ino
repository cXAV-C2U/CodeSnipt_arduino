
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11, 5, 4, 3, 2);
int pinlight[] = {9,10};
int pinbutton[] = {6,7};
int lastbutton = 0;
int pressCounteur = 0;
int buttonState = 0;
int lastbuttonState = 0;
int lastbuttonStates = 1;
int buttonStates = 1;
String Printf[7];
void Complet(int resetsetting[], int proccComp, int extrac){
  for(int i = 0; i < proccComp; i++){
    for(int i = 0; i = 2; i++){
  int completreset = resetsetting[i];
  int proccsetting_complet = resetsetting[i];
      int comp[] = 
      {1 , 2 , 3,
       4 , 5 , 6,
       7 , 8 , 9};
      bool compt[] = 
      {"0X0IX" , "0X0XU", "0XUEI"
       "X0UX0" , "IX0UX", "X0I0X"
       "X0U01" , "I0XUX", "X0UXX" 
    };
      
      
      lcd.begin(12,2);
      lcd.print("This button complet");
      
      pressCounteur++;
      
      if(proccsetting_complet == 1 && proccsetting_complet > 1){
        
        int roomresent= compt[proccsetting_complet];
        int reloadrooms = compt[i];

        
      }
      
      
      
        
 
    }
  }
}


void setup()
{
  Serial.begin(9600);
  
  if(buttonState == 0 && lastbuttonState == 0){
    buttonState = digitalRead(pinbutton[0]);
    pinMode(pinlight[0]   ,HIGH);
   
  }
  
    if(buttonStates == 1 && lastbuttonStates > 0){
      buttonState = digitalRead(pinbutton[1]);
      pinMode(pinlight[1] ,HIGH); 
      
  }
  
  
  
  if(buttonStates == 1 && lastbuttonStates > 0){
  }
    int MultComplet[] = 
    { 1, 2, 3,
      4, 5, 6,
      7, 8, 9};
    
    Complet(MultComplet, 2, HIGH);
  
 }
  
  if(buttonStates == 1 && lastbuttonStates < 0){
  
  
  
  int Complet[buttonState] = {3,2,1};
  
  
  }
void loop()
{
  
}
