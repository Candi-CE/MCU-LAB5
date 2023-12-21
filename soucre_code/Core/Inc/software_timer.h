#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define DURATION_1S 1000
#define DURATION_HALF_OF_SECOND 500

extern int timer_flags[];
extern int timer_counters[];
extern int TIMER_CYCLE;

extern int timer0_mode_debounce_flag;
extern int timer0_mode_debounce_counter;

void set_Timer_mode_debounce(int duration);
void setTimer(int timer_number, int duration);
void timerRun();
void clearTimer(int timer_number);

#endif /* INC_SOFTWARE_TIMER_H_ */
