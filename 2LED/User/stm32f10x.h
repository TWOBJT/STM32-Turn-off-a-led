#define PERIPH_BASE        ((unsigned int)0x40000000)
#define APB2PERIPH_BASE    (PERIPH_BASE + 0x00010000)
#define GPIOE_BASE         (APB2PERIPH_BASE + 0x1800)
#define GPIOE_CRL          *(unsigned int*)(GPIOE_BASE+0X00)
#define GPIOE_CRH          *(unsigned int*)(GPIOE_BASE+0X04)
#define GPIOE_IDR          *(unsigned int*)(GPIOE_BASE+0X08)
#define GPIOE_ODR          *(unsigned int*)(GPIOE_BASE+0X0C)
#define GPIOE_BSRR         *(unsigned int*)(GPIOE_BASE+0X10)
#define GPIOE_BRR          *(unsigned int*)(GPIOE_BASE+0X14)
#define GPIOE_LCKR         *(unsigned int*)(GPIOE_BASE+0X18)
#define AHBPERIPH_BASE      (PERIPH_BASE + 0X20000)
#define RCC_BASE            (AHBPERIPH_BASE + 0x1000)
#define RCC_APB2ENR        *(unsigned int*)(RCC_BASE+0x18)
