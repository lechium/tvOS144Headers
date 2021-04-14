/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:57 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying> {

	BOOL _shouldRelaxThreshold;
	double _strictMaximumDistance;
	double _normalMaximumDistance;
	double _fuzzyMaximumDistance;

}

@property (assign,nonatomic) double strictMaximumDistance;              //@synthesize strictMaximumDistance=_strictMaximumDistance - In the implementation block
@property (assign,nonatomic) double normalMaximumDistance;              //@synthesize normalMaximumDistance=_normalMaximumDistance - In the implementation block
@property (assign,nonatomic) double fuzzyMaximumDistance;               //@synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance - In the implementation block
@property (assign,nonatomic) BOOL shouldRelaxThreshold;                 //@synthesize shouldRelaxThreshold=_shouldRelaxThreshold - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)strictMaximumDistance;
-(void)setStrictMaximumDistance:(double)arg1 ;
-(double)normalMaximumDistance;
-(void)setNormalMaximumDistance:(double)arg1 ;
-(double)fuzzyMaximumDistance;
-(void)setFuzzyMaximumDistance:(double)arg1 ;
-(BOOL)shouldRelaxThreshold;
-(void)setShouldRelaxThreshold:(BOOL)arg1 ;
@end

