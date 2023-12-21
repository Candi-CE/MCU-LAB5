#include "main.h"
#include "software_timer.h"
#include "global.h"
#include "stdbool.h"
#include "string.h"
#include "stdio.h"

#ifndef INC_UART_COMMUNICATION_H_
#define INC_UART_COMMUNICATION_H_

#define SLEEP_MODE					1
#define	SEND_ADC 					2
#define WAIT_ACK					3
#define END_SEND 					4
#define MAX_TRY_TIMES				5
#define ERROR_G						6
#define TIME_OUT_ACK				3000 //if user isn`t send again, wait user to respone within 3s.
#define NORMAL						9
#define BUFFER_IS_FULL				10
#define CMD_NOT_FOUND				11
#define REQUEST_DATA_FIRST			12

#define MAX_BUFFER_SIZE 30
extern uint8_t temp;
extern uint8_t buffer [MAX_BUFFER_SIZE];
extern uint8_t buffer_flag;

extern uint8_t ERROR_CODE_G;

extern int status_ACK;
extern const char userRequest[];
extern const char userOK[];

void command_parser_fsm();

void uart_communication_fsm();

void error_hanlder();

void System_Go_To_Sleep();
#endif /* INC_UART_COMMUNICATION_H_ */
