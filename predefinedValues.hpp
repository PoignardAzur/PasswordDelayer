
#ifndef PREDEFINED_VALUES_HPP
#define PREDEFINED_VALUES_HPP


const int SECOND_DURATION = 1000;

#define SHORT_DELAYS 0
#if SHORT_DELAYS == 2
    const int MINUTE_DURATION = 60;
#elif SHORT_DELAYS == 1
    const int MINUTE_DURATION = 3 * SECOND_DURATION;
#else
    const int MINUTE_DURATION = 60 * SECOND_DURATION;
#endif

const int DEFAULT_WAIT_TIME = 120 * MINUTE_DURATION;
const int MONDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int TUESDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int WEDNESDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int THURSDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int FRIDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int SATURDAY_WAIT_TIME = DEFAULT_WAIT_TIME;
const int SUNDAY_WAIT_TIME = 0;

#define DEFAULT_PASSWORD_BUTTON_TEXT "Donner mot de passe"
#define PRESSED_PASSWORD_BUTTON_TEXT "Annuler mot de passe"
#define DEFAULT_WAITING_TEXT_1 "Temps restant : "
#define DEFAULT_WAITING_TEXT_2 " minute"
#define DEFAULT_WAITING_TEXT_3 " minutes"


#endif // PREDEFINED_VALUES_HPP
