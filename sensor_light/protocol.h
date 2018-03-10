#define SET_RTC_TIME    0x10
#define GET_RTC_TIME    0x11
#define SET_TMR_ON      0x12
#define SET_TMR_OFF     0x13
#define SET_CUR_LIM     0x14
#define SET_VOL_LIM     0x15
#define SET_NE_ID       0x16
#define SET_RADIO_CH    0x17
#define SET_NE_ADDR     0x18
#define SET_GW_ADDR     0x19


#define EE_VOL_LIM  0x01
#define EE_CUR_LIM  0x03
#define EE_TIMER_ON 0x05
#define EE_TIMER_OFF    0x07

const int TIME_OUT  =        500;          //time out in ms


byte databuffer[40];
struct data_struct{
    unsigned int slave_address;
    unsigned int master_address;
    unsigned int crc;
    unsigned int register_id;
    unsigned int commandType;
    unsigned int dataLength;
    int data_pointer;
};
