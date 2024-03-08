#include "quantum.h"

#define LED_LAYER GP12

void keyboard_pre_init_user(void) {
setPinOutput(LED_LAYER);   
}
layer_state_t layer_state_set_user(layer_state_t state) {
    if(IS_LAYER_ON_STATE(state, 1)) { 
        writePinLow(LED_LAYER); 
    } 
    else { 
        writePinHigh(LED_LAYER);
    } 
return state; 
}

