/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class RTLocation;

@interface RTPotentialNoiseLocation : NSObject {

	BOOL _isNoise;
	RTLocation* _location;

}

@property (nonatomic,readonly) RTLocation * location;                    //@synthesize location=_location - In the implementation block
@property (assign,setter=setNoise:,nonatomic) BOOL isNoise;              //@synthesize isNoise=_isNoise - In the implementation block
-(void)setNoise:(BOOL)arg1 ;
-(RTLocation *)location;
-(id)initWithLocation:(id)arg1 ;
-(BOOL)isNoise;
@end

