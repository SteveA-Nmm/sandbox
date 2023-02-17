// AIOUSB_dll_VEE.h : Header file for hp VEE, modified from 
// AIOUSB.h : Header file for AIOUSB.dll
// 
//
//For Borland C++ Builder, use CBAIOUSB.lib
//For Microsoft Visual C++, use VCAIOUSB.lib

#ifdef __cplusplus
extern "C" {
#endif



#define diNone 0xFFFFFFFF
#define diFirst 0xFFFFFFFE
#define diOnly 0xFFFFFFFD

#define TIME_METHOD_NOW 0
#define TIME_METHOD_WAIT_INPUT_ENABLE 86
#define TIME_METHOD_NOW_AND_ABORT 5
#define TIME_METHOD_WHEN_INPUT_ENABLE 1


long ResolveDeviceIndex( long DeviceIndex);
// 29 __declspec(dllimport) unsigned long ResolveDeviceIndex(unsigned long DeviceIndex);
long DIO_Configure( long DeviceIndex, short bTristate, short* pOutMask, short* pData);
//__declspec(dllimport) unsigned long DIO_Configure(unsigned long DeviceIndex, unsigned char bTristate, void *pOutMask, void *pData);
long DIO_Read8(long DeviceIndex, long ByteIndex, char *pBuffer);
//132 __declspec(dllimport) unsigned long DIO_Read8(unsigned long DeviceIndex, unsigned long ByteIndex, unsigned char *pBuffer);
long DIO_Write8(long DeviceIndex, long ByteIndex, char* Data);
//136 __declspec(dllimport) unsigned long DIO_Write8(unsigned long DeviceIndex, unsigned long ByteIndex, unsigned char Data);



//Note that all error codes returned are Windows error codes; they can be found in winerror.h in the Windows SDK, or on the Web.

#ifdef __cplusplus
}
#endif
