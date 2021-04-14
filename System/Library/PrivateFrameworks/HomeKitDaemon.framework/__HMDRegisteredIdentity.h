/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMFPairingIdentity, NSMutableArray;

@interface __HMDRegisteredIdentity : HMFObject {

	HMFPairingIdentity* _identity;
	NSMutableArray* _registeredObjects;

}

@property (copy,readonly) HMFPairingIdentity * identity;              //@synthesize identity=_identity - In the implementation block
@property (readonly) NSMutableArray * registeredObjects;              //@synthesize registeredObjects=_registeredObjects - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)init;
-(HMFPairingIdentity *)identity;
-(id)initWithIdentity:(id)arg1 ;
-(NSMutableArray *)registeredObjects;
@end
