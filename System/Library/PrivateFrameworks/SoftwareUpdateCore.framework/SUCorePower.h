/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SUCorePower : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSMutableDictionary* _activePowerAssertions;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> assertionQueue;              //@synthesize assertionQueue=_assertionQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activePowerAssertions;                       //@synthesize activePowerAssertions=_activePowerAssertions - In the implementation block
+(id)sharedPowerManager;
+(void)_enablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)_disablePowerAssertion:(id)arg1 forAppendedDomain:(id)arg2 ;
+(void)setPowerAssertion:(BOOL)arg1 forIdentifierDomain:(id)arg2 ;
+(int)getPowerAssertionCountForIdentifierDomain:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)assertionQueue;
-(NSMutableDictionary *)activePowerAssertions;
-(void)setActivePowerAssertions:(NSMutableDictionary *)arg1 ;
@end

