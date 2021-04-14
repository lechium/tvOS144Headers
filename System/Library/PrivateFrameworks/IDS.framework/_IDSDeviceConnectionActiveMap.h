/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IDS/IDS-Structs.h>
@class NSMutableDictionary;

@interface _IDSDeviceConnectionActiveMap : NSObject {

	NSMutableDictionary* _activeConnectionMap;
	os_unfair_lock_s _writeLock;

}
+(id)sharedInstance;
-(id)init;
-(void)setActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasActiveConnection:(id)arg1 forKey:(id)arg2 ;
-(void)removeActiveConnection:(id)arg1 forKey:(id)arg2 ;
@end

