#ifndef BUTTONPRESS_H_
#define BUTTONPRESS_H_

#define BUTTON_PRESSED (0 == (PIND &(1<<PORTD2)))

void initPressButton(void);
{
	
}
char buttonPressed(void);

#endif