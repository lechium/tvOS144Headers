/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMEvaluationNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXMTraitDetectorNode : AXMEvaluationNode <NSSecureCoding> {

	BOOL _shouldEvaluateColorInformation;
	long long _sampleFrequency;
	double _colorDistanceTheshold;

}

@property (assign,nonatomic) long long sampleFrequency;                        //@synthesize sampleFrequency=_sampleFrequency - In the implementation block
@property (assign,nonatomic) BOOL shouldEvaluateColorInformation;              //@synthesize shouldEvaluateColorInformation=_shouldEvaluateColorInformation - In the implementation block
@property (assign,nonatomic) double colorDistanceTheshold;                     //@synthesize colorDistanceTheshold=_colorDistanceTheshold - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
-(void)nodeInitialize;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(BOOL)requiresVisionFramework;
-(BOOL)shouldEvaluateColorInformation;
-(void)_evaluateColorInformation:(id)arg1 ;
-(id)_blurValueForVisionObservation:(id)arg1 ;
-(id)_brightnessValueForVisionObservation:(id)arg1 ;
-(long long)sampleFrequency;
-(void)setSampleFrequency:(long long)arg1 ;
-(void)setShouldEvaluateColorInformation:(BOOL)arg1 ;
-(double)colorDistanceTheshold;
-(void)setColorDistanceTheshold:(double)arg1 ;
@end

