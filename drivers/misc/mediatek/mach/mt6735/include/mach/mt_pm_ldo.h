
#ifndef _MT_PMIC_LDO_H_
#define _MT_PMIC_LDO_H_

#include <mach/mt_typedefs.h>

#define MAX_DEVICE      32
#define MAX_MOD_NAME    32

#define NON_OP "NOP"

/* Debug message event */
#define DBG_PMAPI_NONE 0x00000000    
#define DBG_PMAPI_CG   0x00000001    
#define DBG_PMAPI_PLL  0x00000002    
#define DBG_PMAPI_SUB  0x00000004    
#define DBG_PMAPI_PMIC 0x00000008    
#define DBG_PMAPI_ALL  0xFFFFFFFF    
    
#define DBG_PMAPI_MASK (DBG_PMAPI_ALL)



typedef enum MT65XX_POWER_TAG {    

    MT6328_POWER_LDO_VAUX18=0,     
    MT6328_POWER_LDO_VTCXO_0,     
    MT6328_POWER_LDO_VTCXO_1,     
    MT6328_POWER_LDO_VAUD28,    
    MT6328_POWER_LDO_VCN28,     
    MT6328_POWER_LDO_VCAMA,      
    MT6328_POWER_LDO_VCN33_BT,   
    MT6328_POWER_LDO_VCN33_WIFI,         
    MT6328_POWER_LDO_VUSB33,      
    MT6328_POWER_LDO_VEFUSE,    
    MT6328_POWER_LDO_VSIM1,     
    MT6328_POWER_LDO_VSIM2,       
    MT6328_POWER_LDO_VEMC33,        
    MT6328_POWER_LDO_VMCH,     
    MT6328_POWER_LDO_VTREF,      
    MT6328_POWER_LDO_VMC,    
    MT6328_POWER_LDO_VCAM_AF,       
    MT6328_POWER_LDO_VIO28,     
    MT6328_POWER_LDO_VGP1,      
    MT6328_POWER_LDO_VIBR,      
    MT6328_POWER_LDO_VCAMD,      
    MT6328_POWER_LDO_VRF18_0,      
    MT6328_POWER_LDO_VRF18_1,       
    MT6328_POWER_LDO_VIO18,      
    MT6328_POWER_LDO_VCN18,    
    MT6328_POWER_LDO_VCAM_IO,
    MT6328_POWER_LDO_VSRAM,       
    MT6328_POWER_LDO_VM,     
    
    MT65XX_POWER_LDO_DEFAULT,
    MT65XX_POWER_COUNT_END,
    MT65XX_POWER_NONE = -1
} MT65XX_POWER;

typedef enum MT65XX_POWER_VOL_TAG 
{
    VOL_DEFAULT, 
    VOL_0200 = 200000,
    VOL_0220 = 220000,
    VOL_0240 = 240000,
    VOL_0260 = 260000,
    VOL_0280 = 280000,
    VOL_0300 = 300000,
    VOL_0320 = 320000,
    VOL_0340 = 340000,
    VOL_0360 = 360000,
    VOL_0380 = 380000,
    VOL_0400 = 400000,
    VOL_0420 = 420000,
    VOL_0440 = 440000,
    VOL_0460 = 460000,
    VOL_0480 = 480000,
    VOL_0500 = 500000,
    VOL_0520 = 520000,
    VOL_0540 = 540000,
    VOL_0560 = 560000,
    VOL_0580 = 580000,
    VOL_0600 = 600000,
    VOL_0620 = 620000,
    VOL_0640 = 640000,
    VOL_0660 = 660000,
    VOL_0680 = 680000,
    VOL_0700 = 700000,
    VOL_0720 = 720000,
    VOL_0740 = 740000,
    VOL_0760 = 760000,
    VOL_0780 = 780000,
    VOL_0800 = 800000,        
    VOL_0900 = 900000,
    VOL_0950 = 950000,
    VOL_1000 = 1000000,
    VOL_1050 = 1050000,
    VOL_1100 = 1100000,
    VOL_1150 = 1150000,
    VOL_1200 = 1200000,
    VOL_1220 = 1220000,
    VOL_1250 = 1250000,
    VOL_1300 = 1300000,
    VOL_1350 = 1350000,
    VOL_1360 = 1360000,
    VOL_1400 = 1400000,
    VOL_1450 = 1450000,
    VOL_1500 = 1500000,
    VOL_1550 = 1550000,
    VOL_1600 = 1600000,
    VOL_1650 = 1650000,
    VOL_1700 = 1700000,
    VOL_1750 = 1750000,
    VOL_1800 = 1800000,
    VOL_1850 = 1850000,
    VOL_1860 = 1860000,
    VOL_1900 = 1900000,
    VOL_1950 = 1950000,
    VOL_2000 = 2000000,
    VOL_2050 = 2050000,
    VOL_2100 = 2100000,
    VOL_2150 = 2150000,
    VOL_2200 = 2200000,
    VOL_2250 = 2250000,
    VOL_2300 = 2300000,
    VOL_2350 = 2350000,
    VOL_2400 = 2400000,
    VOL_2450 = 2450000,
    VOL_2500 = 2500000,
    VOL_2550 = 2550000,
    VOL_2600 = 2600000,
    VOL_2650 = 2650000,
    VOL_2700 = 2700000,
    VOL_2750 = 2750000,
    VOL_2760 = 2760000,
    VOL_2800 = 2800000,
    VOL_2850 = 2850000,
    VOL_2900 = 2900000,
    VOL_2950 = 2950000,
    VOL_3000 = 3000000,
    VOL_3050 = 3050000,
    VOL_3100 = 3100000,
    VOL_3150 = 3150000,
    VOL_3200 = 3200000,
    VOL_3250 = 3250000,
    VOL_3300 = 3300000,
    VOL_3350 = 3350000,
    VOL_3400 = 3400000,
    VOL_3450 = 3450000,
    VOL_3500 = 3500000,
    VOL_3550 = 3550000,
    VOL_3600 = 3600000
} MT65XX_POWER_VOLTAGE;    


typedef struct { 
    DWORD dwPowerCount; 
    BOOL bDefault_on;
    char name[MAX_MOD_NAME];        
    char mod_name[MAX_DEVICE][MAX_MOD_NAME];    
} DEVICE_POWER;

typedef struct
{    
    DEVICE_POWER Power[MT65XX_POWER_COUNT_END];    
} ROOTBUS_HW;

//==============================================================================
// PMIC Exported Function for power service
//==============================================================================
extern void pmic_ldo_enable(MT65XX_POWER powerId, kal_bool powerEnable);
extern void pmic_ldo_vol_sel(MT65XX_POWER powerId, MT65XX_POWER_VOLTAGE powerVolt);

extern bool hwPowerOn(MT65XX_POWER powerId, int voltage_uv, char *mode_name);
extern bool hwPowerDown(MT65XX_POWER powerId, char *mode_name);

#endif // _MT_PMIC_LDO_H_

