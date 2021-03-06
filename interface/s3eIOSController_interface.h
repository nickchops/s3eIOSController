/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
/**
 * Definitions for functions types passed to/from s3eExt interface
 */
typedef  s3eResult(*s3eIOSControllerRegister_t)(s3eIOSControllerCallback cbid, s3eCallback fn, void* userData);
typedef  s3eResult(*s3eIOSControllerUnRegister_t)(s3eIOSControllerCallback cbid, s3eCallback fn);
typedef     uint32(*s3eIOSControllerGetControllerCount_t)();
typedef s3eIOSController*(*s3eIOSControllerGetController_t)(uint32 index);
typedef    s3eBool(*s3eIOSControllerSupportsBasic_t)(s3eIOSController* controller);
typedef    s3eBool(*s3eIOSControllerSupportsExtended_t)(s3eIOSController* controller);
typedef    s3eBool(*s3eIOSControllerSupportsMicro_t)(s3eIOSController* controller);
typedef    s3eBool(*s3eIOSControllerGetReportsAbsoluteDpadValues_t)(s3eIOSController* controller);
typedef       void(*s3eIOSControllerSetReportsAbsoluteDpadValues_t)(s3eIOSController* controller, s3eBool value);
typedef    s3eBool(*s3eIOSControllerGetAllowsRotation_t)(s3eIOSController* controller);
typedef       void(*s3eIOSControllerSetAllowsRotation_t)(s3eIOSController* controller, s3eBool value);
typedef      int32(*s3eIOSControllerGetPlayerIndex_t)(s3eIOSController* controller);
typedef       void(*s3eIOSControllerSetPlayerIndex_t)(s3eIOSController* controller, int32 index);
typedef    s3eBool(*s3eIOSControllerGetButtonState_t)(s3eIOSController* controller, s3eIOSControllerButton button);
typedef      float(*s3eIOSControllerGetAxisValue_t)(s3eIOSController* controller, s3eIOSControllerAxis axis);

/**
 * struct that gets filled in by s3eIOSControllerRegister
 */
typedef struct s3eIOSControllerFuncs
{
    s3eIOSControllerRegister_t m_s3eIOSControllerRegister;
    s3eIOSControllerUnRegister_t m_s3eIOSControllerUnRegister;
    s3eIOSControllerGetControllerCount_t m_s3eIOSControllerGetControllerCount;
    s3eIOSControllerGetController_t m_s3eIOSControllerGetController;
    s3eIOSControllerSupportsBasic_t m_s3eIOSControllerSupportsBasic;
    s3eIOSControllerSupportsExtended_t m_s3eIOSControllerSupportsExtended;
    s3eIOSControllerSupportsMicro_t m_s3eIOSControllerSupportsMicro;
    s3eIOSControllerGetReportsAbsoluteDpadValues_t m_s3eIOSControllerGetReportsAbsoluteDpadValues;
    s3eIOSControllerSetReportsAbsoluteDpadValues_t m_s3eIOSControllerSetReportsAbsoluteDpadValues;
    s3eIOSControllerGetAllowsRotation_t m_s3eIOSControllerGetAllowsRotation;
    s3eIOSControllerSetAllowsRotation_t m_s3eIOSControllerSetAllowsRotation;
    s3eIOSControllerGetPlayerIndex_t m_s3eIOSControllerGetPlayerIndex;
    s3eIOSControllerSetPlayerIndex_t m_s3eIOSControllerSetPlayerIndex;
    s3eIOSControllerGetButtonState_t m_s3eIOSControllerGetButtonState;
    s3eIOSControllerGetAxisValue_t m_s3eIOSControllerGetAxisValue;
} s3eIOSControllerFuncs;
