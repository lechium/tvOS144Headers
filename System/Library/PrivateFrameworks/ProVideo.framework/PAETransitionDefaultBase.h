/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAESharedDefaultBase.h>
#import <libobjc.A.dylib/FxTransition.h>

@interface PAETransitionDefaultBase : PAESharedDefaultBase <FxTransition> {

	BOOL _haveEase;
	BOOL _haveMotionBlur;
	int _initGap;

}
-(BOOL)addParameters;
-(BOOL)parameterChanged:(unsigned)arg1 ;
-(BOOL)addEaseParametersWithDefault:(float)arg1 andFlags:(unsigned)arg2 ;
-(BOOL)convertTimeFraction:(double)arg1 toLocal:(double*)arg2 andDerivative:(double*)arg3 atTime:(/*function pointer*/void**)arg4 ;
-(BOOL)isFrontGap;
-(BOOL)isEndGap;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 inputInfoA:(SCD_Struct_PA82)arg2 inputInfoB:(SCD_Struct_PA82)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA83*)arg5 ;
-(BOOL)finishInitialSetup:(id*)arg1 ;
-(BOOL)getEaseIn:(double*)arg1 easeOut:(double*)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)canThrowRenderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withSpeed:(float)arg5 withInfo:(SCD_Struct_PA83*)arg6 ;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(SCD_Struct_PA82)arg3 withInputB:(SCD_Struct_PA82)arg4 withTimeFraction:(float)arg5 withInfo:(SCD_Struct_PA83*)arg6 ;
-(BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_PA83*)arg5 ;
-(BOOL)addMotionBlurParameters;
-(double)relativeShutterAtTime:(/*function pointer*/void**)arg1 ;
@end

