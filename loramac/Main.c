#include <stdio.h>
#include <stdint.h>

//#include "src/mac/LoRaMacCrypto.h"
#include "LoRaMacCrypto.h"
#include "LoRaMacCrypto.c"

/*!
 * Sets the length of the LoRaMAC footer field.
 * Mainly indicates the MIC field length
 */
#define LORAMAC_MFR_LEN                             4

/*!http://www.tutorialspoint.com/#
 * Frame direction definition for up-link communications
 */
#define UP_LINK                                     0

/*!
 * Frame direction definition for down-link communications
 */
#define DOWN_LINK                                   1





int main()
{
    
    printf("Hello, World!\n");
    
    uint32_t mic = 0;
    
    LoRaMacComputeMic( "b9316a718345852ac7a97230336d6244b3b8ca46b3bc1f0f0de3a50783", 29 - LORAMAC_MFR_LEN, "e4c46fd4f8d0be0127989761e13215d3", 0x52346916, DOWN_LINK, 2695, &mic );
  
    return 0;
}