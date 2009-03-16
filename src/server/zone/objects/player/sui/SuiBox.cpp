/*
 *	server/zone/objects/player/sui/SuiBox.cpp generated by engine3 IDL compiler 0.55
 */

#include "SuiBox.h"

#include "SuiBoxImplementation.h"

#include "../Player.h"

/*
 *	SuiBoxStub
 */

SuiBox::SuiBox(DummyConstructorParameter* param) {
	_impl = NULL;
}

SuiBox::~SuiBox() {
}

bool SuiBox::hasGeneratedMessage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->hasGeneratedMessage();
}

BaseMessage* SuiBox::generateCloseMessage() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);

		return (BaseMessage*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->generateCloseMessage();
}

void SuiBox::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addAsciiParameter(optType);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(setting);
		method.addAsciiParameter(value);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->addSetting(optType, variable, setting, value);
}

void SuiBox::addHeader(const String& variable, const String& type) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addAsciiParameter(variable);
		method.addAsciiParameter(type);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->addHeader(variable, type);
}

void SuiBox::clearOptions() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->clearOptions();
}

void SuiBox::setPromptTitle(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 11);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptTitle(name);
}

void SuiBox::setPromptText(const String& name) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 12);
		method.addAsciiParameter(name);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setPromptText(name);
}

void SuiBox::setCancelButton(bool value, const String& backText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 13);
		method.addBooleanParameter(value);
		method.addAsciiParameter(backText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setCancelButton(value, backText);
}

void SuiBox::setBackButton(bool value, const String& backText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 14);
		method.addBooleanParameter(value);
		method.addAsciiParameter(backText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setBackButton(value, backText);
}

void SuiBox::setOkButton(bool value, const String& okText) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 15);
		method.addBooleanParameter(value);
		method.addAsciiParameter(okText);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setOkButton(value, okText);
}

void SuiBox::setUsingObjectID(unsigned long long oid) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 16);
		method.addUnsignedLongParameter(oid);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setUsingObjectID(oid);
}

void SuiBox::setIntValue(int value) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 17);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		((SuiBoxImplementation*) _impl)->setIntValue(value);
}

bool SuiBox::isInputBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 18);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isInputBox();
}

bool SuiBox::isListBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 19);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isListBox();
}

bool SuiBox::isMessageBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 20);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isMessageBox();
}

bool SuiBox::isTransferBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 21);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isTransferBox();
}

bool SuiBox::isColorPicker() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 22);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isColorPicker();
}

bool SuiBox::isBankTransferBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 23);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isBankTransferBox();
}

bool SuiBox::isSlicingBox() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 24);

		return method.executeWithBooleanReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->isSlicingBox();
}

unsigned long long SuiBox::getBoxID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 25);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getBoxID();
}

unsigned long long SuiBox::getWindowType() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 26);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getWindowType();
}

unsigned long long SuiBox::getUsingObjectID() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 27);

		return method.executeWithUnsignedLongReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getUsingObjectID();
}

int SuiBox::getIntValue() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 28);

		return method.executeWithSignedIntReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getIntValue();
}

Player* SuiBox::getPlayer() {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 29);

		return (Player*) method.executeWithObjectReturn();
	} else
		return ((SuiBoxImplementation*) _impl)->getPlayer();
}

/*
 *	SuiBoxAdapter
 */

SuiBoxAdapter::SuiBoxAdapter(SuiBoxImplementation* obj) : DistributedObjectAdapter((DistributedObjectServant*) obj) {
}

Packet* SuiBoxAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		resp->insertBoolean(hasGeneratedMessage());
		break;
	case 7:
		resp->insertLong(generateCloseMessage()->_getObjectID());
		break;
	case 8:
		addSetting(inv->getAsciiParameter(_param0_addSetting__String_String_String_String_), inv->getAsciiParameter(_param1_addSetting__String_String_String_String_), inv->getAsciiParameter(_param2_addSetting__String_String_String_String_), inv->getAsciiParameter(_param3_addSetting__String_String_String_String_));
		break;
	case 9:
		addHeader(inv->getAsciiParameter(_param0_addHeader__String_String_), inv->getAsciiParameter(_param1_addHeader__String_String_));
		break;
	case 10:
		clearOptions();
		break;
	case 11:
		setPromptTitle(inv->getAsciiParameter(_param0_setPromptTitle__String_));
		break;
	case 12:
		setPromptText(inv->getAsciiParameter(_param0_setPromptText__String_));
		break;
	case 13:
		setCancelButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setCancelButton__bool_String_));
		break;
	case 14:
		setBackButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setBackButton__bool_String_));
		break;
	case 15:
		setOkButton(inv->getBooleanParameter(), inv->getAsciiParameter(_param1_setOkButton__bool_String_));
		break;
	case 16:
		setUsingObjectID(inv->getUnsignedLongParameter());
		break;
	case 17:
		setIntValue(inv->getSignedIntParameter());
		break;
	case 18:
		resp->insertBoolean(isInputBox());
		break;
	case 19:
		resp->insertBoolean(isListBox());
		break;
	case 20:
		resp->insertBoolean(isMessageBox());
		break;
	case 21:
		resp->insertBoolean(isTransferBox());
		break;
	case 22:
		resp->insertBoolean(isColorPicker());
		break;
	case 23:
		resp->insertBoolean(isBankTransferBox());
		break;
	case 24:
		resp->insertBoolean(isSlicingBox());
		break;
	case 25:
		resp->insertLong(getBoxID());
		break;
	case 26:
		resp->insertLong(getWindowType());
		break;
	case 27:
		resp->insertLong(getUsingObjectID());
		break;
	case 28:
		resp->insertSignedInt(getIntValue());
		break;
	case 29:
		resp->insertLong(getPlayer()->_getObjectID());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool SuiBoxAdapter::hasGeneratedMessage() {
	return ((SuiBoxImplementation*) impl)->hasGeneratedMessage();
}

BaseMessage* SuiBoxAdapter::generateCloseMessage() {
	return ((SuiBoxImplementation*) impl)->generateCloseMessage();
}

void SuiBoxAdapter::addSetting(const String& optType, const String& variable, const String& setting, const String& value) {
	return ((SuiBoxImplementation*) impl)->addSetting(optType, variable, setting, value);
}

void SuiBoxAdapter::addHeader(const String& variable, const String& type) {
	return ((SuiBoxImplementation*) impl)->addHeader(variable, type);
}

void SuiBoxAdapter::clearOptions() {
	return ((SuiBoxImplementation*) impl)->clearOptions();
}

void SuiBoxAdapter::setPromptTitle(const String& name) {
	return ((SuiBoxImplementation*) impl)->setPromptTitle(name);
}

void SuiBoxAdapter::setPromptText(const String& name) {
	return ((SuiBoxImplementation*) impl)->setPromptText(name);
}

void SuiBoxAdapter::setCancelButton(bool value, const String& backText) {
	return ((SuiBoxImplementation*) impl)->setCancelButton(value, backText);
}

void SuiBoxAdapter::setBackButton(bool value, const String& backText) {
	return ((SuiBoxImplementation*) impl)->setBackButton(value, backText);
}

void SuiBoxAdapter::setOkButton(bool value, const String& okText) {
	return ((SuiBoxImplementation*) impl)->setOkButton(value, okText);
}

void SuiBoxAdapter::setUsingObjectID(unsigned long long oid) {
	return ((SuiBoxImplementation*) impl)->setUsingObjectID(oid);
}

void SuiBoxAdapter::setIntValue(int value) {
	return ((SuiBoxImplementation*) impl)->setIntValue(value);
}

bool SuiBoxAdapter::isInputBox() {
	return ((SuiBoxImplementation*) impl)->isInputBox();
}

bool SuiBoxAdapter::isListBox() {
	return ((SuiBoxImplementation*) impl)->isListBox();
}

bool SuiBoxAdapter::isMessageBox() {
	return ((SuiBoxImplementation*) impl)->isMessageBox();
}

bool SuiBoxAdapter::isTransferBox() {
	return ((SuiBoxImplementation*) impl)->isTransferBox();
}

bool SuiBoxAdapter::isColorPicker() {
	return ((SuiBoxImplementation*) impl)->isColorPicker();
}

bool SuiBoxAdapter::isBankTransferBox() {
	return ((SuiBoxImplementation*) impl)->isBankTransferBox();
}

bool SuiBoxAdapter::isSlicingBox() {
	return ((SuiBoxImplementation*) impl)->isSlicingBox();
}

unsigned long long SuiBoxAdapter::getBoxID() {
	return ((SuiBoxImplementation*) impl)->getBoxID();
}

unsigned long long SuiBoxAdapter::getWindowType() {
	return ((SuiBoxImplementation*) impl)->getWindowType();
}

unsigned long long SuiBoxAdapter::getUsingObjectID() {
	return ((SuiBoxImplementation*) impl)->getUsingObjectID();
}

int SuiBoxAdapter::getIntValue() {
	return ((SuiBoxImplementation*) impl)->getIntValue();
}

Player* SuiBoxAdapter::getPlayer() {
	return ((SuiBoxImplementation*) impl)->getPlayer();
}

/*
 *	SuiBoxHelper
 */

SuiBoxHelper* SuiBoxHelper::staticInitializer = SuiBoxHelper::instance();

SuiBoxHelper::SuiBoxHelper() {
	className = "SuiBox";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void SuiBoxHelper::finalizeHelper() {
	SuiBoxHelper::finalize();
}

DistributedObject* SuiBoxHelper::instantiateObject() {
	return new SuiBox(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SuiBoxHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SuiBoxAdapter((SuiBoxImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

/*
 *	SuiBoxServant
 */

SuiBoxServant::SuiBoxServant() {
	_classHelper = SuiBoxHelper::instance();
}

SuiBoxServant::~SuiBoxServant() {
}

void SuiBoxServant::_setStub(DistributedObjectStub* stub) {
	_this = (SuiBox*) stub;
}

DistributedObjectStub* SuiBoxServant::_getStub() {
	return _this;
}

