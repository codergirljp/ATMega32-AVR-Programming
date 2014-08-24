 /* Blink LED  on PB0 */

#include <avr/io.h>                       
#include <util/delay.h>                   

int main(void) {

  // Enable PBO as output in the Data Direction Register
  DDRB |= (1 << PB0);

  while (1) 
  {
    // toggle PB0 
    PORTB ^= (1 << PB0); 
    _delay_ms(1000);                                   
  }                                               
  
  return (0);
}
