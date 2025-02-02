#pragma once

#undef MACHINE_STYLE
#define MACHINE_STYLE POLARGRAPH

#undef MOTHERBOARD
#define MOTHERBOARD BOARD_RUMBA

#undef MACHINE_HARDWARE_VERSION
#define MACHINE_HARDWARE_VERSION MAKELANGELO_5

#undef LCD_TYPE
#define LCD_TYPE LCD_IS_SMART

#undef PULLEY_PITCH
#define PULLEY_PITCH (40.0)

#undef NORMAL_MOTOR_STEPS
#define NORMAL_MOTOR_STEPS 200

#define ENCODER_DO_NOT_USE_INTERRUPTS
