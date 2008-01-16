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
 *	server/zone/objects/scene/SceneObject.h generated by Engine3 IDL compiler 0.51
 */

#ifndef SCENEOBJECT_H_
#define SCENEOBJECT_H_

#include "engine/orb/ObjectRequestBroker.h"

#include "engine/core/thread/RWLockable.h"

#include "engine/service/proto/BaseMessage.h"

#include "engine/util/QuadTreeEntry.h"

class Zone;

class ZoneClient;

class Player;

#include "engine/core/thread/RWLockable.h"

class SceneObject : public RWLockable {
public:
	SceneObject();
	SceneObject(ORBObjectServant* obj);
	SceneObject(SceneObject& ref);

	SceneObject* clone();

	virtual ~SceneObject();

	void finalize();

	void redeploy();

	void scheduleUndeploy();

	void sendTo(Player* player, bool doClose = true);

	void sendDestroyTo(Player* player);

	void create(ZoneClient* client);

	void destroy(ZoneClient* client);

	void sendConversationStartTo(SceneObject* obj);

	void selectConversationOption(int option, SceneObject* obj);

	void close(ZoneClient* client);

	bool isInRange(SceneObject* obj, float range);

	bool isInRange(float x, float y, float range);

	int inRangeObjectCount();

	QuadTreeEntry* getInRangeObject(int idx);

	void addInRangeObject(QuadTreeEntry* obj);

	void removeInRangeObject(QuadTreeEntry* obj);

	bool isInQuadTree();

	QuadTreeEntry* getQuadTreeEntry();

	int compareTo(SceneObject* obj);

	BaseMessage* link(SceneObject* obj);

	void link(ZoneClient* client, SceneObject* obj);

	void randomizePosition(float radius);

	int useObject(Player* player);

	void initializePosition(float x, float z, float y);

	void setPosition(float x, float z, float y);

	void setDirection(float x, float z, float y, float w);

	void generateAttributes(Player* player);

	void setObjectID(unsigned long long oid);

	void setObjectCRC(unsigned int crc);

	void setMovementCounter(unsigned int cntr);

	void setZoneIndex(int id);

	void setParent(SceneObject* par, unsigned int linktype = 04);

	void setZone(Zone* zne);

	int getObjectType();

	unsigned long long getObjectID();

	unsigned int getObjectCRC();

	unsigned int getMovementCounter();

	float getPositionX();

	float getPositionZ();

	float getPositionY();

	int getDirectionAngle();

	float getDirectionX();

	float getDirectionZ();

	float getDirectionY();

	float getDirectionW();

	string& getLoggingName();

	bool isPlayer();

	bool isNonPlayerCreature();

	bool isBuilding();

	bool isCell();

	bool isTangible();

	bool isIntangible();

	bool isStatic();

	bool isShip();

	Zone* getZone();

	int getZoneID();

	SceneObject* getParent();

	unsigned long long getParentID();

	bool isMoving();

	void switchMovingState();

	bool doKeepObject();

protected:
	string _return_getLoggingName;

};

class SceneObjectImplementation;

class SceneObjectAdapter : public RWLockableAdapter {
public:
	SceneObjectAdapter(SceneObjectImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, ORBMethodInvocation* inv);

	void finalize();

	void redeploy();

	void scheduleUndeploy();

	void sendTo(Player* player, bool doClose);

	void sendDestroyTo(Player* player);

	void create(ZoneClient* client);

	void destroy(ZoneClient* client);

	void sendConversationStartTo(SceneObject* obj);

	void selectConversationOption(int option, SceneObject* obj);

	void close(ZoneClient* client);

	bool isInRange(SceneObject* obj, float range);

	bool isInRange(float x, float y, float range);

	int inRangeObjectCount();

	QuadTreeEntry* getInRangeObject(int idx);

	void addInRangeObject(QuadTreeEntry* obj);

	void removeInRangeObject(QuadTreeEntry* obj);

	bool isInQuadTree();

	QuadTreeEntry* getQuadTreeEntry();

	int compareTo(SceneObject* obj);

	BaseMessage* link(SceneObject* obj);

	void link(ZoneClient* client, SceneObject* obj);

	void randomizePosition(float radius);

	int useObject(Player* player);

	void initializePosition(float x, float z, float y);

	void setPosition(float x, float z, float y);

	void setDirection(float x, float z, float y, float w);

	void generateAttributes(Player* player);

	void setObjectID(unsigned long long oid);

	void setObjectCRC(unsigned int crc);

	void setMovementCounter(unsigned int cntr);

	void setZoneIndex(int id);

	void setParent(SceneObject* par, unsigned int linktype);

	void setZone(Zone* zne);

	int getObjectType();

	unsigned long long getObjectID();

	unsigned int getObjectCRC();

	unsigned int getMovementCounter();

	float getPositionX();

	float getPositionZ();

	float getPositionY();

	int getDirectionAngle();

	float getDirectionX();

	float getDirectionZ();

	float getDirectionY();

	float getDirectionW();

	string& getLoggingName();

	bool isPlayer();

	bool isNonPlayerCreature();

	bool isBuilding();

	bool isCell();

	bool isTangible();

	bool isIntangible();

	bool isStatic();

	bool isShip();

	Zone* getZone();

	int getZoneID();

	SceneObject* getParent();

	unsigned long long getParentID();

	bool isMoving();

	void switchMovingState();

	bool doKeepObject();

};

class SceneObjectHelper : public ORBClassHelper {
	static ORBClassHelper* instance;

public:
	SceneObjectHelper();

	static ORBClassHelper* getInstance();

	ORBObject* instantiateObject();

	ORBObjectAdapter* createAdapter(ORBObjectServant* obj);

};

#include "engine/core/thread/RWLockableImplementation.h"

class SceneObjectServant : public RWLockableImplementation {
public:
	SceneObject* _this;

public:
	SceneObjectServant();
	virtual ~SceneObjectServant();

	void _setStub(ORBObjectStub* stub);
	ORBObjectStub* _getStub();

};

#endif /*SCENEOBJECT_H_*/
