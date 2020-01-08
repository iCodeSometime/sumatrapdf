/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

bool IsEngineMultiSupportedFile(const WCHAR* fileName, bool sniff = false);
EngineBase* CreateEngineMultiFromFile(const WCHAR* fileName, PasswordUI* pwdUI = nullptr);
