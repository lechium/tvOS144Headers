/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSHashTable* _clients;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
@end

