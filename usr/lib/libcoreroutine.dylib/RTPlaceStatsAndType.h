/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTLearnedPlaceTypeInferencePlaceStats, NSUUID;

@interface RTPlaceStatsAndType : NSObject {

	RTLearnedPlaceTypeInferencePlaceStats* _placeStats;
	unsigned long long _type;
	NSUUID* _placeIdentifier;

}

@property (nonatomic,readonly) RTLearnedPlaceTypeInferencePlaceStats * placeStats;              //@synthesize placeStats=_placeStats - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * placeIdentifier;                                        //@synthesize placeIdentifier=_placeIdentifier - In the implementation block
-(unsigned long long)type;
-(NSUUID *)placeIdentifier;
-(id)initWithPlaceStats:(id)arg1 type:(unsigned long long)arg2 placeIdentifier:(id)arg3 ;
-(RTLearnedPlaceTypeInferencePlaceStats *)placeStats;
@end

