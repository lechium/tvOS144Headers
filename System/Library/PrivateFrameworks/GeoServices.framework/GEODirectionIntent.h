/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject {

	GEOResolvedItem* _origin;
	GEOResolvedItem* _destination;
	int _transportType;

}

@property (nonatomic,readonly) GEOResolvedItem * origin;                   //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) GEOResolvedItem * destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,readonly) int transportType;                          //@synthesize transportType=_transportType - In the implementation block
-(GEOResolvedItem *)destination;
-(int)transportType;
-(GEOResolvedItem *)origin;
-(id)initWithDirectionIntent:(id)arg1 ;
@end
