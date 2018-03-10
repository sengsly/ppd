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
unsigned int timer_on_time=0;
unsigned int timer_off_time=0;

unsigned int voltage_l1=0;          //V
unsigned int voltage_l2=0;          //V
unsigned int voltage_l3=0;          //V
unsigned int current_l1=0;          //A
unsigned int current_l2=0;          //A
unsigned int current_l3=0;          //A
unsigned int register_id=0;         //register id




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
bool saveConfig(){
  eeprom_write_word(EE_VOL_LIM  , voltage_lim);
  eeprom_write_word(EE_CUR_LIM  , current_lim);
  eeprom_write_word(EE_TIMER_ON , timer_on_time);
  eeprom_write_word(EE_TIMER_OFF, timer_off_time);
  return true;
}
bool loadConfig(){
  voltage_lim   = eeprom_read_word(EE_VOL_LIM);
  current_lim   = eeprom_read_word(EE_CUR_LIM);
  timer_on_time = eeprom_read_word(EE_TIMER_ON);
  timer_off_time= eeprom_read_word(EE_TIMER_OFF);
  return true;
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
