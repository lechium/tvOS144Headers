/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxParameterAPIPrivate
@required
-(BOOL)addLevelsWithName:(id)arg1 parmId:(unsigned)arg2 hideGamma:(BOOL)arg3 parmFlags:(unsigned)arg4;
-(BOOL)addPopupMenuWithNameAndTags:(id)arg1 parmId:(unsigned)arg2 defaultValue:(unsigned)arg3 menuEntries:(id)arg4 tags:(const int*)arg5 tagCount:(int)arg6 parmFlags:(unsigned)arg7;
-(BOOL)setCustomParameterDefaultValue:(id)arg1 parmId:(unsigned)arg2;
-(BOOL)add2DVectorWithName:(id)arg1 parmId:(unsigned)arg2 defaultX:(double)arg3 defaultY:(double)arg4 parmFlags:(unsigned)arg5;
-(id)getAllParameterValuesAtTime:(SCD_Struct_PV21)arg1 transactionID:(unsigned long long)arg2 pluginSessionID:(unsigned long long)arg3;
-(void)setupImageParamIDs:(void*)arg1;
-(BOOL)hasPathParameters;
-(id)transactionForParameterID:(unsigned)arg1 atTime:(SCD_Struct_PV21)arg2 transactionID:(unsigned long long)arg3 pluginSessionID:(unsigned long long)arg4;

@end

