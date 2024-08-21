#ifndef CHECKER_H
#define CHECKER_H

typedef struct {
const char* temp_msg;
const char* soc_msg;
const char* charge_rate_msg;
} Messages;

Messages lang_sets[] = {
{"Temperature out of range!","State of Charge out of range!","Charge Rate out of range!"},
{"Temperatur außerhalb des zulässigen Bereichs!","Ladezustand außerhalb des zulässigen Bereichs!","Laderate außerhalb des zulässigen Bereichs!"}
};

#endif // COLOR_CODE_H
