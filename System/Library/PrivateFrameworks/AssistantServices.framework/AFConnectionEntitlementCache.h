/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface AFConnectionEntitlementCache : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _bundleIDToPIDMap;

}
+(id)sharedCache;
-(id)init;
-(BOOL)hasEntitlement:(id)arg1 forPID:(int)arg2 ;
-(void)cacheEntitlement:(id)arg1 forPID:(int)arg2 bundleID:(id)arg3 ;
@end

