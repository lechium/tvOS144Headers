/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Intents/Intents-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject {

	SCD_Struct_IN2 _stats;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _securityScopedURLs;
	NSMutableSet* _accessibleBundleIDs;

}

@property (nonatomic,readonly) NSMutableDictionary * securityScopedURLs;              //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * accessibleBundleIDs;                    //@synthesize accessibleBundleIDs=_accessibleBundleIDs - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)_stats;
-(id)grantForBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_grantForBundleIdentifiers:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)securityScopedURLs;
-(NSMutableSet *)accessibleBundleIDs;
@end

