/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, NSMutableDictionary;

@interface MLFeatureFlags : NSObject {

	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _flags;
	NSMutableDictionary* _overrideOriginalValues;

}

@property (nonatomic,readonly) NSUserDefaults * userDefaults;                             //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * flags;                               //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * overrideOriginalValues;              //@synthesize overrideOriginalValues=_overrideOriginalValues - In the implementation block
+(id)sharedFeatureFlags;
-(id)init;
-(NSMutableDictionary *)flags;
-(NSUserDefaults *)userDefaults;
-(void)defineFeatures;
-(BOOL)isNNv2Enabled;
-(void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(BOOL)arg3 ;
-(BOOL)isFeatureEnabled:(id)arg1 ;
-(id)controlKeyForFeature:(id)arg1 ;
-(BOOL)setOverride:(BOOL)arg1 forFeature:(id)arg2 ;
-(BOOL)removeOverrideForFeature:(id)arg1 ;
-(NSMutableDictionary *)overrideOriginalValues;
@end

