/*
 * Button.h
 *
 *  Created on: Mar 9, 2017
 *      Author: dat
 */

#ifndef BUTTON_H_
#define BUTTON_H_

#define BUTTON_OK		PB2
#define BUTTON_CANCEL	PB1
#define BUTTON_UP		PD7
#define BUTTON_DOWN		PB0

// Callback function prototype
typedef void (*ButtonPressCallback)(void);

/*
 * Init before using
 */
void ButtonsInit(void);

/*
 * Callback function register for button ok and cancel
 *
 * return 0 on success, 1 if there's existing registered function
 */
uint8_t ButtonOKSetCallback(ButtonPressCallback function);
uint8_t ButtonCancelSetCallback(ButtonPressCallback function);
uint8_t ButtonUpSetCallback(ButtonPressCallback function);
uint8_t ButtonDownSetCallback(ButtonPressCallback function);

#endif /* BUTTON_H_ */
