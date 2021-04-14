/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/DCURLGenerator.h>

@class NSMutableDictionary, DCMapsLink;

@interface DCMapsURLGenerator : DCURLGenerator {

	NSMutableDictionary* _queryDictionary;
	DCMapsLink* _mapsLink;

}

@property (nonatomic,readonly) NSMutableDictionary * queryDictionary;              //@synthesize queryDictionary=_queryDictionary - In the implementation block
@property (nonatomic,readonly) DCMapsLink * mapsLink;                              //@synthesize mapsLink=_mapsLink - In the implementation block
+(id)URLWithMapsLink:(id)arg1 ;
-(id)scheme;
-(id)host;
-(id)query;
-(id)URL;
-(id)path;
-(id)mapType;
-(id)directionsMode;
-(DCMapsLink *)mapsLink;
-(void)populateQueryDictionary;
-(id)initWithMapsLink:(id)arg1 ;
-(NSMutableDictionary *)queryDictionary;
-(void)setString:(id)arg1 forQueryKey:(id)arg2 ;
@end

