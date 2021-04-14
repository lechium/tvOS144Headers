/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSUUID, HMFMessageDestination, NSDictionary;

@interface HMDIDSMessageContext : HMFObject {

	NSUUID* _identifier;
	HMFMessageDestination* _destination;
	NSDictionary* _userInfo;

}

@property (copy,readonly) NSUUID * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMFMessageDestination * destination;              //@synthesize destination=_destination - In the implementation block
@property (copy,readonly) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
-(id)init;
-(NSDictionary *)userInfo;
-(NSUUID *)identifier;
-(HMFMessageDestination *)destination;
-(id)initWithIdentifier:(id)arg1 destination:(id)arg2 userInfo:(id)arg3 ;
@end

