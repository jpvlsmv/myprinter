#ifndef PINS_H
#define PINS_H
#include "boards.h"
#define LARGE_FLASH	true

// In numerical order
#ifdef NUMERICAL
	#define SDPOWER	-1
	#define HEATER_1_PIN	-1
	#define HEATER_2_PIN	-1
	#define TEMP_2_PIN	-1
	#define X_MS1_PIN	-1
	#define X_MS2_PIN	-1
	#define Y_MS1_PIN	-1
	#define Y_MS2_PIN	-1
	#define Z_MS1_PIN	-1
	#define Z_MS2_PIN	-1
	#define E0_MS1_PIN	-1
	#define E0_MS2_PIN	-1
	#define E1_MS1_PIN	-1
	#define E1_MS2_PIN	-1
	#define DIGIPOTSS_PIN	-1
	#define X_MAX_PIN	2
	#define X_MIN_PIN	3
	#define HEATER_BED_PIN	8
	#define FAN_PIN	9
	#define HEATER_0_PIN	10
	#define SERVO0_PIN	11
	#define PS_ON_PIN	12
	#define LED_PIN	13
	#define TEMP_0_PIN	13 // Analog pin numbering
	#define Y_MIN_PIN	14
	#define TEMP_BED_PIN	14 // Analog pin numbering
	#define Y_MAX_PIN	15
	#define TEMP_1_PIN	15 // Analog pin numbering
	#define LCD_PINS_RS	16
	#define LCD_PINS_ENABLE	17
	#define Z_MIN_PIN	18
	#define Z_MAX_PIN	19
	#define LCD_PINS_D4	23
	#define E0_ENABLE_PIN	24
	#define LCD_PINS_D5	25
	#define E0_STEP_PIN	26
	#define LCD_PINS_D6	27
	#define E0_DIR_PIN	28
	#define LCD_PINS_D7	29
	#define E1_ENABLE_PIN	30
	#define BTN_EN1	31
	#define BTN_EN2	33
	#define E1_DIR_PIN	34
	#define BTN_ENC	35
	#define E1_STEP_PIN	36
	#define BEEPER	37
	#define X_ENABLE_PIN	38
	#define KILL_PIN	41
	#define Z_STEP_PIN	46
	#define Z_DIR_PIN	48
	#define SDCARDDETECT	49
	#define SDSS	53
	#define X_STEP_PIN	54
	#define X_DIR_PIN	55
	#define Y_ENABLE_PIN	56
	#define Y_STEP_PIN	60
	#define Y_DIR_PIN	61
	#define Z_ENABLE_PIN	62
	#define MAX6675_SS	66

#else // in alphabetical order

	#define BEEPER	37
	#define BTN_EN1	31
	#define BTN_EN2	33
	#define BTN_ENC	35
	#define DIGIPOTSS_PIN	-1
	#define E0_DIR_PIN	28
	#define E0_ENABLE_PIN	24
	#define E0_MS1_PIN	-1
	#define E0_MS2_PIN	-1
	#define E0_STEP_PIN	26
	#define E1_DIR_PIN	34
	#define E1_ENABLE_PIN	30
	#define E1_MS1_PIN	-1
	#define E1_MS2_PIN	-1
	#define E1_STEP_PIN	36
	#define FAN_PIN	9
	#define HEATER_0_PIN	10
	#define HEATER_1_PIN	-1
	#define HEATER_2_PIN	-1
	#define HEATER_BED_PIN	8
	#define KILL_PIN	41
	#define LCD_PINS_D4	23
	#define LCD_PINS_D5	25
	#define LCD_PINS_D6	27
	#define LCD_PINS_D7	29
	#define LCD_PINS_ENABLE	17
	#define LCD_PINS_RS	16
	#define LED_PIN	13
	#define MAX6675_SS	66
	#define PS_ON_PIN	12
	#define SDCARDDETECT	49
	#define SDPOWER	-1
	#define SDSS	53
	#define SERVO0_PIN	11
	#define TEMP_0_PIN	13 // Analog pin numbering
	#define TEMP_1_PIN	15 // Analog pin numbering
	#define TEMP_2_PIN	-1
	#define TEMP_BED_PIN	14 // Analog pin numbering
	#define X_DIR_PIN	55
	#define X_ENABLE_PIN	38
	#define X_MAX_PIN	2
	#define X_MIN_PIN	3
	#define X_MS1_PIN	-1
	#define X_MS2_PIN	-1
	#define X_STEP_PIN	54
	#define Y_DIR_PIN	61
	#define Y_ENABLE_PIN	56
	#define Y_MAX_PIN	15
	#define Y_MIN_PIN	14
	#define Y_MS1_PIN	-1
	#define Y_MS2_PIN	-1
	#define Y_STEP_PIN	60
	#define Z_DIR_PIN	48
	#define Z_ENABLE_PIN	62
	#define Z_MAX_PIN	19
	#define Z_MIN_PIN	18
	#define Z_MS1_PIN	-1
	#define Z_MS2_PIN	-1
	#define Z_STEP_PIN	46

#endif

#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
#define _E1_PINS
#define _E2_PINS

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, \
	X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN,  \
	Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN,  \
	Z_MIN_PIN, Z_MAX_PIN, PS_ON_PIN, HEATER_BED_PIN, FAN_PIN, \
	_E0_PINS _E1_PINS _E2_PINS \
	analogInputToDigitalPin(TEMP_0_PIN), \
	analogInputToDigitalPin(TEMP_1_PIN), \
	analogInputToDigitalPin(TEMP_2_PIN), \
	analogInputToDigitalPin(TEMP_BED_PIN) }
#endif //__PINS_H
