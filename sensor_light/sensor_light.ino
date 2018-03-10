#include <AESLib.h>
#include  "protocol.h"
#include "EEPROM.h"
/*
Address = 4 Bytes
Channel	= 3 Bytes
ID		= 2 Bytes
V1		= 1 Bytes
V2		= 1 Bytes
V3		= 1 Bytes
I1		= 1 Bytes
I2		= 1 Bytes
I3		= 1 Bytes
*/

unsigned int voltage_lim=0;
unsigned int current_lim=0;
unsigned int radio_channel=0;
unsigned int timer_on_time=0;
unsigned int timer_off_time=0;
unsigned int slave_id=0;             //NE  id
unsigned int slave_address=0;          //NE address
unsigned int gateway_address=0;     //address
unsigned int voltage_l1=0;          //V
unsigned int voltage_l2=0;          //V
unsigned int voltage_l3=0;          //V
unsigned int current_l1=0;          //A
unsigned int current_l2=0;          //A
unsigned int current_l3=0;          //A
unsigned int register_id=0;         //register id
unsigned int time_out=500;          //time out in ms



data_struct send_data;




void setup() {

  // put your setup code here, to run once:

  //Serial.begin(9600);
  uint8_t key[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  char data[] = "0123456789012345"; //16 chars == 16 bytes
  aes128_enc_single( key , data);
  //Serial.print("encrypted:")
  ;
  //Serial.println(data);
  aes128_dec_single(key, data); 
  //Serial.print("decrypted:");
  //Serial.println(data);


}


void encode(int Message, void* Data){
  Data="hello how are you";

}
void EEPROM_SaveTMR_ON(int Hours, int Minute){


}

void EEPROM_SaveTMR_OFF(int Hours, int Minute){


}

void EEPROM_CUR_LIM(int current){


}

void EEPROM_VOL_LIM(int voltage){


}

void EEPROM_RADIO_CH(int channel){


}

void EEPROM_NE_ADDR(int address){


}

void EEPROM_GW_ADDR(int gwAddress){


}
bool loadConfig(){
  int a=0;
  int b=0;
/*
#define SET_RTC_TIME    0x10
#define SET_TMR_ON      0x12
#define SET_TMR_OFF     0x13
#define SET_CUR_LIM     0x14
#define SET_VOL_LIM     0x15
#define SET_NE_ID     0x16
#define SET_RADIO_CH    0x17
#define SET_NE_ADDR     0x18
#define SET_GW_ADDR     0x19
*/
  

}

bool processMessage(int Message){
  switch(Message){
    case SET_RTC_TIME:
      break;
    case GET_RTC_TIME:
      break;
    case SET_TMR_ON:
      break;
    case SET_TMR_OFF:
      break;
    case SET_CUR_LIM:
      break;
    case SET_VOL_LIM:
      break;
    case SET_NE_ID:
      break;
    case SET_RADIO_CH:
      break;
    case SET_NE_ADDR:
      break;
    case SET_GW_ADDR:
      break;  
  }

}
bool sendData(){
  return true;
}
void loop() {
  // put your main code here, to run repeatedly:

}
