/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BWVideoQualityMetrics : NSObject {

	long long _totalLux;
	int _frames;

}

@property (nonatomic,readonly) unsigned qualityScoringVersion; 
+(void)initialize;
+(id)filterMetadata:(id)arg1 ;
+(double)_luxThreshold;
+(double)_luxTransition;
-(void)reset;
-(void)processMetadata:(id)arg1 ;
-(double)computeQualityScore;
-(unsigned)qualityScoringVersion;
-(double)_computeLuxScore;
@end

