/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSAudioTimeErrorCorrelator : NSObject {

	long long _maxCorrelationLength;
	long long _upscaleFactor;
	double _samplingRate;
	/*^block*/id _correlationBlock;

}

@property (nonatomic,copy) id correlationBlock;              //@synthesize correlationBlock=_correlationBlock - In the implementation block
-(id)initWithMaxCorrelationLength:(long long)arg1 andUpscaleFactor:(long long)arg2 forSamplingRate:(double)arg3 ;
-(void)_calculateUpsamplerCoefficients:(float*)arg1 length:(long long*)arg2 ;
-(id)correlationBlock;
-(void)setCorrelationBlock:(id)arg1 ;
@end

