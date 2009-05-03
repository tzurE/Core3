/*
 *	server/zone/ZoneServer.cpp generated by engine3 IDL compiler 0.55
 */

#include "ZoneServer.h"

#include "ZoneServerImplementation.h"

#include "objects/scene/SceneObject.h"

#include "managers/user/UserManager.h"

#include "managers/guild/GuildManager.h"

#include "managers/player/PlayerManager.h"

#include "managers/crafting/CraftingManager.h"

#include "managers/item/ItemManager.h"

#include "managers/item/ItemConfigManager.h"

#include "managers/resource/ResourceManager.h"

#include "managers/loot/LootTableManager.h"

#include "managers/bazaar/BazaarManager.h"

#include "managers/bank/BankManager.h"

#include "managers/mission/MissionManager.h"

#include "managers/creature/CreatureManager.h"

#include "../chat/ChatManager.h"

#include "Zone.h"

/*
 *	ZoneServerStub
 */

ZoneServer::ZoneServer(int threadcount, int galaxyid) {
	_impl = new ZoneServerImplementation(threadcount, galaxyid);
	_impl->_setStub(this);
}

ZoneServer::ZoneServer(DummyConstructorParameter* param) {
	_impl = NULL;
}

ZoneServer::~ZoneServer() {
}

void ZoneServer::start(int port, int conn) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addSignedIntParameter(port);
		method.addSignedIntParameter(conn);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->start(port, conn);
}

void ZoneServer::stop() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->stop();
}

void ZoneServer::startManagers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->startManagers();
}

void ZoneServer::addObject(SceneObject* obj, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doLock);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addObject(obj, doLock);
}

SceneObject* ZoneServer::getObject(unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getObject(oid, doLock);
}

SceneObject* ZoneServer::removeObject(unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeObject(oid, doLock);
}

SceneObject* ZoneServer::removeObject(SceneObject* obj, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeObject(obj, doLock);
}

bool ZoneServer::destroyObject(SceneObject* obj, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doLock);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->destroyObject(obj, doLock);
}

SceneObject* ZoneServer::getCachedObject(unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getCachedObject(oid, doLock);
}

SceneObject* ZoneServer::removeCachedObject(unsigned long long oid, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addUnsignedLongParameter(oid);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeCachedObject(oid, doLock);
}

SceneObject* ZoneServer::removeCachedObject(SceneObject* obj, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addObjectParameter(obj);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->removeCachedObject(obj, doLock);
}

SceneObject* ZoneServer::createObject(unsigned int objectCRC, bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addUnsignedIntParameter(objectCRC);
		method.addBooleanParameter(doLock);

		return (SceneObject*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->createObject(objectCRC, doLock);
}

bool ZoneServer::banUser(String& name, String& admin) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);
		method.addAsciiParameter(name);
		method.addAsciiParameter(admin);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->banUser(name, admin);
}

bool ZoneServer::kickUser(String& name, String& admin) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);
		method.addAsciiParameter(name);
		method.addAsciiParameter(admin);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->kickUser(name, admin);
}

void ZoneServer::changeUserCap(int amount) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);
		method.addSignedIntParameter(amount);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->changeUserCap(amount);
}

void ZoneServer::addTotalSentPacket(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalSentPacket(count);
}

void ZoneServer::addTotalResentPacket(int count) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);
		method.addSignedIntParameter(count);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->addTotalResentPacket(count);
}

void ZoneServer::lock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->lock();
}

void ZoneServer::unlock() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->unlock();
}

void ZoneServer::increaseTotalDeletedPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->increaseTotalDeletedPlayers();
}

void ZoneServer::printInfo() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->printInfo();
}

void ZoneServer::fixScheduler() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->fixScheduler();
}

void ZoneServer::changeMessageoftheDay(const String& newMOTD) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);
		method.addAsciiParameter(newMOTD);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->changeMessageoftheDay(newMOTD);
}

void ZoneServer::loadMessageoftheDay() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->loadMessageoftheDay();
}

ChatManager* ZoneServer::getChatManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 30);

		return (ChatManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getChatManager();
}

GuildManager* ZoneServer::getGuildManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 31);

		return (GuildManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getGuildManager();
}

PlayerManager* ZoneServer::getPlayerManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 32);

		return (PlayerManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getPlayerManager();
}

UserManager* ZoneServer::getUserManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 33);

		return (UserManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getUserManager();
}

CraftingManager* ZoneServer::getCraftingManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 34);

		return (CraftingManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getCraftingManager();
}

ItemManager* ZoneServer::getItemManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 35);

		return (ItemManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getItemManager();
}

ItemConfigManager* ZoneServer::getItemConfigManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 36);

		return (ItemConfigManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getItemConfigManager();
}

ResourceManager* ZoneServer::getResourceManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 37);

		return (ResourceManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getResourceManager();
}

LootTableManager* ZoneServer::getLootTableManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 38);

		return (LootTableManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getLootTableManager();
}

BazaarManager* ZoneServer::getBazaarManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 39);

		return (BazaarManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getBazaarManager();
}

BankManager* ZoneServer::getBankManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 40);

		return (BankManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getBankManager();
}

MissionManager* ZoneServer::getMissionManager() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 41);

		return (MissionManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getMissionManager();
}

CreatureManager* ZoneServer::getCreatureManager(int zone) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 42);
		method.addSignedIntParameter(zone);

		return (CreatureManager*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getCreatureManager(zone);
}

Zone* ZoneServer::getZone(int index) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 43);
		method.addSignedIntParameter(index);

		return (Zone*) method.executeWithObjectReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getZone(index);
}

String& ZoneServer::getServerName() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 44);

		method.executeWithAsciiReturn(_return_getServerName);
		return _return_getServerName;
	} else
		return ((ZoneServerImplementation*) _impl)->getServerName();
}

int ZoneServer::getGalaxyID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 45);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getGalaxyID();
}

bool ZoneServer::isServerLocked() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 46);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerLocked();
}

bool ZoneServer::isServerOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 47);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerOnline();
}

bool ZoneServer::isServerOffline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 48);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerOffline();
}

bool ZoneServer::isServerLoading() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 49);

		return method.executeWithBooleanReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->isServerLoading();
}

int ZoneServer::getServerState() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 50);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getServerState();
}

int ZoneServer::getConnectionCount() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 51);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getConnectionCount();
}

int ZoneServer::getTotalPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 52);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getTotalPlayers();
}

int ZoneServer::getMaxPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 53);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getMaxPlayers();
}

int ZoneServer::getDeletedPlayers() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 54);

		return method.executeWithSignedIntReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getDeletedPlayers();
}

unsigned long long ZoneServer::getStartTimestamp() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 55);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getStartTimestamp();
}

unsigned long long ZoneServer::getNextCreatureID(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 56);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getNextCreatureID(doLock);
}

unsigned long long ZoneServer::getNextID(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 57);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getNextID(doLock);
}

unsigned long long ZoneServer::getNextCellID(bool doLock) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 58);
		method.addBooleanParameter(doLock);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((ZoneServerImplementation*) _impl)->getNextCellID(doLock);
}

String& ZoneServer::getMessageoftheDay() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 59);

		method.executeWithAsciiReturn(_return_getMessageoftheDay);
		return _return_getMessageoftheDay;
	} else
		return ((ZoneServerImplementation*) _impl)->getMessageoftheDay();
}

void ZoneServer::setServerState(int state) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 60);
		method.addSignedIntParameter(state);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerState(state);
}

void ZoneServer::setServerStateLocked() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 61);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerStateLocked();
}

void ZoneServer::setServerStateOnline() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 62);

		method.executeWithVoidReturn();
	} else
		((ZoneServerImplementation*) _impl)->setServerStateOnline();
}

/*
 *	ZoneServerAdapter
 */

ZoneServerAdapter::ZoneServerAdapter(ZoneServerImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* ZoneServerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		start(inv->getSignedIntParameter(), inv->getSignedIntParameter());
		break;
	case 7:
		stop();
		break;
	case 8:
		startManagers();
		break;
	case 9:
		addObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter());
		break;
	case 10:
		resp->insertLong(getObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 11:
		resp->insertLong(removeObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 12:
		resp->insertLong(removeObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 13:
		resp->insertBoolean(destroyObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter()));
		break;
	case 14:
		resp->insertLong(getCachedObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 15:
		resp->insertLong(removeCachedObject(inv->getUnsignedLongParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 16:
		resp->insertLong(removeCachedObject((SceneObject*) inv->getObjectParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 17:
		resp->insertLong(createObject(inv->getUnsignedIntParameter(), inv->getBooleanParameter())->_getObjectID());
		break;
	case 18:
		resp->insertBoolean(banUser(inv->getAsciiParameter(_param0_banUser__String_String_), inv->getAsciiParameter(_param1_banUser__String_String_)));
		break;
	case 19:
		resp->insertBoolean(kickUser(inv->getAsciiParameter(_param0_kickUser__String_String_), inv->getAsciiParameter(_param1_kickUser__String_String_)));
		break;
	case 20:
		changeUserCap(inv->getSignedIntParameter());
		break;
	case 21:
		addTotalSentPacket(inv->getSignedIntParameter());
		break;
	case 22:
		addTotalResentPacket(inv->getSignedIntParameter());
		break;
	case 23:
		lock();
		break;
	case 24:
		unlock();
		break;
	case 25:
		increaseTotalDeletedPlayers();
		break;
	case 26:
		printInfo();
		break;
	case 27:
		fixScheduler();
		break;
	case 28:
		changeMessageoftheDay(inv->getAsciiParameter(_param0_changeMessageoftheDay__String_));
		break;
	case 29:
		loadMessageoftheDay();
		break;
	case 30:
		resp->insertLong(getChatManager()->_getObjectID());
		break;
	case 31:
		resp->insertLong(getGuildManager()->_getObjectID());
		break;
	case 32:
		resp->insertLong(getPlayerManager()->_getObjectID());
		break;
	case 33:
		resp->insertLong(getUserManager()->_getObjectID());
		break;
	case 34:
		resp->insertLong(getCraftingManager()->_getObjectID());
		break;
	case 35:
		resp->insertLong(getItemManager()->_getObjectID());
		break;
	case 36:
		resp->insertLong(getItemConfigManager()->_getObjectID());
		break;
	case 37:
		resp->insertLong(getResourceManager()->_getObjectID());
		break;
	case 38:
		resp->insertLong(getLootTableManager()->_getObjectID());
		break;
	case 39:
		resp->insertLong(getBazaarManager()->_getObjectID());
		break;
	case 40:
		resp->insertLong(getBankManager()->_getObjectID());
		break;
	case 41:
		resp->insertLong(getMissionManager()->_getObjectID());
		break;
	case 42:
		resp->insertLong(getCreatureManager(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 43:
		resp->insertLong(getZone(inv->getSignedIntParameter())->_getObjectID());
		break;
	case 44:
		resp->insertAscii(getServerName());
		break;
	case 45:
		resp->insertSignedInt(getGalaxyID());
		break;
	case 46:
		resp->insertBoolean(isServerLocked());
		break;
	case 47:
		resp->insertBoolean(isServerOnline());
		break;
	case 48:
		resp->insertBoolean(isServerOffline());
		break;
	case 49:
		resp->insertBoolean(isServerLoading());
		break;
	case 50:
		resp->insertSignedInt(getServerState());
		break;
	case 51:
		resp->insertSignedInt(getConnectionCount());
		break;
	case 52:
		resp->insertSignedInt(getTotalPlayers());
		break;
	case 53:
		resp->insertSignedInt(getMaxPlayers());
		break;
	case 54:
		resp->insertSignedInt(getDeletedPlayers());
		break;
	case 55:
		resp->insertLong(getStartTimestamp());
		break;
	case 56:
		resp->insertLong(getNextCreatureID(inv->getBooleanParameter()));
		break;
	case 57:
		resp->insertLong(getNextID(inv->getBooleanParameter()));
		break;
	case 58:
		resp->insertLong(getNextCellID(inv->getBooleanParameter()));
		break;
	case 59:
		resp->insertAscii(getMessageoftheDay());
		break;
	case 60:
		setServerState(inv->getSignedIntParameter());
		break;
	case 61:
		setServerStateLocked();
		break;
	case 62:
		setServerStateOnline();
		break;
	default:
		return NULL;
	}

	return resp;
}

void ZoneServerAdapter::start(int port, int conn) {
	return ((ZoneServerImplementation*) impl)->start(port, conn);
}

void ZoneServerAdapter::stop() {
	return ((ZoneServerImplementation*) impl)->stop();
}

void ZoneServerAdapter::startManagers() {
	return ((ZoneServerImplementation*) impl)->startManagers();
}

void ZoneServerAdapter::addObject(SceneObject* obj, bool doLock) {
	return ((ZoneServerImplementation*) impl)->addObject(obj, doLock);
}

SceneObject* ZoneServerAdapter::getObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->getObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeObject(SceneObject* obj, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeObject(obj, doLock);
}

bool ZoneServerAdapter::destroyObject(SceneObject* obj, bool doLock) {
	return ((ZoneServerImplementation*) impl)->destroyObject(obj, doLock);
}

SceneObject* ZoneServerAdapter::getCachedObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->getCachedObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeCachedObject(unsigned long long oid, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeCachedObject(oid, doLock);
}

SceneObject* ZoneServerAdapter::removeCachedObject(SceneObject* obj, bool doLock) {
	return ((ZoneServerImplementation*) impl)->removeCachedObject(obj, doLock);
}

SceneObject* ZoneServerAdapter::createObject(unsigned int objectCRC, bool doLock) {
	return ((ZoneServerImplementation*) impl)->createObject(objectCRC, doLock);
}

bool ZoneServerAdapter::banUser(String& name, String& admin) {
	return ((ZoneServerImplementation*) impl)->banUser(name, admin);
}

bool ZoneServerAdapter::kickUser(String& name, String& admin) {
	return ((ZoneServerImplementation*) impl)->kickUser(name, admin);
}

void ZoneServerAdapter::changeUserCap(int amount) {
	return ((ZoneServerImplementation*) impl)->changeUserCap(amount);
}

void ZoneServerAdapter::addTotalSentPacket(int count) {
	return ((ZoneServerImplementation*) impl)->addTotalSentPacket(count);
}

void ZoneServerAdapter::addTotalResentPacket(int count) {
	return ((ZoneServerImplementation*) impl)->addTotalResentPacket(count);
}

void ZoneServerAdapter::lock() {
	return ((ZoneServerImplementation*) impl)->lock();
}

void ZoneServerAdapter::unlock() {
	return ((ZoneServerImplementation*) impl)->unlock();
}

void ZoneServerAdapter::increaseTotalDeletedPlayers() {
	return ((ZoneServerImplementation*) impl)->increaseTotalDeletedPlayers();
}

void ZoneServerAdapter::printInfo() {
	return ((ZoneServerImplementation*) impl)->printInfo();
}

void ZoneServerAdapter::fixScheduler() {
	return ((ZoneServerImplementation*) impl)->fixScheduler();
}

void ZoneServerAdapter::changeMessageoftheDay(const String& newMOTD) {
	return ((ZoneServerImplementation*) impl)->changeMessageoftheDay(newMOTD);
}

void ZoneServerAdapter::loadMessageoftheDay() {
	return ((ZoneServerImplementation*) impl)->loadMessageoftheDay();
}

ChatManager* ZoneServerAdapter::getChatManager() {
	return ((ZoneServerImplementation*) impl)->getChatManager();
}

GuildManager* ZoneServerAdapter::getGuildManager() {
	return ((ZoneServerImplementation*) impl)->getGuildManager();
}

PlayerManager* ZoneServerAdapter::getPlayerManager() {
	return ((ZoneServerImplementation*) impl)->getPlayerManager();
}

UserManager* ZoneServerAdapter::getUserManager() {
	return ((ZoneServerImplementation*) impl)->getUserManager();
}

CraftingManager* ZoneServerAdapter::getCraftingManager() {
	return ((ZoneServerImplementation*) impl)->getCraftingManager();
}

ItemManager* ZoneServerAdapter::getItemManager() {
	return ((ZoneServerImplementation*) impl)->getItemManager();
}

ItemConfigManager* ZoneServerAdapter::getItemConfigManager() {
	return ((ZoneServerImplementation*) impl)->getItemConfigManager();
}

ResourceManager* ZoneServerAdapter::getResourceManager() {
	return ((ZoneServerImplementation*) impl)->getResourceManager();
}

LootTableManager* ZoneServerAdapter::getLootTableManager() {
	return ((ZoneServerImplementation*) impl)->getLootTableManager();
}

BazaarManager* ZoneServerAdapter::getBazaarManager() {
	return ((ZoneServerImplementation*) impl)->getBazaarManager();
}

BankManager* ZoneServerAdapter::getBankManager() {
	return ((ZoneServerImplementation*) impl)->getBankManager();
}

MissionManager* ZoneServerAdapter::getMissionManager() {
	return ((ZoneServerImplementation*) impl)->getMissionManager();
}

CreatureManager* ZoneServerAdapter::getCreatureManager(int zone) {
	return ((ZoneServerImplementation*) impl)->getCreatureManager(zone);
}

Zone* ZoneServerAdapter::getZone(int index) {
	return ((ZoneServerImplementation*) impl)->getZone(index);
}

String& ZoneServerAdapter::getServerName() {
	return ((ZoneServerImplementation*) impl)->getServerName();
}

int ZoneServerAdapter::getGalaxyID() {
	return ((ZoneServerImplementation*) impl)->getGalaxyID();
}

bool ZoneServerAdapter::isServerLocked() {
	return ((ZoneServerImplementation*) impl)->isServerLocked();
}

bool ZoneServerAdapter::isServerOnline() {
	return ((ZoneServerImplementation*) impl)->isServerOnline();
}

bool ZoneServerAdapter::isServerOffline() {
	return ((ZoneServerImplementation*) impl)->isServerOffline();
}

bool ZoneServerAdapter::isServerLoading() {
	return ((ZoneServerImplementation*) impl)->isServerLoading();
}

int ZoneServerAdapter::getServerState() {
	return ((ZoneServerImplementation*) impl)->getServerState();
}

int ZoneServerAdapter::getConnectionCount() {
	return ((ZoneServerImplementation*) impl)->getConnectionCount();
}

int ZoneServerAdapter::getTotalPlayers() {
	return ((ZoneServerImplementation*) impl)->getTotalPlayers();
}

int ZoneServerAdapter::getMaxPlayers() {
	return ((ZoneServerImplementation*) impl)->getMaxPlayers();
}

int ZoneServerAdapter::getDeletedPlayers() {
	return ((ZoneServerImplementation*) impl)->getDeletedPlayers();
}

unsigned long long ZoneServerAdapter::getStartTimestamp() {
	return ((ZoneServerImplementation*) impl)->getStartTimestamp();
}

unsigned long long ZoneServerAdapter::getNextCreatureID(bool doLock) {
	return ((ZoneServerImplementation*) impl)->getNextCreatureID(doLock);
}

unsigned long long ZoneServerAdapter::getNextID(bool doLock) {
	return ((ZoneServerImplementation*) impl)->getNextID(doLock);
}

unsigned long long ZoneServerAdapter::getNextCellID(bool doLock) {
	return ((ZoneServerImplementation*) impl)->getNextCellID(doLock);
}

String& ZoneServerAdapter::getMessageoftheDay() {
	return ((ZoneServerImplementation*) impl)->getMessageoftheDay();
}

void ZoneServerAdapter::setServerState(int state) {
	return ((ZoneServerImplementation*) impl)->setServerState(state);
}

void ZoneServerAdapter::setServerStateLocked() {
	return ((ZoneServerImplementation*) impl)->setServerStateLocked();
}

void ZoneServerAdapter::setServerStateOnline() {
	return ((ZoneServerImplementation*) impl)->setServerStateOnline();
}

/*
 *	ZoneServerHelper
 */

ZoneServerHelper* ZoneServerHelper::staticInitializer = ZoneServerHelper::instance();

ZoneServerHelper::ZoneServerHelper() {
	className = "ZoneServer";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void ZoneServerHelper::finalizeHelper() {
	ZoneServerHelper::finalize();
}

DistributedObject* ZoneServerHelper::instantiateObject() {
	return new ZoneServer(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* ZoneServerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new ZoneServerAdapter((ZoneServerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	ZoneServerServant
 */

ZoneServerServant::ZoneServerServant() {
	_classHelper = ZoneServerHelper::instance();
}

ZoneServerServant::~ZoneServerServant() {
}

void ZoneServerServant::_setStub(DistributedObjectStub* stub) {
	_this = (ZoneServer*) stub;
}

DistributedObjectStub* ZoneServerServant::_getStub() {
	return _this;
}

