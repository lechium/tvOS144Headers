/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/OZFxPlugParameterHandler.h>
#import <libobjc.A.dylib/FxParameterCreationAPI_v4.h>
#import <libobjc.A.dylib/FxParameterRetrievalAPI_v4.h>
#import <libobjc.A.dylib/FxParameterRetrievalAPI_v5.h>
#import <libobjc.A.dylib/FxParameterSettingAPI_v4.h>
#import <libobjc.A.dylib/FxOptionalParameterRetrievalAPI_v2.h>
#import <libobjc.A.dylib/FxOptionalParameterSettingAPI_v2.h>

@class NSString;

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4, FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)getFloatValue:(double*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getIntValue:(int*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getBoolValue:(BOOL*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5 ;
-(BOOL)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6 ;
-(BOOL)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned)arg3 atFxTime:(/*function pointer*/void**)arg4 ;
-(BOOL)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_PA83*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6 ;
-(BOOL)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(SCD_Struct_PA83*)arg4 fromParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6 ;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2 ;
-(BOOL)getParameterFlags:(unsigned*)arg1 fromParm:(unsigned)arg2 ;
-(BOOL)getStringParameterValue:(id*)arg1 fromParm:(unsigned)arg2 ;
-(BOOL)getCustomParameterValue:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getPathID:(void*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getFontName:(id*)arg1 fromParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)setFloatValue:(double)arg1 toParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)setIntValue:(int)arg1 toParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)setBoolValue:(BOOL)arg1 toParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5 ;
-(BOOL)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned)arg5 atFxTime:(/*function pointer*/void**)arg6 ;
-(BOOL)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned)arg3 atFxTime:(/*function pointer*/void**)arg4 ;
-(BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned)arg2 ;
-(BOOL)setParameterFlags:(unsigned)arg1 toParm:(unsigned)arg2 ;
-(BOOL)setStringParameterValue:(id)arg1 toParm:(unsigned)arg2 ;
-(BOOL)setCustomParameterValue:(id)arg1 toParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)setPathID:(void*)arg1 toParm:(unsigned)arg2 atFxTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned)arg6 atFxTime:(/*function pointer*/void**)arg7 ;
-(BOOL)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned)arg4 atFxTime:(/*function pointer*/void**)arg5 ;
-(BOOL)addPushButtonWithName:(id)arg1 parmId:(unsigned)arg2 selector:(SEL)arg3 parmFlags:(unsigned)arg4 ;
-(BOOL)addHelpButtonWithName:(id)arg1 parmId:(unsigned)arg2 selector:(SEL)arg3 parmFlags:(unsigned)arg4 ;
-(BOOL)addFontMenuWithName:(id)arg1 parmId:(unsigned)arg2 fontName:(id)arg3 parmFlags:(unsigned)arg4 ;
-(BOOL)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned)arg7 atFxTime:(/*function pointer*/void**)arg8 ;
-(BOOL)_getFontName:(id*)arg1 fromParm:(unsigned)arg2 atTime:(/*function pointer*/void**)arg3 ;
-(BOOL)getFontName:(id*)arg1 fromParm:(unsigned)arg2 atTime:(double)arg3 ;
-(BOOL)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned)arg7 atFxTime:(/*function pointer*/void**)arg8 ;
-(id)pushButtonSelectorNameForParameterID:(unsigned)arg1 ;
@end

