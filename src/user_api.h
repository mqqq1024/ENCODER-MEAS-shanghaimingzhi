/***************************************************************
�û�����API����

***************************************************************/

#ifndef __USER_API__
#define __USER_API__

#include "config.h"

////////////////////////////////////////////////////////
//ͨ�ú궨��

//ȡ���ӽ����ݵĸ��ֽں͵�ַ��
#define HSB_OF_16(x) ((uint8)((x >> 8)& 0xff))
#define LSB_OF_16(x) ((uint8)(x & 0xff))
////////////////////////////////////////////////////////

//����CRC16ֵ
uint16 get_crc16(uint8 * buf, int len);
uint16 get_crc16_standard(uint8 * buf, int len);
//����CRC107ֵ
uint8 get_crc107(uint8 *buff, uint32 len);
//�õ�iλΪ1
void set_1(uint8* p, uint32 index);
//�õ�iλΪ0
void set_0(uint8* p, uint32 index);

uint16 get_neg_true_form(int16 neg);

int16 get_complement_code(uint16 x);

uint32 get_elapsed_ticks(uint32 pre_tick, uint32 cur_tick);
//////////////////////////////////////////////////////////

#endif
