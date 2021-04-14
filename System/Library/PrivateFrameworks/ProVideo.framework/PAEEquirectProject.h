/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
-(void)dealloc;
-(id)properties;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)frameSetup:(SCD_Struct_PA83*)arg1 hardware:(BOOL*)arg2 software:(BOOL*)arg3 ;
-(PCMatrix44Tmpl<float>)getViewMatrix:(/*function pointer*/void**)arg1 ;
-(BOOL)frameCleanup;
-(double)getProjectionFOVYDegrees:(/*function pointer*/void**)arg1 ;
-(HGEquirectProjectParams)getParams:(SCD_Struct_PA83*)arg1 :(id)arg2 :(id)arg3 :(id)arg4 ;
-(BOOL)renderOutput:(id)arg1 withInfo:(SCD_Struct_PA83*)arg2 ;
@end

