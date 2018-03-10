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


#define EE_VOL_LIM  0x00
#define EE_CUR_LIM  0x02
#define EE_TIMER_ON 0x04
#define EE_TIMER_OFF    0x06
#define EE_CRC_CHECK    0x08
#define EE_MAXNUM       10
const int TIME_OUT          =   5000;           //time out in ms
const int SLAVE_ID          =   001;            //NE  id
const int RADIO_CH          =   12;             //Frequency channel
const int SLAVE_ADDESS      =   10;             //NE address
const int GW_ADDRESS        =   1;              //address


byte databuffer[40];
struct Param_struct{
    unsigned int voltage_lim;
    unsigned int current_lim;
    unsigned int timer_on_time;
    unsigned int timer_off_time;
    unsigned int crcValue;
};

struct data_struct{
    unsigned int slave_address;
    unsigned int master_address;
    unsigned int crc;
    unsigned int register_id;
    unsigned int commandType;
    unsigned int dataLength;
    int data_pointer;
};
