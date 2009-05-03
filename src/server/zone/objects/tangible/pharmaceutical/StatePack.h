/*
 *	server/zone/objects/tangible/pharmaceutical/StatePack.h generated by engine3 IDL compiler 0.55
 */

#ifndef STATEPACK_H_
#define STATEPACK_H_

#include "engine/orb/DistributedObjectBroker.h"

class SceneObject;

class CreatureObject;

class Player;

class TangibleObject;

class Pharmaceutical;

#include "Pharmaceutical.h"

class StatePack : public Pharmaceutical {
public:
	StatePack(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	StatePack(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn);

	void generateAttributes(SceneObject* obj);

	void setState(unsigned long long value);

	unsigned long long getState();

protected:
	StatePack(DummyConstructorParameter* param);

	virtual ~StatePack();

	friend class StatePackHelper;
};

class StatePackImplementation;

class StatePackAdapter : public PharmaceuticalAdapter {
public:
	StatePackAdapter(StatePackImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void generateAttributes(SceneObject* obj);

	void setState(unsigned long long value);

	unsigned long long getState();

};

class StatePackHelper : public DistributedObjectClassHelper, public Singleton<StatePackHelper> {
	static StatePackHelper* staticInitializer;

public:
	StatePackHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class SingletonWrapper<StatePackHelper>;
};

#include "PharmaceuticalImplementation.h"

class StatePackServant : public PharmaceuticalImplementation {
public:
	StatePack* _this;

public:
	StatePackServant(unsigned long long oid, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int mptype);
	StatePackServant(CreatureObject* creature, unsigned int tempCRC, const UnicodeString& n, const String& tempn, int mptype);
	virtual ~StatePackServant();

	void _setStub(DistributedObjectStub* stub);
	DistributedObjectStub* _getStub();

};

#endif /*STATEPACK_H_*/
