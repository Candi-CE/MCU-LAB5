int timer_flags[] = {0, 0, 0, 0, 0, 0};
int timer_counters[] = {0, 0, 0, 0, 0, 0};
int TIMER_CYCLE = 10; // 10ms

void setTimer(int timer_number, int duration) {
    if (timer_number >= 0 && timer_number < sizeof(timer_flags) / sizeof(timer_flags[0])) {
        timer_counters[timer_number] = duration / TIMER_CYCLE;
        timer_flags[timer_number] = 0;
    }
}

void timerRun() {
    for (int i = 0; i < sizeof(timer_counters) / sizeof(timer_counters[0]); i++) {
        if (timer_counters[i] > 0) {
            timer_counters[i]--;
            if (timer_counters[i] <= 0) {
                timer_flags[i] = 1;
            }
        }
    }
}

void clearTimer(int timer_number) {
    if (timer_number >= 0 && timer_number < sizeof(timer_flags) / sizeof(timer_flags[0])) {
        timer_counters[timer_number] = 0;
        timer_flags[timer_number] = 0;
    }
}
