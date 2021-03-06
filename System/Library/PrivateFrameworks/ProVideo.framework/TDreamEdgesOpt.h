/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/TDreamProgramWrapperTwoInput.h>

@interface TDreamEdgesOpt : TDreamProgramWrapperTwoInput {

	float oneOverSize[2];
	int oneOverSizeUniform;
	int radioUniform;
	double _sigma;

}

@property (assign,nonatomic) double sigma;              //@synthesize sigma=_sigma - In the implementation block
-(id)init;
-(double)sigma;
-(void)setUniforms;
-(void)setOneOverSize:(const float*)arg1 ;
-(void)setSigma:(double)arg1 ;
@end

