/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCOptimizerDescriptor : NSObject <NSCopying> {

	BOOL _appliesGradientClipping;
	float _learningRate;
	float _gradientRescale;
	float _gradientClipMax;
	float _gradientClipMin;
	float _regularizationScale;
	int _regularizationType;

}

@property (nonatomic,readonly) float learningRate;                        //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,readonly) float gradientRescale;                     //@synthesize gradientRescale=_gradientRescale - In the implementation block
@property (nonatomic,readonly) BOOL appliesGradientClipping;              //@synthesize appliesGradientClipping=_appliesGradientClipping - In the implementation block
@property (nonatomic,readonly) float gradientClipMax;                     //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (nonatomic,readonly) float gradientClipMin;                     //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (nonatomic,readonly) float regularizationScale;                 //@synthesize regularizationScale=_regularizationScale - In the implementation block
@property (nonatomic,readonly) int regularizationType;                    //@synthesize regularizationType=_regularizationType - In the implementation block
+(id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4 ;
+(id)descriptorWithLearningRate:(float)arg1 gradientRescale:(float)arg2 appliesGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 applyGradientClipping:(BOOL)arg3 gradientClipMax:(float)arg4 gradientClipMin:(float)arg5 regularizationType:(int)arg6 regularizationScale:(float)arg7 ;
-(id)initWithLearningRate:(float)arg1 gradientRescale:(float)arg2 regularizationType:(int)arg3 regularizationScale:(float)arg4 ;
-(float)learningRate;
-(float)gradientRescale;
-(float)gradientClipMax;
-(float)gradientClipMin;
-(int)regularizationType;
-(float)regularizationScale;
-(BOOL)appliesGradientClipping;
@end

