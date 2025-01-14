// For licensing and usage information, read docs/winui_license.txt
//****************************************************************************
//============================================================
//
//  softwarepicker.h - MESS's software picker
//
//============================================================

#include "swconfig.h"

LPCSTR SoftwarePicker_LookupFilename(HWND hwndPicker, int nIndex);
const device_image_interface *SoftwarePicker_LookupDevice(HWND hwndPicker, int nIndex);
int SoftwarePicker_LookupIndex(HWND hwndPicker, LPCSTR pszFilename);
string SoftwarePicker_GetImageType(HWND hwndPicker, int nIndex);
BOOL SoftwarePicker_AddFile(HWND hwndPicker, LPCSTR pszFilename, bool check);
BOOL SoftwarePicker_AddDirectory(HWND hwndPicker, LPCSTR pszDirectory);
void SoftwarePicker_Clear(HWND hwndPicker);
void SoftwarePicker_SetDriver(HWND hwndPicker, const software_config *config);

// PickerOptions callbacks
LPCTSTR SoftwarePicker_GetItemString(HWND hwndPicker, int nRow, int nColumn, TCHAR *pszBuffer, UINT nBufferLength);
BOOL SoftwarePicker_Idle(HWND hwndPicker);

BOOL SetupSoftwarePicker(HWND hwndPicker, const struct PickerOptions *pOptions);
bool uses_file_extension(device_image_interface &dev, const char *file_extension);
