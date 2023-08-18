// ===================================================================================
// User configurations
// ===================================================================================

#pragma once

// Pin definitions
#define PIN_BUZZER          P33       // buzzer pin
#define PIN_SDA             P32       // I2C SDA
#define PIN_SCL             P31       // I2C SCL


// USB device descriptor
#define USB_VENDOR_ID       0x16C0    // VID (shared www.voti.nl)
#define USB_PRODUCT_ID      0x27DD    // PID (shared CDC)
#define USB_DEVICE_VERSION  0x0100    // v1.0 (BCD-format)

// USB configuration descriptor
#define USB_MAX_POWER_mA    100       // max power in mA 

// USB descriptor strings
#define MANUFACTURER_STR    'U','n','i','t','-','m','i','n','i','o','r'
#define PRODUCT_STR         'O','L','E','D','-','D','r','i','v','e','r'
#define SERIAL_STR          'g','i','t','h','u','b','.','c','o','m','/', \
                            'U','N','I','T',
#define INTERFACE_STR       'O','L','E','D','_','S','e','r','i','a','l'
