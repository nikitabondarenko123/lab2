/* Automation Studio generated header file */
/* Do not edit ! */
/* DriveLib  */

#ifndef _DRIVELIB_
#define _DRIVELIB_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define STATE_DISABLED 64U
 #define STATE_READY 33U
 #define STATE_SWITCHED_ON 35U
 #define CMD_SHUTDOWN 6U
 #define CMD_ENABLED 15U
 #define CMD_SWITCHED_ON 7U
#else
 _GLOBAL_CONST unsigned char STATE_DISABLED;
 _GLOBAL_CONST unsigned char STATE_READY;
 _GLOBAL_CONST unsigned char STATE_SWITCHED_ON;
 _GLOBAL_CONST unsigned char CMD_SHUTDOWN;
 _GLOBAL_CONST unsigned char CMD_ENABLED;
 _GLOBAL_CONST unsigned char CMD_SWITCHED_ON;
#endif




/* Datatypes and datatypes of function blocks */
typedef enum DoorStates
{	ST_INIT,
	ST_UNKNOWN,
	ST_OPEN,
	ST_CLOSE,
	ST_ACC_POS,
	ST_ACC_NEG,
	ST_POS,
	ST_NEG,
	ST_DEC_POS,
	ST_DEC_NEG
} DoorStates;

typedef struct DriveStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short command;
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit enable;
} DriveStateMachine_typ;

typedef struct DoorStateMachine
{
	/* VAR_INPUT (analog) */
	enum DoorStates state;
	/* VAR_OUTPUT (analog) */
	signed short speed;
	/* VAR_INPUT (digital) */
	plcbit sw0;
	plcbit sw1;
	plcbit sw2;
	plcbit sw3;
	plcbit direction;
	/* VAR (digital) */
	plcbit sw0_prev;
	plcbit sw1_prev;
	plcbit sw2_prev;
	plcbit sw3_prev;
} DoorStateMachine_typ;

typedef struct LedStateMachine
{
	/* VAR_INPUT (analog) */
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	signed short timer;
	/* VAR_OUTPUT (digital) */
	plcbit led0;
	plcbit led1;
	plcbit led2;
	plcbit led3;
} LedStateMachine_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void DriveStateMachine(struct DriveStateMachine* inst);
_BUR_PUBLIC void DoorStateMachine(struct DoorStateMachine* inst);
_BUR_PUBLIC void LedStateMachine(struct LedStateMachine* inst);


#ifdef __cplusplus
};
#endif
#endif /* _DRIVELIB_ */

