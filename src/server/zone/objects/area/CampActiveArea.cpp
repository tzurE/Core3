/*
 *	server/zone/objects/area/CampActiveArea.cpp generated by engine3 IDL compiler 0.55
 */

#include "CampActiveArea.h"

#include "CampActiveAreaImplementation.h"

#include "../player/Player.h"

#include "ActiveArea.h"

#include "../tangible/campkit/campsite/CampSite.h"

/*
 *	CampActiveAreaStub
 */

CampActiveArea::CampActiveArea(float x, float y, float z, float radius, CampSite* camp) : ActiveArea(DummyConstructorParameter::instance()) {
	_impl = new CampActiveAreaImplementation(x, y, z, radius, camp);
	_impl->_setStub(this);
}

CampActiveArea::CampActiveArea(DummyConstructorParameter* param) : ActiveArea(param) {
}

CampActiveArea::~CampActiveArea() {
}

void CampActiveArea::onEnter(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CampActiveAreaImplementation*) _impl)->onEnter(player);
}

void CampActiveArea::onExit(Player* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((CampActiveAreaImplementation*) _impl)->onExit(player);
}

/*
 *	CampActiveAreaAdapter
 */

CampActiveAreaAdapter::CampActiveAreaAdapter(CampActiveAreaImplementation* obj) : ActiveAreaAdapter(obj) {
}

Packet* CampActiveAreaAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		onEnter((Player*) inv->getObjectParameter());
		break;
	case 7:
		onExit((Player*) inv->getObjectParameter());
		break;
	default:
		return NULL;
	}

	return resp;
}

void CampActiveAreaAdapter::onEnter(Player* player) {
	return ((CampActiveAreaImplementation*) impl)->onEnter(player);
}

void CampActiveAreaAdapter::onExit(Player* player) {
	return ((CampActiveAreaImplementation*) impl)->onExit(player);
}

/*
 *	CampActiveAreaHelper
 */

CampActiveAreaHelper* CampActiveAreaHelper::staticInitializer = CampActiveAreaHelper::instance();

CampActiveAreaHelper::CampActiveAreaHelper() {
	className = "CampActiveArea";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void CampActiveAreaHelper::finalizeHelper() {
	CampActiveAreaHelper::finalize();
}

DistributedObject* CampActiveAreaHelper::instantiateObject() {
	return new CampActiveArea(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CampActiveAreaHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CampActiveAreaAdapter((CampActiveAreaImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	CampActiveAreaServant
 */

CampActiveAreaServant::CampActiveAreaServant(float x, float y, float z, float radius) : ActiveAreaImplementation(x, y, z, radius) {
	_classHelper = CampActiveAreaHelper::instance();
}

CampActiveAreaServant::~CampActiveAreaServant() {
}

void CampActiveAreaServant::_setStub(DistributedObjectStub* stub) {
	_this = (CampActiveArea*) stub;
	ActiveAreaServant::_setStub(stub);
}

DistributedObjectStub* CampActiveAreaServant::_getStub() {
	return _this;
}

