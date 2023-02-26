typedef enum {
    LED_COLOR_RED, LED_COLOR_GREEN, LED_COLOR_YELLOW, LED_COLOR_ANY
} pl_color_t;

typedef enum {
    PARTS_LEDS_STATE_ON, PARTS_LEDS_STATE_OFF
} pl_state_t;

typedef enum {
    PARTS_LEDS_ERR_SUCCESS, PARTS_LEDS_ERR_FAILURE
} pl_err_t;

typedef signed char pl_led_index_t;
typedef unsigned char pl_led_size_t;

static const pl_led_index_t pl_unknownLED = -1;

const pl_err_t pl_setLED(pl_led_index_t led, pl_state_t state);
const pl_led_index_t pl_getFirstLED(pl_color_t color);
const pl_color_t pl_getLEDColor(pl_led_index_t led);
const pl_led_size_t pl_getLEDCount(pl_color_t color);

extern const int ledCount;
