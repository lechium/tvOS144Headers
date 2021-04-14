/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CLLocation;

@interface PLLocationOfInterestLocation : NSObject {

	CLLocation* _location;
	double _uncertainty;

}

@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double uncertainty;                 //@synthesize uncertainty=_uncertainty - In the implementation block
-(id)description;
-(double)uncertainty;
-(CLLocation *)location;
-(id)initWithLocation:(id)arg1 uncertainty:(double)arg2 ;
-(double)distanceFromLocation:(id)arg1 withTypeRadius:(double)arg2 ;
@end
