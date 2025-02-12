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
//                                                  // GP2040 | Xinput | Switch  | PS3/4/5  | Dinput | Arcade |
#define GPIO_PIN_02 GpioAction::BUTTON_PRESS_UP     // UP     | UP     | UP      | UP       | UP     | UP     |
#define GPIO_PIN_03 GpioAction::BUTTON_PRESS_DOWN   // DOWN   | DOWN   | DOWN    | DOWN     | DOWN   | DOWN   |
#define GPIO_PIN_04 GpioAction::BUTTON_PRESS_RIGHT  // RIGHT  | RIGHT  | RIGHT   | RIGHT    | RIGHT  | RIGHT  |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_LEFT   // LEFT   | LEFT   | LEFT    | LEFT     | LEFT   | LEFT   |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1     // B1     | A      | B       | Cross    | 2      | K1     |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2     // B2     | B      | A       | Circle   | 3      | K2     |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_R2     // R2     | RT     | ZR      | R2       | 8      | K3     |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_L2     // L2     | LT     | ZL      | L2       | 7      | K4     |
#define GPIO_PIN_10 GpioAction::BUTTON_PRESS_B3     // B3     | X      | Y       | Square   | 1      | P1     |
#define GPIO_PIN_11 GpioAction::BUTTON_PRESS_B4     // B4     | Y      | X       | Triangle | 4      | P2     |
#define GPIO_PIN_12 GpioAction::BUTTON_PRESS_R1     // R1     | RB     | R       | R1       | 6      | P3     |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_L1     // L1     | LB     | L       | L1       | 5      | P4     |
#define GPIO_PIN_00 GpioAction::BUTTON_PRESS_S1     // S1     | Back   | Minus   | Select   | 9      | Coin   |
#define GPIO_PIN_01 GpioAction::BUTTON_PRESS_S2     // S2     | Start  | Plus    | Start    | 10     | Start  |
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_L3     // L3     | LS     | LS      | L3       | 11     | LS     |
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_R3     // R3     | RS     | RS      | R3       | 12     | RS     |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_A1     // A1     | Guide  | Home    | PS       | 13     | ~      |
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_A2     // A2     | ~      | Capture | ~        | 14     | ~      |

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

// LED Stuff
//
#define BUTTON_LAYOUT BUTTON_LAYOUT_STICKLESS
#define BOARD_LEDS_PIN 0
#define LED_BRIGHTNESS_MAXIMUM 100
#define LED_BRIGHTNESS_STEPS 5
#define LED_FORMAT LED_FORMAT_GRB
#define LEDS_PER_PIXEL 14
#define LEDS_BASE_ANIMATION_INDEX 4
#define LEDS_BUTTON_A2 1

// Display Stuff
//
#define HAS_I2C_DISPLAY 1
#define DISPLAY_I2C_BLOCK I2C1
#define I2C1_ENABLED 1
#define I2C1_PIN_SDA 14
#define I2C1_PIN_SCL 15
#define DISPLAY_FLIP 0

// USB Passthrough Stuff
//
#define USB_PERIPHERAL_ENABLED 1
#define USB_PERIPHERAL_PIN_DPLUS 29
#define USB_PERIPHERAL_PIN_ORDER -1


// Button Layout Stuff
//
#define DEFAULT_SOCD_MODE SOCD_MODE_NEUTRAL

#define BUTTON_LAYOUT BUTTON_LAYOUT_BOARD_DEFINED_A
#define BUTTON_LAYOUT_RIGHT BUTTON_LAYOUT_BOARD_DEFINED_B
#define SPLASH_MODE SPLASH_MODE_STATIC
#define SPLASH_DURATION 7

#define DEFAULT_INPUT_MODE_B4 INPUT_MODE_PS5

// #define DEFAULT_BOARD_LAYOUT_A {\
//     {GP_ELEMENT_BTN_BUTTON, {7, 32, 7, 6, 1, 1, GAMEPAD_MASK_L2,       GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_DIR_BUTTON, {17, 28, 6, 6, 1, 1, GAMEPAD_MASK_LEFT,    GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_DIR_BUTTON, {35, 28, 6, 6, 1, 1, GAMEPAD_MASK_DOWN,    GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_DIR_BUTTON, {51, 32, 6, 6, 1, 1, GAMEPAD_MASK_RIGHT,   GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_DIR_BUTTON, {53, 53, 7, 7, 1, 1, GAMEPAD_MASK_UP,      GP_SHAPE_ELLIPSE}}\
// }

// #define DEFAULT_BOARD_LAYOUT_B {\
//     {GP_ELEMENT_DIR_BUTTON, {61, 32, 7, 6, 1, 1, GAMEPAD_MASK_RIGHT,   GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {74, 25, 6, 6, 1, 1, GAMEPAD_MASK_L1,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {74, 25, 6, 6, 1, 1, GAMEPAD_MASK_B3,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {86, 16, 6, 6, 1, 1, GAMEPAD_MASK_B4,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {100, 16, 6, 6, 1, 1, GAMEPAD_MASK_R1,     GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {114,24, 7, 7, 1, 1, GAMEPAD_MASK_R3,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {74, 43, 6, 6, 1, 1, GAMEPAD_MASK_B1,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {86, 34, 6, 6, 1, 1, GAMEPAD_MASK_B2,      GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {100, 34, 6, 6, 1, 1, GAMEPAD_MASK_R2,     GP_SHAPE_ELLIPSE}},\
//     {GP_ELEMENT_BTN_BUTTON, {69, 58, 7, 7, 1, 1, GAMEPAD_MASK_L2,      GP_SHAPE_ELLIPSE}}\
// }

// #define DEFAULT_SPLASH \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFC,0x7F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFC,0x3F,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xF8,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xF0,0x1F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xF0,0x0F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xE0,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xC1,0x87,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xC3,0x83,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0x83,0xC1,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0x07,0xE1,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7F,0x0F,0xE0,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7F,0x8F,0xF0,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0x9F,0xF8,0x7F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0xF8,0x3F,0x07,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xFF,0xFF,0xFC,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xF7,0xFE,0xFE,0x1F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF3,0xFE,0x7E,0x0F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xE1,0xFC,0x3F,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xC1,0xFC,0x3F,0x87,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xC0,0xFC,0x1F,0x83,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0x80,0x7E,0x0F,0xC1,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0x00,0x7F,0x0F,0xE1,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0x0C,0x3F,0x07,0xE0,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x0C,0x1F,0x83,0xF0,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xE0,0xFC,0x1E,0x1F,0xC3,0xF8,0x7F,0x0F,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xE0,0xFC,0x3F,0x0F,0xC1,0xF8,0x3F,0x07,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0xC1,0xF8,0x3F,0x0F,0xE0,0xFC,0x1F,0x83,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x7F,0x87,0xF0,0xFE,0x1F,0xC3,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x7F,0xC3,0xF0,0x7E,0x0F,0xC1,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFF,0x07,0xE0,0xFF,0xC3,0xF8,0x3F,0x07,0xE0,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFE,0x0F,0xC1,0xFF,0xE1,0xFC,0x3F,0x87,0xF0,0xFF,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFE,0x0F,0xC1,0xFB,0xE0,0xFC,0x1F,0x83,0xF0,0x7F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xFC,0x1F,0x83,0xF1,0xF0,0xFE,0x0F,0xC1,0xF8,0x3F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xF8,0x3F,0x07,0xE1,0xF8,0x7F,0x0F,0xE1,0xFC,0x3F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xF8,0x3E,0x07,0xE1,0xF8,0x3F,0x07,0xE0,0xFC,0x1F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xF0,0x7E,0x0F,0xC3,0xFC,0x3F,0x83,0xF0,0x7E,0x0F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xE0,0xFC,0x1F,0x83,0xFE,0x1F,0xC3,0xF8,0x7F,0x0F,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xE0,0xF8,0x1F,0x87,0xFE,0x0F,0xC1,0xF8,0x3F,0x07,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0xC1,0xF8,0x3F,0x0F,0xFF,0x0F,0xE0,0xFC,0x1F,0x83,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0x83,0xF0,0x7E,0x0F,0xFF,0x87,0xF0,0xFE,0x1F,0xC3,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0x83,0xE0,0x7E,0x1F,0xFF,0x83,0xF0,0x7F,0x0F,0xC1,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFF,0x07,0xE0,0xFC,0x3F,0xFF,0xC3,0xF8,0x3F,0x07,0xE0,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFE,0x0F,0xC1,0xF8,0x3F,0xFF,0xE1,0xFC,0x3F,0x83,0xF0,0xFF,0xFF,0xFF, \
//   0xFF,0xFF,0xFE,0x0F,0x81,0xF8,0x7F,0xFF,0xE0,0xFC,0x1F,0xC3,0xF0,0x7F,0xFF,0xFF, \
//   0xFF,0xFF,0xFC,0x1F,0x83,0xF0,0xFF,0xFF,0xF0,0xFE,0x0F,0xC1,0xF8,0x3F,0xFF,0xFF, \
//   0xFF,0xFF,0xF8,0x3F,0x07,0xE0,0xFF,0xFF,0xF8,0x7F,0x0F,0xE0,0xFC,0x1F,0xFF,0xFF

#endif
