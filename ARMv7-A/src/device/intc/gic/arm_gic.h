#ifndef _ARM_GIC_H_
#define _ARM_GIC_H_

#include "std_types.h"
#include "arm_gic_config.h"

typedef enum {
	GicIntrDetectType_LevelSensitive = 0,
	GicIntrDetectType_EdgeTriggered
} GicIntrDetectlType;

typedef enum {
	GicIntrType_PPI = 0,	// Private peripheral interrupt
	GicIntrType_SPI,		// Shared peripheral interrupt
	GicIntrType_SGI,		// Software-generated interrupt
} GicIntrType;

typedef struct {
	const char*					name;
	GicIntrType					type;
	/*
	 * Interrupt ID
	 */
	uint32						intrno;
	bool 						enable;
	uint32						priority;
	GicIntrDetectlType			dtype;
	/*
	 * not support Security Extensions
	 */
} GicInterruptType;

extern GicInterruptType	arm_gic_interrupt_table[GIC_INTR_NUM];

typedef struct {
	uint32						id;
	bool						enable;
	uint32						current_priority;
	uint32						priority_threshold;
	uint32						priority_mask;
} GicCpuInterfaceType;

extern GicCpuInterfaceType	arm_gic_cpu_interface_table[GIC_CPU_NUM];

typedef enum {
	GicIntrHandlingStateType_Inactive = 0,
	GicIntrHandlingStateType_Pending,
	GicIntrHandlingStateType_Active,
	GicIntrHandlingStateType_ActivePending,
} GicIntrHandlingStateType;

typedef struct {
	bool						assertion;
	GicIntrHandlingStateType	state;
	GicInterruptType 			*intr;
	GicCpuInterfaceType			*cpu_inf;
} GicIntrCpuConnectorType;

extern GicIntrCpuConnectorType	arm_gic_intr_cpu_connector_table[GIC_CONNECTOR_NUM];

#endif /* _ARM_GIC_H_ */
