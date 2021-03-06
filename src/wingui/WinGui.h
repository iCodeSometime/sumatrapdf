/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

struct WmCommandArgs {
    HWND hwnd = nullptr;
    int id = 0;
    int ev = 0;
    WPARAM wparam = 0;
    LPARAM lparam = 0;

    bool didHandle = false;
    LRESULT result = 0;
};

typedef std::function<void(WmCommandArgs*)> OnWmCommand;

SIZE MeasureTextInHwnd(HWND hwnd, const WCHAR* txt, HFONT font);
char* getWinMessageName(UINT msg);
