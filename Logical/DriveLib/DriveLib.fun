
{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK DriveStateMachine (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		state : {REDUND_UNREPLICABLE} UINT; (*Состояние частотног преобразователя*)
		enable : {REDUND_UNREPLICABLE} BOOL; (*Сигнал работы функционального блока*)
	END_VAR
	VAR_OUTPUT
		command : {REDUND_UNREPLICABLE} UINT; (*Команда, подаваемая на частотный преобразователь*)
		speed : {REDUND_UNREPLICABLE} INT; (*Заданная скорость*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK DoorStateMachine (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		state : {REDUND_UNREPLICABLE} DoorStates; (*Состояние частотного преобразователя*)
		sw0 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал концевого выключателя 1*)
		sw1 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал концевого выключателя 2*)
		sw2 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал концевого выключателя 3*)
		sw3 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал концевого выключателя 4*)
		direction : {REDUND_UNREPLICABLE} BOOL; (*Команда, подаваемая на частотный преобразователь*)
	END_VAR
	VAR_OUTPUT
		speed : {REDUND_UNREPLICABLE} INT; (*Заданная скорость*)
	END_VAR
	VAR
		sw0_prev : {REDUND_UNREPLICABLE} BOOL;
		sw1_prev : {REDUND_UNREPLICABLE} BOOL;
		sw2_prev : {REDUND_UNREPLICABLE} BOOL;
		sw3_prev : {REDUND_UNREPLICABLE} BOOL;
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK LedStateMachine (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		state : {REDUND_UNREPLICABLE} UINT; (*Состояние частотного преобразователя*)
	END_VAR
	VAR_OUTPUT
		led0 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал работы функционального блока*)
		led1 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал работы функционального блока*)
		led2 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал работы функционального блока*)
		led3 : {REDUND_UNREPLICABLE} BOOL; (*Сигнал работы функционального блока*)
		timer : {REDUND_UNREPLICABLE} INT; (*Заданная скорость*)
	END_VAR
END_FUNCTION_BLOCK
