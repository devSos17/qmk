 /* Copyright 2021 Dane Evans
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
  #pragma once


//#define USE_MATRIX_I2C

/* Select hand configuration */

///https://thomasbaart.nl/2018/12/01/reducing-firmware-size-in-qmk/


#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define CUSTOM_FONT

#define CUSTOM_LAYER_READ //if you remove this it causes issues - needs better guarding


#define QUICK_TAP_TERM 0
#ifdef TAPPING_TERM
    #undef TAPPING_TERM
    #define TAPPING_TERM 200
#endif
// #define ENCODER_DIRECTION_FLIP

/* ws2812 RGB LED */
#define WS2812_DI_PIN D3


#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#ifdef RGBLIGHT_ENABLE

    #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_STATIC_LIGHT
    #define RGBLIGHT_DEFAULT_HUE 72 // green
    #define RGBLIGHT_DEFAULT_SAT 255


    #define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	#define RGBLIGHT_EFFECT_RAINBOW_SWIRL

	// #define RGBLIGHT_EFFECT_RAINBOW_MOOD
	// #define RGBLIGHT_EFFECT_SNAKE
	// #define RGBLIGHT_EFFECT_KNIGHT
	// #define RGBLIGHT_EFFECT_CHRISTMAS
	// #define RGBLIGHT_EFFECT_RGB_TEST
	// #define RGBLIGHT_EFFECT_ALTERNATING
	// #define RGBLIGHT_EFFECT_TWINKLE

    #undef RGBLIGHT_LED_COUNT
	#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
	#undef RGBLIGHT_EFFECT_SNAKE
	#undef RGBLIGHT_EFFECT_KNIGHT
	#undef RGBLIGHT_EFFECT_CHRISTMAS
	#undef RGBLIGHT_EFFECT_RGB_TEST
	#undef RGBLIGHT_EFFECT_ALTERNATING
	#undef RGBLIGHT_EFFECT_TWINKLE

    #define RGBLIGHT_LED_COUNT 72
	// #define RGBLIGHT_SPLIT { 36, 36 }
    #define RGBLIGHT_SPLIT

	//#define RGBLIGHT_LED_COUNT 30
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 8
    #define RGBLIGHT_SAT_STEP 8
    #define RGBLIGHT_VAL_STEP 8
#endif

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120
#define SPLIT_WPM_ENABLE
