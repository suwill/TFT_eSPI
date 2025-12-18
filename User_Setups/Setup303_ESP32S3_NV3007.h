// ShenZhen GoldenMorning Electronics Co., Ltd.
// NV3007 2.79" 142x428 TFT configuration
#define USER_SETUP_ID 3007

#ifndef TFT_RGB
#define TFT_RGB 1
#define TFT_BGR 0
#endif

#define USER_SETUP_INFO "NV3007_2.79_142x428"
#define NV3007_DRIVER

#define TFT_MISO  -1
#define TFT_MOSI  11
#define TFT_SCLK  12
#define TFT_CS    10
#define TFT_DC    13
#define TFT_RST   14
#define TFT_BL    15
#define TFT_BACKLIGHT_ON HIGH

#define TOUCH_CS -1

#define TFT_RGB_ORDER TFT_RGB
#define TFT_INVERSION_ON
#define CGRAM_OFFSET
#define TFT_COLUMN_OFFSET 12
#define TFT_ROW_OFFSET 10

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY 80000000
#define SPI_READ_FREQUENCY 5000000

#define SPI_TOUCH_FREQUENCY 2500000

#define USER_SETUP_LOADED
