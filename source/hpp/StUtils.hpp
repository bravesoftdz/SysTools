﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StUtils.pas' rev: 28.00 (Windows)

#ifndef StutilsHPP
#define StutilsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <StConst.hpp>	// Pascal unit
#include <StBase.hpp>	// Pascal unit
#include <StDate.hpp>	// Pascal unit
#include <StStrL.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Stutils
{
//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE short __fastcall MakeInteger16(System::Byte H, System::Byte L);
extern DELPHI_PACKAGE System::Byte __fastcall SwapNibble(System::Byte B);
extern DELPHI_PACKAGE int __fastcall SwapWord(int L);
extern DELPHI_PACKAGE void __fastcall SetFlag(System::Word &Flags, System::Word FlagMask);
extern DELPHI_PACKAGE void __fastcall ClearFlag(System::Word &Flags, System::Word FlagMask);
extern DELPHI_PACKAGE bool __fastcall FlagIsSet(System::Word Flags, System::Word FlagMask);
extern DELPHI_PACKAGE void __fastcall SetByteFlag(System::Byte &Flags, System::Byte FlagMask);
extern DELPHI_PACKAGE void __fastcall ClearByteFlag(System::Byte &Flags, System::Byte FlagMask);
extern DELPHI_PACKAGE bool __fastcall ByteFlagIsSet(System::Byte Flags, System::Byte FlagMask);
extern DELPHI_PACKAGE void __fastcall SetLongFlag(int &Flags, int FlagMask);
extern DELPHI_PACKAGE void __fastcall ClearLongFlag(int &Flags, int FlagMask);
extern DELPHI_PACKAGE bool __fastcall LongFlagIsSet(int Flags, int FlagMask);
extern DELPHI_PACKAGE void __fastcall ExchangeBytes(System::Byte &I, System::Byte &J);
extern DELPHI_PACKAGE void __fastcall ExchangeWords(System::Word &I, System::Word &J);
extern DELPHI_PACKAGE void __fastcall ExchangeLongInts(int &I, int &J);
extern DELPHI_PACKAGE void __fastcall ExchangeStructs(void *I, void *J, unsigned Size);
extern DELPHI_PACKAGE void __fastcall FillWord(void *Dest, unsigned Count, System::Word Filler);
extern DELPHI_PACKAGE void __fastcall FillStruct(void *Dest, unsigned Count, void *Filler, unsigned FillerSize);
extern DELPHI_PACKAGE void * __fastcall AddWordToPtr(void * P, System::Word W);
extern DELPHI_PACKAGE System::Word __fastcall MakeWord(System::Byte H, System::Byte L);
extern DELPHI_PACKAGE System::Word __fastcall MinWord(System::Word A, System::Word B);
extern DELPHI_PACKAGE System::Word __fastcall MaxWord(System::Word A, System::Word B);
extern DELPHI_PACKAGE int __fastcall MinLong(int A, int B);
extern DELPHI_PACKAGE int __fastcall MaxLong(int A, int B);
extern DELPHI_PACKAGE int __fastcall SignL(int L);
extern DELPHI_PACKAGE int __fastcall SignF(System::Extended F);
extern DELPHI_PACKAGE System::Word __fastcall MidWord(System::Word W1, System::Word W2, System::Word W3);
extern DELPHI_PACKAGE int __fastcall MidLong(int L1, int L2, int L3);
extern DELPHI_PACKAGE System::Extended __fastcall MidFloat(System::Extended F1, System::Extended F2, System::Extended F3);
extern DELPHI_PACKAGE System::Extended __fastcall MinFloat(System::Extended F1, System::Extended F2);
extern DELPHI_PACKAGE System::Extended __fastcall MaxFloat(System::Extended F1, System::Extended F2);
}	/* namespace Stutils */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STUTILS)
using namespace Stutils;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StutilsHPP