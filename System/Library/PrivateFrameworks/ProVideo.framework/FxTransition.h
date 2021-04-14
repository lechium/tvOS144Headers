/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxTransition <FxBaseEffect>
@required
-(BOOL)frameCleanup;
-(BOOL)frameSetup:(SCD_Struct_OZ102*)arg1 inputInfoA:(SCD_Struct_PA82)arg2 inputInfoB:(SCD_Struct_PA82)arg3 timeFraction:(float)arg4 hardware:(BOOL*)arg5 software:(BOOL*)arg6;
-(BOOL)getOutputWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 withInputA:(SCD_Struct_PA82)arg3 withInputB:(SCD_Struct_PA82)arg4 withTimeFraction:(float)arg5 withInfo:(SCD_Struct_OZ102*)arg6;
-(BOOL)renderOutput:(id)arg1 withInputA:(id)arg2 withInputB:(id)arg3 withTimeFraction:(float)arg4 withInfo:(SCD_Struct_OZ102*)arg5;

@end

