/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <stdio.h>
#include "Kinect.h"
#include "mozilla/ModuleUtils.h"
#include "nsIClassInfoImpl.h"

NS_GENERIC_FACTORY_CONSTRUCTOR(Kinect)

NS_DEFINE_NAMED_CID(KINECT_CID);

static const mozilla::Module::CIDEntry kKinectCIDs[] = {
    { &kKINECT_CID, false, NULL, KinectConstructor },
    { NULL }
};

static const mozilla::Module::ContractIDEntry kKinectContracts[] = {
    { KINECT_CONTRACTID, &kKINECT_CID },
    { NULL }
};

static const mozilla::Module kKinectModule = {
    mozilla::Module::kVersion,
    kKinectCIDs,
    kKinectContracts,
    NULL
};

NSMODULE_DEFN(KinectModule) = &kKinectModule;
NS_IMPL_MOZILLA192_NSGETMODULE(&kKinectModule)