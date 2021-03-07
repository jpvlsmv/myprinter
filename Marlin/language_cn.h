#ifndef LANGUAGE_CN_H
#define LANGUAGE_CN_H

// NOTE: IF YOU CHANGE LANGUAGE FILES OR MERGE A FILE WITH CHANGES
//
//   ==> ALWAYS TRY TO COMPILE MARLIN WITH/WITHOUT "ULTIPANEL" / "ULTRALCD" / "SDSUPPORT" #define IN "Configuration.h" 
//   ==> ALSO TRY ALL AVAILABLE "LANGUAGE_CHOICE" OPTIONS

#if LANGUAGE_CHOICE == cn

// LCD Menu Messages
	#define WELCOME_MSG MACHINE_NAME "\x88\x89\x8a\x8b"//准备打印Ready.
	#define MSG_SD_INSERTED "\x8c\x8d\x8e\x8f\x90\x91"//存储卡已插入Card inserted
	#define MSG_SD_REMOVED "\x8c\x8d\x8e\x8f\x92\x93"//存储卡已拔出Card removed
	#define MSG_MAIN "\x94\x95\x96"//主菜单Main
	#define MSG_AUTOSTART "\x97\x98\x99\x9a"//自动开始Autostart
	#define MSG_DISABLE_STEPPERS "\x9b\x9c\x9d\x9e\x9f\x98"//关闭步进驱动Disable Steppers
	#define MSG_AUTO_HOME "\x97\x98\xa0\xa1\xa2"//自动回原点Auto Home
	#define MSG_SET_ORIGIN "\xa3\xa4\xa1\xa2"//设定原点Set Origin
	#define MSG_PREHEAT_PLA "\xa5\xa6 PLA"//预热PLA Preheat PLA
	#define MSG_PREHEAT_PLA_SETTINGS "PLA\xa5\xa6\xa3\xa4"//PLA预热设定Preheat PLA Conf
	#define MSG_PREHEAT_ABS "\xa5\xa6 ABS"//预热ABS Preheat ABS
	#define MSG_PREHEAT_ABS_SETTINGS "ABS\xa5\xa6\xa3\xa4"//ABS预热设定Preheat ABS Conf
	#define MSG_COOLDOWN "\xa7\xa8\xff\xff"//降温Cooldown
	#define MSG_SWITCH_PS_ON "\x90\x99\xa9\xaa\xff\xff\xff\xff"//打开电源Switch Power On
	#define MSG_SWITCH_PS_OFF "\x9b\x9c\xa9\xaa\xff\xff\xff\xff"//关闭电源Switch Power Off
	#define MSG_EXTRUDE "E\xab\x93\xff\xff"//挤出Extrude
	#define MSG_RETRACT "E\xa0\xac\xff\xff"//回收Retract
	#define MSG_MOVE_AXIS "\xad\x98\xae\xff\xff\xff"//移动轴Move Axis
	#define MSG_SPEED "\xaf\xb0\xff\xff"//速度Speed
	#define MSG_NOZZLE "\xab\x93\xb1\xff\xff\xff"//挤出头Nozzle
	#define MSG_NOZZLE1 "\xab\x93\xb1\xff\xff\xff 2"//Nozzle2
	#define MSG_NOZZLE2 "\xab\x93\xb1\xff\xff\xff 3"//Nozzle3
	#define MSG_BED "\xa6\xb2\xff\xff"//热床Bed
	#define MSG_FAN_SPEED "\xb3\xb4\xaf\xb0\xff\xff\xff\xff"//风扇速度Fan speed
	#define MSG_FLOW "Flow"
	#define MSG_CONTROL "\xb5\xb6\xff\xff"//控制Control
	#define MSG_MIN " \002 \xb7\xb9\xff\xff"//最小Min
	#define MSG_MAX " \002 \xb7\xb8\xff\xff"//最大Max
	#define MSG_FACTOR " \002 \xba\xbb\xff\xff"//因数Fact
	#define MSG_AUTOTEMP "\x97\x98\xb5\xa8\xff\xff"//自动控温Autotemp
	#define MSG_ON "\x99\xff"//开On 
	#define MSG_OFF "\x9b\xff"//关Off
	#define MSG_PID_P "PID-P"
	#define MSG_PID_I "PID-I"
	#define MSG_PID_D "PID-D"
	#define MSG_PID_C "PID-C"
	#define MSG_ACC  "\xc1\xaf\xb0\xff\xff\xff"//加速度Accel
	#define MSG_VXY_JERK "Vxy-jerk"
	#define MSG_VZ_JERK "Vz-jerk"
	#define MSG_VE_JERK "Ve-jerk"
	#define MSG_VMAX "\xb7\xb8\xaf\xb0\xff\xff\xff\xff"//最大速度Vmax 
	#define MSG_X "x"
	#define MSG_Y "y"
	#define MSG_Z "z"
	#define MSG_E "e"
	#define MSG_VMIN "\xb7\xb9\xaf\xb0\xff\xff\xff\xff"//最小速度Vmin
	#define MSG_VTRAV_MIN "\xb7\xb9\xad\x98\xaf\xb0\xff\xff\xff\xff\xff\xff"//最小移动速度VTrav min
	#define MSG_AMAX "\xb7\xb8\xc1\xaf\xb0\xff\xff\xff\xff"//最大加速度Amax 
	#define MSG_A_RETRACT "E\xa0\xac\xc1\xaf\xb0\xff\xff\xff\xff\xff"//E回收加速度A-retract
	#define MSG_XSTEPS "X\xae\x9d\xc2mm\xff\xff"//X步每mmXsteps/mm
	#define MSG_YSTEPS "Y\xae\x9d\xc2mm\xff\xff"//Y步每mmYsteps/mm
	#define MSG_ZSTEPS "Z\xae\x9d\xc2mm\xff\xff"//Z步每mmZsteps/mm
	#define MSG_ESTEPS "E\xae\x9d\xc2mm\xff\xff"//E步每mmEsteps/mm
	#define MSG_RECTRACT "E\xa0\xac\xff\xff"//回收Rectract
	#define MSG_TEMPERATURE "\xa8\xb0\xff\xff"//温度Temperature
	#define MSG_MOTION "\xc3\x98\xff\xff"//运动Motion
	#define MSG_CONTRAST "LCD contrast"
	#define MSG_STORE_EPROM "\xc4\x8c\xc5\xbb\xff\xff\xff\xff"//保存参数Store memory
	#define MSG_LOAD_EPROM "\xc6\x91\xc5\xbb\xff\xff\xff\xff"//载入参数Load memory
	#define MSG_RESTORE_FAILSAFE "\xc7\xc8\x93\xc9\xa3\xa4\xff\xff\xff\xff"//恢复出厂设定Restore Failsafe
	#define MSG_REFRESH "\xca\xcb\xff\xff"//刷新Refresh
	#define MSG_WATCH "\xbc\xbd\xbe\xbf\xff\xff\xff\xff"//信息界面Info screen
	#define MSG_PREPARE "\x88\x89\xff\xff"//Prepare
	#define MSG_TUNE "\xcc\xcd\xff\xff"//调整Tune
	#define MSG_PAUSE_PRINT "\xce\xcf\x8a\x8b\xff\xff\xff\xff"//暂停打印Pause Print
	#define MSG_RESUME_PRINT "\xd0\xd1\x8a\x8b\xff\xff\xff\xff"//继续打印Resume Print
	#define MSG_STOP_PRINT "\xcf\xd2\x8a\x8b"//停止打印Stop Print
	#define MSG_CARD_MENU "\xd3\x8c\x8d\x8e\xff\xff\xff\xff"//由存储卡打印Print from SD
	#define MSG_NO_CARD "\xc0\x8c\x8d\x8e\xff\xff\xff\xff"//无存储卡No Card
	#define MSG_DWELL "\xd4\xd5\x84 ..\xff\xff\xff"//休眠中..Sleep...
	#define MSG_USERWAIT "Wait for user..."
	#define MSG_RESUMING "\x8a\x8b\xc7\xc8\x84\xff\xff\xff\xff"//打印恢复中Resuming print
	#define MSG_NO_MOVE "No move."
	#define MSG_KILLED "KILLED. "
	#define MSG_STOPPED "STOPPED. "
	#define MSG_CONTROL_RETRACT  "Retract mm"
	#define MSG_CONTROL_RETRACTF "Retract  F"
	#define MSG_CONTROL_RETRACT_ZLIFT "Hop mm"
	#define MSG_CONTROL_RETRACT_RECOVER "UnRet +mm"
	#define MSG_CONTROL_RETRACT_RECOVERF "UnRet  F"
	#define MSG_AUTORETRACT "AutoRetr."
	#define MSG_FILAMENTCHANGE "Change filament"
	#define MSG_INIT_SDCARD "Init. SD-Card"	
	#define MSG_CNG_SDCARD "Change SD-Card"
        #define MSG_ZPROBE_OUT "ZProbe Outside Bed"
        #define MSG_POSITION_UNKNOWN "Home X/Y before Z"
        #define MSG_ZPROBE_ZOFFSET "Z Offset"
	#define MSG_Enqueing "enqueing \""
	#define MSG_POWERUP "PowerUp"
	#define MSG_EXTERNAL_RESET " External Reset"
	#define MSG_BROWNOUT_RESET " Brown out Reset"
	#define MSG_WATCHDOG_RESET " Watchdog Reset"
	#define MSG_SOFTWARE_RESET " Software Reset"
	#define MSG_MARLIN "Marlin "
	#define MSG_AUTHOR " | Author: "
	#define MSG_CONFIGURATION_VER " Last Updated: "
	#define MSG_FREE_MEMORY " Free Memory: "
	#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
	#define MSG_OK "ok"
	#define MSG_FILE_SAVED "Done saving file."
	#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
	#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
	#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
	#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
	#define MSG_FILE_PRINTED "Done printing file"
	#define MSG_BEGIN_FILE_LIST "Begin file list"
	#define MSG_END_FILE_LIST "End file list"
	#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
	#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
	#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
	#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
	#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
	#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
	#define MSG_HEATING "Heating..."
	#define MSG_HEATING_COMPLETE "Heating done."
	#define MSG_BED_HEATING "Bed Heating."
	#define MSG_BED_DONE "Bed done."
	#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
	#define MSG_COUNT_X " Count X: "
	#define MSG_ERR_KILLED "Printer halted. kill() called!"
	#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
	#define MSG_RESEND "Resend: "
	#define MSG_UNKNOWN_COMMAND "Unknown command: \""
	#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
	#define MSG_INVALID_EXTRUDER "Invalid extruder"
	#define MSG_M119_REPORT "Reporting endstop status"
	#define MSG_ENDSTOP_HIT "TRIGGERED"
	#define MSG_ENDSTOP_OPEN "open"
	#define MSG_HOTEND_OFFSET "Hotend offsets:"
	#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
	#define MSG_SD_INIT_FAIL "SD init fail"
	#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
	#define MSG_SD_OPENROOT_FAIL "openRoot failed"
	#define MSG_SD_CARD_OK "SD card ok"
	#define MSG_SD_WORKDIR_FAIL "workDir open failed"
	#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
	#define MSG_SD_FILE_OPENED "File opened: "
	#define MSG_SD_SIZE " Size: "
	#define MSG_SD_FILE_SELECTED "File selected"
	#define MSG_SD_WRITE_TO_FILE "Writing to file: "
	#define MSG_SD_PRINTING_BYTE "SD printing byte "
	#define MSG_SD_NOT_PRINTING "Not SD printing"
	#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
	#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "
	#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
	#define MSG_ENDSTOPS_HIT "endstops hit: "
	#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
	#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
#endif

#endif // ifndef LANGUAGE_CN_H
