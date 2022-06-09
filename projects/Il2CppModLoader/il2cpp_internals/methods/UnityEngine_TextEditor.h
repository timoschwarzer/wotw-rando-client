#include <interception_macros.h>

namespace app::methods::UnityEngine::TextEditor {
IL2CPP_REGISTER_METHOD(0x03182CE0, void, __ctor, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03182EC0, String *, get_text, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03182EE0, void, set_text, (app::TextEditor * this_ptr, app::String * value));
IL2CPP_REGISTER_METHOD(0x03182FB0, Rect, get_position, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03182FC0, void, set_position, (app::TextEditor * this_ptr, app::Rect value));
IL2CPP_REGISTER_METHOD(0x03182FB0, Rect, get_localPosition, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183020, int32_t, get_cursorIndex, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183030, void, set_cursorIndex, (app::TextEditor * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x03183080, int32_t, get_selectIndex, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183090, void, set_selectIndex, (app::TextEditor * this_ptr, int32_t value));
IL2CPP_REGISTER_METHOD(0x031830E0, void, ClearCursorPos, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031830F0, void, OnFocus, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031831A0, void, OnLostFocus, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183260, void, GrabGraphicalCursorPos, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183400, bool, HandleKeyEvent, (app::TextEditor * this_ptr, app::Event * e));
IL2CPP_REGISTER_METHOD(0x03183780, bool, DeleteLineBack, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183870, bool, DeleteWordBack, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183980, bool, DeleteWordForward, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183A20, bool, Delete, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183AC0, bool, Backspace, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183BE0, void, SelectAll, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183C90, void, SelectNone, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183CF0, bool, get_hasSelection, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183D00, bool, DeleteSelection, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03183EE0, void, ReplaceSelection, (app::TextEditor * this_ptr, app::String * replace));
IL2CPP_REGISTER_METHOD(0x03183FE0, void, Insert, (app::TextEditor * this_ptr, uint16_t c));
IL2CPP_REGISTER_METHOD(0x03184010, void, MoveRight, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184130, void, MoveLeft, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184240, void, MoveUp, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184400, void, MoveDown, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184610, void, MoveLineStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184720, void, MoveLineEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184850, void, MoveGraphicalLineStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184900, void, MoveGraphicalLineEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031849B0, void, MoveTextStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184A40, void, MoveTextEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184B00, int32_t, IndexOfEndOfLine, (app::TextEditor * this_ptr, int32_t start_index));
IL2CPP_REGISTER_METHOD(0x03184B70, void, MoveParagraphForward, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184C80, void, MoveParagraphBackward, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03184DE0, void, MoveCursorToPosition, (app::TextEditor * this_ptr, app::Vector2 cursor_position));
IL2CPP_REGISTER_METHOD(0x03184E80, void, MoveCursorToPosition_Internal, (app::TextEditor * this_ptr, app::Vector2 cursor_position, bool shift));
IL2CPP_REGISTER_METHOD(0x031850B0, void, SelectToPosition, (app::TextEditor * this_ptr, app::Vector2 cursor_position));
IL2CPP_REGISTER_METHOD(0x03185910, void, SelectLeft, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031859F0, void, SelectRight, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03185AD0, void, SelectUp, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03185BF0, void, SelectDown, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03185D30, void, SelectTextEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03185DB0, void, SelectTextStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03185E10, void, MouseDragSelectsWholeWords, (app::TextEditor * this_ptr, bool on));
IL2CPP_REGISTER_METHOD(0x0074AB20, void, DblClickSnap, (app::TextEditor * this_ptr, app::TextEditor_DblClickSnapping__Enum snapping));
IL2CPP_REGISTER_METHOD(0x03185E20, int32_t, GetGraphicalLineStart, (app::TextEditor * this_ptr, int32_t p));
IL2CPP_REGISTER_METHOD(0x03185F90, int32_t, GetGraphicalLineEnd, (app::TextEditor * this_ptr, int32_t p));
IL2CPP_REGISTER_METHOD(0x03186130, int32_t, FindNextSeperator, (app::TextEditor * this_ptr, int32_t start_pos));
IL2CPP_REGISTER_METHOD(0x03186200, int32_t, FindPrevSeperator, (app::TextEditor * this_ptr, int32_t start_pos));
IL2CPP_REGISTER_METHOD(0x031862C0, void, MoveWordRight, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186430, void, MoveToStartOfNextWord, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186500, void, MoveToEndOfPreviousWord, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031865D0, void, SelectToStartOfNextWord, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186640, void, SelectToEndOfPreviousWord, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031866B0, TextEditor_CharacterType__Enum, ClassifyChar, (app::TextEditor * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x03186800, int32_t, FindStartOfNextWord, (app::TextEditor * this_ptr, int32_t p));
IL2CPP_REGISTER_METHOD(0x03186A10, int32_t, FindEndOfPreviousWord, (app::TextEditor * this_ptr, int32_t p));
IL2CPP_REGISTER_METHOD(0x03186AF0, void, MoveWordLeft, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186C60, void, SelectWordRight, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186DA0, void, SelectWordLeft, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186EE0, void, ExpandSelectGraphicalLineStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03186FD0, void, ExpandSelectGraphicalLineEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031870C0, void, SelectGraphicalLineStart, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03187130, void, SelectGraphicalLineEnd, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031871A0, void, SelectParagraphForward, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03187270, void, SelectParagraphBackward, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x031873B0, void, SelectCurrentWord, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03187810, int32_t, FindEndOfClassification, (app::TextEditor * this_ptr, int32_t p, app::TextEditor_Direction__Enum dir));
IL2CPP_REGISTER_METHOD(0x03187970, void, SelectCurrentParagraph, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03187A80, void, UpdateScrollOffsetIfNeeded, (app::TextEditor * this_ptr, app::Event * evt));
IL2CPP_REGISTER_METHOD(0x03187B40, void, UpdateScrollOffset, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03188300, void, DrawCursor, (app::TextEditor * this_ptr, app::String * new_text));
IL2CPP_REGISTER_METHOD(0x03188AE0, bool, PerformOperation, (app::TextEditor * this_ptr, app::TextEditor_TextEditOp__Enum operation));
IL2CPP_REGISTER_METHOD(0x03189B30, void, SaveBackup, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03189B70, bool, Cut, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03189BA0, void, Copy, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03189C80, String *, ReplaceNewlinesWithSpaces, (app::String * value));
IL2CPP_REGISTER_METHOD(0x03189D60, bool, Paste, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x03189F50, void, MapKey, (app::String * key, app::TextEditor_TextEditOp__Enum action));
IL2CPP_REGISTER_METHOD(0x0318A030, void, InitKeyActions, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x00CC2AF0, void, DetectFocusChange, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x0318A790, void, OnDetectFocusChange, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnCursorIndexChange, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSelectIndexChange, (app::TextEditor * this_ptr));
IL2CPP_REGISTER_METHOD(0x0318A980, void, ClampTextIndex, (app::TextEditor * this_ptr, app::int32_t * index));
IL2CPP_REGISTER_METHOD(0x0318AA70, void, EnsureValidCodePointIndex, (app::TextEditor * this_ptr, app::int32_t * index));
IL2CPP_REGISTER_METHOD(0x0318AC60, bool, IsValidCodePointIndex, (app::TextEditor * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x0318AD90, int32_t, PreviousCodePointIndex, (app::TextEditor * this_ptr, int32_t index));
IL2CPP_REGISTER_METHOD(0x0318AEA0, int32_t, NextCodePointIndex, (app::TextEditor * this_ptr, int32_t index));
}
