#include <stddef.h>
#include "model_list.h"

struct eos_model_desc eos_model_list[] = {
    {
        /* defaults for DIGIC 4 cameras */
        .digic_version          = 4,
        /* note: some cameras have smaller ROMs, or only one ROM */
        .rom0_addr              = 0xF0000000,
        .rom0_size              = 0x01000000,
        .rom1_addr              = 0xF8000000,
        .rom1_size              = 0x01000000,
        .io_mem_size            = 0x10000000,
        .firmware_start         = 0xFF010000,
        .bootflags_addr         = 0xF8000000,
        .dryos_timer_id         = 2,
        .dryos_timer_interrupt  = 0x0A,
        .hptimer_interrupt      = 0x10,
        .sd_driver_interrupt    = 0xB1,
        .sd_dma_interrupt       = 0xB8,
        .card_led_address       = 0xC0220134,   /* SD */
        .mpu_request_register   = 0xC022009C,
    },
    {
        /* defaults for DIGIC 5 cameras */
        .digic_version          = 5,
        .rom0_addr              = 0xF0000000,
        .rom0_size              = 0x01000000,
        .rom1_addr              = 0xF8000000,
        .rom1_size              = 0x01000000,
        .io_mem_size            = 0x10000000,
        .firmware_start         = 0xFF0C0000,
        .bootflags_addr         = 0xF8000000,
        .dryos_timer_id         = 2,
        .dryos_timer_interrupt  = 0x0A,
        .hptimer_interrupt      = 0x10,
        .sd_driver_interrupt    = 0x172,
        .sd_dma_interrupt       = 0x171,
        .card_led_address       = 0xC022C188,   /* SD */
    },
    {
        /* defaults for DIGIC 6 cameras */
        .digic_version          = 6,
        .rom0_size              = 0,    /* not dumped yet, camera locks up (?!) */
        .rom1_addr              = 0xFC000000,
        .rom1_size              = 0x02000000,
        .io_mem_size            = 0x20000000,
        .firmware_start         = 0xFE0A0000,
        .bootflags_addr         = 0xFC040000,
        .dryos_timer_id         = 1,
        .dryos_timer_interrupt  = 0x1B,
        .hptimer_interrupt      = 0x28,
        .sd_driver_interrupt    = 0xEE,
        .sd_dma_interrupt       = 0xBE,
        .card_led_address       = 0xD20B0A24,
    },
    {
        .name                   = "50D",
        .digic_version          = 4,
        .card_led_address       = 0xC02200BC,
    },
    {
        .name                   = "60D",
        .digic_version          = 4,
        .current_task_addr      = 0x1A2C,
    },
    {
        .name                   = "600D",
        .digic_version          = 4,
    },
    {
        .name                   = "500D",
        .digic_version          = 4,
    },
    {
        .name                   = "5D2",
        .digic_version          = 4,
        .firmware_start         = 0xFF810000,
        .card_led_address       = 0xC02200BC,
    },
    {
        .name                   = "5D3",
        .digic_version          = 5,
        .current_task_addr      = 0x23E14,
        .mpu_request_register   = 0xC02200BC,
        .card_led_address       = 0xC022C06C,
    },
    {
        .name                   = "650D",
        .digic_version          = 5,
    },
    {
        .name                   = "100D",
        .digic_version          = 5,
        .mpu_request_register   = 0xC022006C,
        .serial_flash_size      = 0x1000000,
        .io_mem_size            = 0x20000000,
    },
    {
        .name                   = "7D",
        .digic_version          = 4,
        .card_led_address       = 0xC022D06C,
    },
    {
        .name                   = "550D",
        .digic_version          = 4,
    },
    {
        .name                   = "6D",
        .digic_version          = 5,
        .card_led_address       = 0xC022C184,
    },
    {
        .name                   = "70D",
        .digic_version          = 5,
        .current_task_addr      = 0x7AAC0,
        .mpu_request_register   = 0xC02200BC,
        .card_led_address       = 0xC022C06C,
        .serial_flash_size      = 0x800000,
    },
    {
        .name                   = "700D",
        .serial_flash_size      = 0x800000,
        .digic_version          = 5,
    },
    {
        .name                   = "1100D",
        .digic_version          = 4,
    },
    {
        .name                   = "1200D",
        .digic_version          = 4,
        .firmware_start         = 0xFF0C0000,
        .current_task_addr      = 0x1A2C,
        .card_led_address       = 0xC0220134,
    },
    {
        .name                   = "EOSM",
        .digic_version          = 5,
    },
    {
        .name                   = "EOSM3",
        .digic_version          = 6,
        .firmware_start         = 0xFC000000,
        .rom0_addr              = 0xFB800000,
        .rom0_size              = 0x800000,
        .current_task_addr      = 0x803C,
        .card_led_address       = 0xD20B0994,
    },
    {
        .name                   = "7D2M",
        .digic_version          = 6,
        .current_task_addr      = 0x28568,
        .card_led_address       = 0xD20B0C34,
        .ram_manufacturer_id    = 0x18000103,   /* 80D bootloader */
    },
    {
        .name                   = "7D2S",
        .digic_version          = 6,
        .card_led_address       = 0xD20B0C34,   /* not sure */
        .ram_manufacturer_id    = 0x18000103,   /* 80D bootloader */
    },
    {
        .name                   = "80D",
        .digic_version          = 6,
        .ram_manufacturer_id    = 0x18000103,   /* RAM manufacturer: Micron */
    },
    {
        .name                   = "750D",
        .digic_version          = 6,
        .ram_manufacturer_id    = 0x14000203,
    },
    {
        .name                   = "760D",
        .digic_version          = 6,
        .ram_manufacturer_id    = 0x14000203,
    },
    {
        .name = NULL,
        .digic_version = 0,
    }
};

