//*************************************************************************************************
//
// GameLobbyDefs.h
//
// ISC Casino
// Chat GameLobby Dialog
//
//-------------------------------------------------------------------------------------------------
//
// by Amilcar M. Ubiera.
//
//*************************************************************************************************

#ifndef __GAME_LOBBY_DEFS_H__
#define __GAME_LOBBY_DEFS_H__

// Resouces
enum
{
	GAME_LOBBY_GRA,
	GAME_LOBBY_FONT_ARIAL8,
	GAME_LOBBY_FONT_ARIAL10,
	GAME_LOBBY_FONT_ARIAL12,
	GAME_LOBBY_FONT_ARIAL14,
	GAME_LOBBY_FONT_ARIAL18
};

// IDs
enum
{
	GAME_LOBBY_DIALOG = 4000,
	GAME_LOBBY_CHAT_LIST_BOX = 100, // This needs to be 100 in order to use the Chat common code in Chat.h
	GAME_LOBBY_CHAT_PLAYER_LIST_BOX,
	GAME_LOBBY_CHAT_EDIT_BOX,
	GAME_LOBBY_SEND_BUTTON,
	GAME_LOBBY_CLEAR_BUTTON,
	GAME_LOBBY_EXIT_BUTTON = 1,
	GAME_LOBBY_TABLE_INFO_LIST_BOX,
	GAME_LOBBY_TABLE_LIST
};

#endif // __GAME_LOBBY_DEFS_H__