#pragma once

// 사용자 정의 자료형
enum TERRAIN
{
	TR_CEMENT, TR_GROUND, TR_GRASS, TR_WATER, TR_END,
};

//enum DS_STATE
//{
//	LEFT = -1,
//	NONE,
//	RIGHT = 1
//};

//Extern

extern HWND			_hWnd;
extern HINSTANCE	_hInst;
extern POINT		_ptMouse;

#if defined(_MOVIE_TEST)
extern HWND			_hWndAvi;
#endif//



struct SPERE
{
	float x, y;
	float r;
};