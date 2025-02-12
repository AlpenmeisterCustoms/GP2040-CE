/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Alpenmeister"

// Main pin mapping Configuration
//                                                 
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_S2 
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_L2 
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_UP
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_L3
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_L3
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_Left 
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_Left 
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_Down 
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_Down   
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_Right 
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_Right  
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_L3   
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L1    
#define GPIO_PIN_16 GpioAction::BUTTON_PRESS_A1   
#define GPIO_PIN_17 GpioAction::BUTTON_PRESS_A2    
#define GPIO_PIN_18 GpioAction::BUTTON_PRESS_S1   
#define GPIO_PIN_19 GpioAction::BUTTON_PRESS_S2    
#define GPIO_PIN_20 GpioAction::BUTTON_PRESS_B1  
#define GPIO_PIN_21 GpioAction::BUTTON_PRESS_B3 
#define GPIO_PIN_22 GpioAction::BUTTON_PRESS_B2 
#define GPIO_PIN_23 GpioAction::BUTTON_PRESS_B4 
#define GPIO_PIN_24 GpioAction::BUTTON_PRESS_R2 
#define GPIO_PIN_25 GpioAction::BUTTON_PRESS_R1 
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_R3 
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_R3 

// Keyboard Mapping Configuration
//                                            // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define KEY_DPAD_UP     HID_KEY_ARROW_UP      // UP     | UP     | UP      | UP       | UP     | UP     |
#define KEY_DPAD_DOWN   HID_KEY_ARROW_DOWN    // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define KEY_DPAD_RIGHT  HID_KEY_ARROW_RIGHT   // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define KEY_DPAD_LEFT   HID_KEY_ARROW_LEFT    // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define KEY_BUTTON_B1   HID_KEY_SHIFT_LEFT    // B1     | A      | B       | Cross    | 2      | K1     |
#define KEY_BUTTON_B2   HID_KEY_Z             // B2     | B      | A       | Circle   | 3      | K2     |
#define KEY_BUTTON_R2   HID_KEY_X             // R2     | RT     | ZR      | R2       | 8      | K3     |
#define KEY_BUTTON_L2   HID_KEY_V             // L2     | LT     | ZL      | L2       | 7      | K4     |
#define KEY_BUTTON_B3   HID_KEY_CONTROL_LEFT  // B3     | X      | Y       | Square   | 1      | P1     |
#define KEY_BUTTON_B4   HID_KEY_ALT_LEFT      // B4     | Y      | X       | Triangle | 4      | P2     |
#define KEY_BUTTON_R1   HID_KEY_SPACE         // R1     | RB     | R       | R1       | 6      | P3     |
#define KEY_BUTTON_L1   HID_KEY_C             // L1     | LB     | L       | L1       | 5      | P4     |
#define KEY_BUTTON_S1   HID_KEY_5             // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define KEY_BUTTON_S2   HID_KEY_1             // S2     | Start  | Plus    | Start    | 10     | Start  |
#define KEY_BUTTON_L3   HID_KEY_EQUAL         // L3     | LS     | LS      | L3       | 11     | LS     |
#define KEY_BUTTON_R3   HID_KEY_MINUS         // R3     | RS     | RS      | R3       | 12     | RS     |
#define KEY_BUTTON_A1   HID_KEY_9             // A1     | Guide  | Home    | PS       | 13     | ~      |
#define KEY_BUTTON_A2   HID_KEY_F2            // A2     | ~      | Capture | ~        | 14     | ~      |
#define KEY_BUTTON_FN   -1                    // Hotkey Function                                        |

#endif
