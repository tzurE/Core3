/*
 *	server/zone/managers/player/PlayerManager.h generated by engine3 IDL compiler 0.55
 */

#ifndef PLAYERMANAGER_H_
#define PLAYERMANAGER_H_

#include "engine/orb/DistributedObjectBroker.h"

class ItemManager;

class GuildManager;

class Player;

class TangibleObject;

class ZoneClientSession;

#include "server/zone/ZoneProcessServerImplementation.h"

class PlayerMap;

#include "engine/service/proto/BaseMessage.h"

class PlayerManager : public DistributedObjectStub {
public:
	PlayerManager(ItemManager* itemManager, ZoneProcessServerImplementation* processor);

	void stop();

	bool create(Player* player, unsigned int sessionkey);

	bool validateName(String& name);

	bool hasAdminRights(unsigned int characterID);

	BaseMessage* checkPlayerName(const String& name, const String& species);

	BaseMessage* attemptPlayerCreation(Player* player, ZoneClientSession* client);

	Player* load(unsigned long long charid);

	void unload(Player* player);

	void save(Player* player);

	void deletePlayerFromDatabase(Player* adminPlayer, String& firstName);

	void handleAbortTradeMessage(Player* player);

	void handleAddItemToTradeWindow(Player* player, unsigned long long itemID);

	void handleGiveMoneyMessage(Player* player, unsigned int value);

	void handleAcceptTransactionMessage(Player* player);

	void handleUnAcceptTransactionMessage(Player* player);

	void handleVerifyTradeMessage(Player* player);

	void moveItem(Player* sender, Player* receiver, TangibleObject* item);

	void doBankTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo);

	void doCashTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo);

	bool modifyOfflineBank(Player* sender, String& receiverName, int creditAmount);

	bool modifyRecipientOfflineBank(String& recipient, int creditAmount);

	void updatePlayerCreditsFromDatabase(Player* player);

	void updatePlayerCreditsToDatabase(Player* player);

	void updatePlayerAppearanceToDatabase(Player* player);

	void updatePlayerBaseHAMToDatabase(Player* player);

	void updateOtherFriendlists(Player* player, bool status);

	void updateGuildStatus(Player* player);

	void setGuildManager(GuildManager* gmanager);

	Player* putPlayer(Player* player);

	Player* getPlayer(const String& name);

	GuildManager* getGuildManager();

	PlayerMap* getPlayerMap();

	void setXpScale(float scale);

	float getXpScale();

protected:
	PlayerManager(DummyConstructorParameter* param);

	virtual ~PlayerManager();

	friend class PlayerManagerHelper;
};

class PlayerManagerImplementation;

class PlayerManagerAdapter : public DistributedObjectAdapter {
public:
	PlayerManagerAdapter(PlayerManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void stop();

	bool create(Player* player, unsigned int sessionkey);

	bool validateName(String& name);

	bool hasAdminRights(unsigned int characterID);

	BaseMessage* checkPlayerName(const String& name, const String& species);

	BaseMessage* attemptPlayerCreation(Player* player, ZoneClientSession* client);

	Player* load(unsigned long long charid);

	void unload(Player* player);

	void save(Player* player);

	void deletePlayerFromDatabase(Player* adminPlayer, String& firstName);

	void handleAbortTradeMessage(Player* player);

	void handleAddItemToTradeWindow(Player* player, unsigned long long itemID);

	void handleGiveMoneyMessage(Player* player, unsigned int value);

	void handleAcceptTransactionMessage(Player* player);

	void handleUnAcceptTransactionMessage(Player* player);

	void handleVerifyTradeMessage(Player* player);

	void moveItem(Player* sender, Player* receiver, TangibleObject* item);

	void doBankTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo);

	void doCashTip(Player* sender, Player* receiver, int tipAmount, bool updateTipTo);

	bool modifyOfflineBank(Player* sender, String& receiverName, int creditAmount);

	bool modifyRecipientOfflineBank(String& recipient, int creditAmount);

	void updatePlayerCreditsFromDatabase(Player* player);

	void updatePlayerCreditsToDatabase(Player* player);

	void updatePlayerAppearanceToDatabase(Player* player);

	void updatePlayerBaseHAMToDatabase(Player* player);

	void updateOtherFriendlists(Player* player, bool status);

	void updateGuildStatus(Player* player);

	void setGuildManager(GuildManager* gmanager);

	Player* putPlayer(Player* player);

	Player* getPlayer(const String& name);

	GuildManager* getGuildManager();

	PlayerMap* getPlayerMap();

	void setXpScale(float scale);

	float getXpScale();

protected:
	String _param0_validateName__String_;
	String _param0_checkPlayerName__String_String_;
	String _param1_checkPlayerName__String_String_;
	String _param1_deletePlayerFromDatabase__Player_String_;
	String _param1_modifyOfflineBank__Player_String_int_;
	String _param0_modifyRecipientOfflineBank__String_int_;
	String _param0_getPlayer__String_;
};

class PlayerManagerHelper : public DistributedObjectClassHelper, public Singleton<PlayerManagerHelper> {
	static PlayerManagerHelper* staticInitializer;

public:
	PlayerManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<PlayerManagerHelper>;
};

class PlayerManagerServant : public DistributedObjectServant {
public:
	PlayerManager* _this;

public:
	PlayerManagerServant();
	virtual ~PlayerManagerServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*PLAYERMANAGER_H_*/
