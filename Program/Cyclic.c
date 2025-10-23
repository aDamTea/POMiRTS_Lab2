
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
    stateMachine.speed = doorSM.speed;
	FB_DoorSM(&doorSM);
    FB_StateMachine(&stateMachine);
    ledSM.state = doorSM.state;
    FB_LedSM(&ledSM);
}
