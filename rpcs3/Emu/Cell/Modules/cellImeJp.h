#pragma once

#include "Emu/Memory/vm_ptr.h"

typedef vm::ptr<void> CellImeJpHandle;

//Input state of the ImeJp
enum {
	CELL_IMEJP_BEFORE_INPUT		= 0,
	CELL_IMEJP_BEFORE_CONVERT 	= 1,
	CELL_IMEJP_CONVERTING 		= 2,
	CELL_IMEJP_CANDIDATE_EMPTY 	= 3,
	CELL_IMEJP_POSTCONVERT_KANA	= 4,
	CELL_IMEJP_POSTCONVERT_HALF	= 5,
	CELL_IMEJP_POSTCONVERT_RAW 	= 6,
	CELL_IMEJP_CANDIDATES		= 7,
	CELL_IMEJP_MOVE_CLAUSE_GAP	= 8,
};

//cellImeJpEnterChar, returning values pointed in pOutputStatus.
enum {
	CELL_IMEJP_RET_NONE			= 0,
	CELL_IMEJP_RET_THROUGH		= 1,
	CELL_IMEJP_RET_CONFIRMED	= 2,
};
