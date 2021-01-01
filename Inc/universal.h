/*
 * Some universal macro definition and header file
 * Created by Gaein nidb, https://www.gaein.cn
 * North Universal Of China
 */

#ifndef _UNIVERSAL_H_
#define _UNIVERSAL_H_

/*------8x16 ��Դ------*/

// 8x16 С������1
#define RES_ID_8x16_CACTUS_1 (0)
// 8x16 С������2
#define RES_ID_8x16_CACTUS_2 (2)
// 8x16 С������3
#define RES_ID_8x16_CACTUS_3 (4)
// 8x16 С������4
#define RES_ID_8x16_CACTUS_4 (6)
// 8x16 ����������
#define RES_ID_8x16_NUM(n) (n*2)

/*------16x16 ��Դ------*/

// 16x16 ����1
#define RES_ID_16x16_DINO_1 (0)
// 16x16 ����2
#define RES_ID_16x16_DINO_2 (2)
// 16x16 ������̬
#define RES_ID_16x16_DINO_3 (4)
// 16x16 dino died
#define RES_ID_16x16_DINO_4 (6)
// 16x16 cactus1
#define RES_ID_16x16_CACTUS_1 (8)

#define RES_ID_16x16_CACTUS_2 (10)

#define RES_ID_16x16_CACTUS_3 (12)


/*------16x32 ��Դ------*/

// 16x32 ��������1
#define RES_ID_16x32_CACTUS_1 (0)
// 16x32 ��������2
#define RES_ID_16x32_CACTUS_2 (4)
// 16x32 ��������3
#define RES_ID_16x32_CACTUS_3 (8)
// 16x32 ��������4
#define RES_ID_16x32_CACTUS_4 (12)

/*------16x32 ��Դ------*/

// 32x32 ���¿�ʼ
#define RES_ID_32x32_RESTART (0)

/*------64x32��Դ------*/

// 64x32 GAME�ַ���
#define RES_ID_64x32_GAME (0)
// 64x32 OVER�ַ���
#define RES_ID_64x32_OVER (4)

// ������Ϸ��Դ��С
#define RES_SIZE_8x16 (0)
#define RES_SIZE_16x16 (1)
#define RES_SIZE_16x32 (2)
#define RES_SIZE_32x32 (3)
#define RES_SIZE_64x32 (4)
#define RES_SIZE_64x64 (5)

// system lib include
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

// stm32 lib include
#include "i2c.h"
#include "gpio.h"

#endif