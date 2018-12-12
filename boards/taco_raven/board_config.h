#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define __SAMD51N19A__ 1

#define VENDOR_NAME "Voron Design"
#define PRODUCT_NAME "Taco Raven"
#define VOLUME_LABEL "TR_Boot"

#define USB_VID 0x03EB   // Atmel
#define USB_PID 0x2402   // Generic HID device

#define BOARD_ID "TacoRaven_revA"

#define BOOT_USART_MODULE                 SERCOM6
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBDMASK_SERCOM6
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM6_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM6_GCLK_ID_SLOW


#endif
