#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H

#define BED_CHECK_INTERVAL 5000 //ms between checks in bang-bang control
#define PID_ADD_EXTRUSION_RATE
#define  DEFAULT_Kc (1) //heating power=Kc*(e_speed)
#define AUTOTEMP
#define AUTOTEMP_OLDWEIGHT 0.98
#define EXTRUDER_RUNOUT_MINTEMP 190
#define EXTRUDER_RUNOUT_SECONDS 30.
#define EXTRUDER_RUNOUT_ESTEPS 14. //mm filament
#define EXTRUDER_RUNOUT_SPEED 1500.  //extrusion speed
#define EXTRUDER_RUNOUT_EXTRUDE 100
#define TEMP_SENSOR_AD595_OFFSET 0.0
#define TEMP_SENSOR_AD595_GAIN   1.0
#define CONTROLLERFAN_PIN -1 //Pin used for the fan to cool controller (-1 to disable)
#define CONTROLLERFAN_SECS 60 //How many seconds, after all motors were disabled, the fan should run
#define CONTROLLERFAN_SPEED 255  // == full speed
#define EXTRUDER_0_AUTO_FAN_PIN   -1
#define EXTRUDER_1_AUTO_FAN_PIN   -1
#define EXTRUDER_2_AUTO_FAN_PIN   -1
#define EXTRUDER_AUTO_FAN_TEMPERATURE 50
#define EXTRUDER_AUTO_FAN_SPEED   255  // == full speed
#define ENDSTOPS_ONLY_FOR_HOMING // If defined the endstops will only be used for homing
#define X_HOME_POS X_MIN_POS
#define Y_HOME_POS Y_MIN_POS
#define Z_HOME_POS Z_MIN_POS
#define INVERT_Y2_VS_Y_DIR true
#define X_HOME_RETRACT_MM 5
#define Y_HOME_RETRACT_MM 5
#define Z_HOME_RETRACT_MM 2
#define AXIS_RELATIVE_MODES {false, false, false, false}
#define MAX_STEP_FREQUENCY 40000 // Max step frequency for Ultimaker (5000 pps / half step)
#define INVERT_X_STEP_PIN false
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_STEP_PIN false
#define INVERT_E_STEP_PIN false
#define DEFAULT_STEPPER_DEACTIVE_TIME 60
#define DEFAULT_MINIMUMFEEDRATE       0.0     // minimum feedrate
#define DEFAULT_MINTRAVELFEEDRATE     0.0
#define MANUAL_FEEDRATE {50*60, 50*60, 4*60, 60}  // set the speeds for manual moves (mm/min)
#define ULTIPANEL_FEEDMULTIPLY
#define DEFAULT_MINSEGMENTTIME        20000
#define SLOWDOWN
#define MINIMUM_PLANNER_SPEED 0.05// (mm/sec)
#define MICROSTEP1 LOW,LOW
#define MICROSTEP2 HIGH,LOW
#define MICROSTEP4 LOW,HIGH
#define MICROSTEP8 HIGH,HIGH
#define MICROSTEP16 HIGH,HIGH
#define MICROSTEP_MODES {16,16,16,16,16} // [1,2,4,8,16]
#define DIGIPOT_MOTOR_CURRENT {135,135,135,135,135} // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
#define DIGIPOT_I2C_NUM_CHANNELS 8
#define DIGIPOT_I2C_MOTOR_CURRENTS {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0}
#define CHDK_DELAY 50 //How long in ms the pin should stay HIGH before going LOW again
#define SD_FINISHED_STEPPERRELEASE true  //if sd support and the file is finished: disable steppers?
#define SD_FINISHED_RELEASECOMMAND "M84 X Y Z E" // You might want to keep the z enabled so your bed stays in place.
#define SDCARD_RATHERRECENTFIRST  //reverse file order of sd card menu display. Its sorted practically after the file system block order.
#define MM_PER_ARC_SEGMENT 1
#define N_ARC_CORRECTION 25

const unsigned int dropsegments=5; //everything with less than this number of steps will be ignored as move and joined with the next movement

#define PS_ON_AWAKE  LOW
#define PS_ON_ASLEEP HIGH
#define BLOCK_BUFFER_SIZE 16   // SD,LCD,Buttons take more memory, block buffer needs to be smaller
#define MAX_CMD_SIZE 96
#define BUFSIZE 4
#define FILAMENTCHANGEENABLE
#define FILAMENTCHANGE_XPOS 3
#define FILAMENTCHANGE_YPOS 3
#define FILAMENTCHANGE_ZADD 10
#define FILAMENTCHANGE_FIRSTRETRACT -2
#define FILAMENTCHANGE_FINALRETRACT -100
#define THERMISTORHEATER_0 TEMP_SENSOR_0
#define HEATER_0_USES_THERMISTOR
#define THERMISTORBED TEMP_SENSOR_BED
#define BED_USES_THERMISTOR
#undef HEATER_1_MINTEMP
#undef HEATER_1_MAXTEMP
#undef HEATER_2_MINTEMP
#undef HEATER_2_MAXTEMP
#endif //__CONFIGURATION_ADV_H
