/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSNumber;

@interface AXShotflowConfiguration : NSObject {

	NSArray* _filterThresholds;
	NSNumber* _networkThreshold;
	NSNumber* _nmsThreshold;
	NSArray* _defaultBoxesSidesNormalized;
	NSArray* _ratios;

}

@property (nonatomic,readonly) NSArray * filterThresholds;                         //@synthesize filterThresholds=_filterThresholds - In the implementation block
@property (nonatomic,readonly) NSNumber * networkThreshold;                        //@synthesize networkThreshold=_networkThreshold - In the implementation block
@property (nonatomic,readonly) NSNumber * nmsThreshold;                            //@synthesize nmsThreshold=_nmsThreshold - In the implementation block
@property (nonatomic,readonly) NSArray * defaultBoxesSidesNormalized;              //@synthesize defaultBoxesSidesNormalized=_defaultBoxesSidesNormalized - In the implementation block
@property (nonatomic,readonly) NSArray * ratios;                                   //@synthesize ratios=_ratios - In the implementation block
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSNumber *)nmsThreshold;
-(NSArray *)filterThresholds;
-(NSNumber *)networkThreshold;
-(NSArray *)ratios;
-(NSArray *)defaultBoxesSidesNormalized;
@end

