
#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
	#include "DriveLib.h"
#ifdef __cplusplus
	};
#endif
/* TODO: Add your comment here */
void DoorStateMachine(struct DoorStateMachine* inst)
{			
	switch (inst->state){
		case ST_INIT:
			{
				if (inst->direction == 0)
					inst->speed = -100; //max = 890
				else 
					inst->speed = 100;
				inst->state = ST_UNKNOWN;
				break;
			}
		
		case ST_UNKNOWN:
			{
				if (inst->direction == 1 && inst->sw0 != inst->sw0_prev){
					inst->speed = 0;
					inst->state = ST_OPEN;
					inst->sw0_prev = inst->sw0;
				}
				if (inst->direction == 0 && inst->sw3 != inst->sw3_prev){
					inst->speed = 0;
					inst->state = ST_CLOSE;
					inst->sw3_prev = inst->sw3;
				}
				break;
			}
		
		case ST_OPEN:
			{
				if (inst->direction == 0){
					inst->speed = 100;
					inst->state = ST_ACC_POS;
				}
				break;
			}
			
		case ST_ACC_POS:
			{
				if (inst->sw1 != inst->sw1_prev){
					inst->speed = 500;
					inst->state = ST_POS;
					inst->sw1_prev = inst->sw1;
				}
				
				if (inst->direction == 1){
					inst->speed = -100;
					inst->state = ST_DEC_NEG;
				}
				break;
			}
		
		case ST_POS:
			{
				if (inst->sw2 != inst->sw2_prev){
					inst->speed = 100;
					inst->state = ST_DEC_POS;
					inst->sw2_prev = inst->sw2;
				}
				if (inst->direction == 1){
					inst->speed = -500;
					inst->state = ST_NEG;
				}
				break;
			}
		
		case ST_DEC_POS:
			{
				if (inst->sw3 != inst->sw3_prev){
					inst->speed = 0;
					inst->state = ST_CLOSE;
					inst->sw3_prev = inst->sw3;
				}
				if (inst->direction == 1){
					inst->speed = -100;
					inst->state = ST_ACC_NEG;
				}
				break;
			}
		
		case ST_CLOSE:
			{
				if (inst->direction == 1){
					inst->speed = -100;
					inst->state = ST_ACC_NEG;
				}
				break;
			} 
		
		case ST_ACC_NEG:
			{
				if (inst->sw2 != inst->sw2_prev){
					inst->speed = -500;
					inst->state = ST_NEG;
					inst->sw2_prev = inst->sw2;
				}
				if (inst->direction == 0){
					inst->speed = 100;
					inst->state = ST_DEC_POS;
				}
				break;
			}
		
		case ST_NEG:
			{
				if (inst->sw1 != inst->sw1_prev){
					inst->speed = -100;
					inst->state = ST_DEC_NEG;
					inst->sw1_prev = inst->sw1;
				}
				if (inst->direction == 0){
					inst->speed = 500;
					inst->state = ST_POS;
				}
				break;
			}
		
		case ST_DEC_NEG:
			{
				if (inst->sw0 != inst->sw0_prev){
					inst->speed = 0;
					inst->state = ST_OPEN;
					inst->sw0_prev = inst->sw0;
				}
				if (inst->direction == 0){
					inst->speed = 100;
					inst->state = ST_ACC_POS;
				}
				break;
			}
	}
}
