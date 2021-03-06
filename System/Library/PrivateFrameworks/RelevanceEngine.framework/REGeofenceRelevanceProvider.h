/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class CLCircularRegion, NSString;

@interface REGeofenceRelevanceProvider : RERelevanceProvider {

	CLCircularRegion* _region;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) CLCircularRegion * region;                //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(id)relevanceSimulatorID;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)_hash;
-(CLCircularRegion *)region;
-(id)initWithRegion:(id)arg1 ;
-(id)dictionaryEncoding;
-(id)initWithRegion:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

