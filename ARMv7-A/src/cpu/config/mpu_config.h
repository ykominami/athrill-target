#ifndef _MPU_CONFIG_H_
#define _MPU_CONFIG_H_

#include "std_types.h"
#include "loader/elf.h"

#define MPU_CONFIG_REGION_NUM		UINT_C(7)

#define MPU_ADDRESS_REGION_INX_INTC		(0U)
#define MPU_ADDRESS_REGION_INX_TIMER	(1U)
#define MPU_ADDRESS_REGION_INX_SERIAL	(2U)
#define MPU_ADDRESS_REGION_INX_VDEV		(3U)
#define MPU_ADDRESS_REGION_INX_PH0		(4U)
#define MPU_ADDRESS_REGION_INX_PH1		(5U)
#define MPU_ADDRESS_REGION_INX_CPU		(6U)

#define ELF_MACHINE_TYPE	EM_ARM


#endif /* _MPU_CONFIG_H_ */
