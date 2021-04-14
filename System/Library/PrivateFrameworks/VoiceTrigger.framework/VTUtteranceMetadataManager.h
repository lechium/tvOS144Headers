/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTUtteranceMetadataManager : NSObject
+(BOOL)isUtteranceImplicitlyTrained:(id)arg1 ;
+(id)recordedTimeStampOfFile:(id)arg1 ;
+(id)_getBaseMetaDictionaryForUtterancePath:(id)arg1 ;
+(void)_writeMetaDict:(id)arg1 forUtterancePath:(id)arg2 ;
+(void)_saveMetaVersionFileAtPath:(id)arg1 ;
+(void)_upgradeLocaleDirectoryIfNecessary:(id)arg1 ;
+(BOOL)_audioDirectoryNeedsUpgrade:(id)arg1 ;
+(void)_upgradeUtteranceMeta:(id)arg1 ;
+(void)saveUtteranceMetadataForUtterance:(id)arg1 isExplicitEnrollment:(BOOL)arg2 isHandheldEnrollment:(BOOL)arg3 withBiometricResult:(unsigned long long)arg4 ;
+(void)saveMetaVersionFileAtSATAudioDirectory:(id)arg1 ;
+(void)upgradeMetaFilesIfNecessaaryAtSATRoot:(id)arg1 ;
@end

