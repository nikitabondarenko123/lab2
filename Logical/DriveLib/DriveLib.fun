
{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK DriveStateMachine (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		state : {REDUND_UNREPLICABLE} UINT; (*��������� ��������� ���������������*)
		enable : {REDUND_UNREPLICABLE} BOOL; (*������ ������ ��������������� �����*)
	END_VAR
	VAR_OUTPUT
		command : {REDUND_UNREPLICABLE} UINT; (*�������, ���������� �� ��������� ���������������*)
		speed : {REDUND_UNREPLICABLE} INT; (*�������� ��������*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} {REDUND_UNREPLICABLE} FUNCTION_BLOCK DoorStateMachine (*TODO: Add your comment here*) (*$GROUP=User,$CAT=User,$GROUPICON=User.png,$CATICON=User.png*)
	VAR_INPUT
		state : {REDUND_UNREPLICABLE} DoorStates; (*��������� ���������� ���������������*)
		sw0 : {REDUND_UNREPLICABLE} BOOL; (*������ ��������� ����������� 1*)
		sw1 : {REDUND_UNREPLICABLE} BOOL; (*������ ��������� ����������� 2*)
		sw2 : {REDUND_UNREPLICABLE} BOOL; (*������ ��������� ����������� 3*)
		sw3 : {REDUND_UNREPLICABLE} BOOL; (*������ ��������� ����������� 4*)
		direction : {REDUND_UNREPLICABLE} BOOL; (*�������, ���������� �� ��������� ���������������*)
	END_VAR
	VAR_OUTPUT
		speed : {REDUND_UNREPLICABLE} INT; (*�������� ��������*)
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
		state : {REDUND_UNREPLICABLE} UINT; (*��������� ���������� ���������������*)
	END_VAR
	VAR_OUTPUT
		led0 : {REDUND_UNREPLICABLE} BOOL; (*������ ������ ��������������� �����*)
		led1 : {REDUND_UNREPLICABLE} BOOL; (*������ ������ ��������������� �����*)
		led2 : {REDUND_UNREPLICABLE} BOOL; (*������ ������ ��������������� �����*)
		led3 : {REDUND_UNREPLICABLE} BOOL; (*������ ������ ��������������� �����*)
		timer : {REDUND_UNREPLICABLE} INT; (*�������� ��������*)
	END_VAR
END_FUNCTION_BLOCK
