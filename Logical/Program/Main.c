
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	doorSM.state = ST_INIT;
	doorSM.sw0_prev = doorSM.sw0;
	doorSM.sw1_prev = doorSM.sw1;
	doorSM.sw2_prev = doorSM.sw2;
	doorSM.sw3_prev = doorSM.sw3;
}

void _CYCLIC ProgramCyclic(void)
{
	DoorStateMachine(&doorSM);
	driveSM.enable = 1;
	driveSM.speed = doorSM.speed;
	LedStateMachine(&ledSM);
	ledSM.state = doorSM.state;
	DriveStateMachine(&driveSM);	
}

void _EXIT ProgramExit(void)
{

}

