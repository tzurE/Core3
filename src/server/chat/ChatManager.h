/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

/*
 *	server/chat/ChatManager.h generated by Engine3 IDL compiler 0.51
 */

#ifndef CHATMANAGER_H_
#define CHATMANAGER_H_

#include "engine/orb/ObjectRequestBroker.h"

#include "engine/service/Message.h"

class ChatRoom;

class Player;

class ChatManager : public ORBObjectStub {
public:
	ChatManager();
	ChatManager(ORBObjectServant* obj);
	ChatManager(ChatManager& ref);

	ChatManager* clone();

	virtual ~ChatManager();

	void addPlayer(Player* player);

	Player* getPlayer(string& name);

	Player* removePlayer(string& name);

	void sendMail(const string& sendername, unicode& header, unicode& body, const string& name);

	void sendMailBody(Player* receiver, unsigned int mailid);

	void listMail(Player* ply);

	void deleteMail(unsigned int mailid);

	void handleTellMessage(Player* player, Message* pack);

	void handleMessage(Player* player, Message* pack);

	void handleEmote(Player* player, Message* pack);

	void handleMood(Player* player, Message* pack);

	void sendSystemMessage(Player* player, unicode& message);

	void broadcastMessage(Player* player, unicode& message, unsigned long long target = 0, unsigned int moodid = 0, unsigned int mood2 = 0);

	void broadcastMessage(const string& message);

	void broadcastMessageRange(Player* player, const string& message, float range);

	void handleGameCommand(Player* player, const string& command);

	void initiateRooms();

	void handleChatRoomMessage(Player* player, Message* pack);

	void handleGroupChat(Player* player, Message* pack);

	void handleCreateRoom(Player* player, Message* pack);

	void handleChatEnterRoomById(Player* player, Message* pack);

	void handleChatDestroyRoom(Player* player, Message* pack);

	void handleChatRemoveAvatarFromRoom(Player* player, Message* pack);

	ChatRoom* getChatRoom(unsigned int id);

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void sendRoomList(Player* player);

	ChatRoom* createGroupRoom(unsigned int groupID, Player* creator);

	ChatRoom* createRoomByFullPath(const string& path);

	void destroyRoom(ChatRoom* room);

	void printRoomTree(ChatRoom* channel);

	ChatRoom* getChatRoomByFullPath(const string& path);

	ChatRoom* getGameRoom(const string& game);

	ChatRoom* getChatRoomByGamePath(ChatRoom* game, const string& path);

	unsigned int getNextRoomID();

	int getPlayerCount();

	bool isMute();

protected:
};

class ChatManagerImplementation;

class ChatManagerAdapter : public ORBObjectAdapter {
public:
	ChatManagerAdapter(ChatManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	void addPlayer(Player* player);

	Player* getPlayer(string& name);

	Player* removePlayer(string& name);

	void sendMail(const string& sendername, unicode& header, unicode& body, const string& name);

	void sendMailBody(Player* receiver, unsigned int mailid);

	void listMail(Player* ply);

	void deleteMail(unsigned int mailid);

	void handleTellMessage(Player* player, Message* pack);

	void handleMessage(Player* player, Message* pack);

	void handleEmote(Player* player, Message* pack);

	void handleMood(Player* player, Message* pack);

	void sendSystemMessage(Player* player, unicode& message);

	void broadcastMessage(Player* player, unicode& message, unsigned long long target, unsigned int moodid, unsigned int mood2);

	void broadcastMessage(const string& message);

	void broadcastMessageRange(Player* player, const string& message, float range);

	void handleGameCommand(Player* player, const string& command);

	void initiateRooms();

	void handleChatRoomMessage(Player* player, Message* pack);

	void handleGroupChat(Player* player, Message* pack);

	void handleCreateRoom(Player* player, Message* pack);

	void handleChatEnterRoomById(Player* player, Message* pack);

	void handleChatDestroyRoom(Player* player, Message* pack);

	void handleChatRemoveAvatarFromRoom(Player* player, Message* pack);

	ChatRoom* getChatRoom(unsigned int id);

	void addRoom(ChatRoom* channel);

	void removeRoom(ChatRoom* channel);

	void sendRoomList(Player* player);

	ChatRoom* createGroupRoom(unsigned int groupID, Player* creator);

	ChatRoom* createRoomByFullPath(const string& path);

	void destroyRoom(ChatRoom* room);

	void printRoomTree(ChatRoom* channel);

	ChatRoom* getChatRoomByFullPath(const string& path);

	ChatRoom* getGameRoom(const string& game);

	ChatRoom* getChatRoomByGamePath(ChatRoom* game, const string& path);

	unsigned int getNextRoomID();

	int getPlayerCount();

	bool isMute();

protected:
	string _param0_getPlayer__string_;
	string _param0_removePlayer__string_;
	string _param0_sendMail__string_unicode_unicode_string_;
	unicode _param1_sendMail__string_unicode_unicode_string_;
	unicode _param2_sendMail__string_unicode_unicode_string_;
	string _param3_sendMail__string_unicode_unicode_string_;
	unicode _param1_sendSystemMessage__Player_unicode_;
	unicode _param1_broadcastMessage__Player_unicode_long_int_int_;
	string _param0_broadcastMessage__string_;
	string _param1_broadcastMessageRange__Player_string_float_;
	string _param1_handleGameCommand__Player_string_;
	string _param0_createRoomByFullPath__string_;
	string _param0_getChatRoomByFullPath__string_;
	string _param0_getGameRoom__string_;
	string _param1_getChatRoomByGamePath__ChatRoom_string_;
};

class ChatManagerHelper : public ORBClassHelper {
	static ORBClassHelper* instance;

public:
	ChatManagerHelper();

	static ORBClassHelper* getInstance();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

};

class ChatManagerServant : public ORBObjectServant {
public:
	ChatManager* _this;

public:
	ChatManagerServant();
	virtual ~ChatManagerServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*CHATMANAGER_H_*/
