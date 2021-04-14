/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SNDSPGraphUtilities : NSObject
+(BOOL)stopRecordingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingBoxes:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
+(BOOL)startInjectingBoxes:(id)arg1 inGraph:(id)arg2 error:(id*)arg3 ;
+(BOOL)stopInjectingBoxesInGraph:(id)arg1 ;
+(BOOL)startRecordingFirstBoxInGraph:(id)arg1 toDirectory:(id)arg2 withFileName:(id)arg3 error:(id*)arg4 ;
+(BOOL)startRecordingWithBoxRecordingInfos:(id)arg1 inGraph:(id)arg2 toDirectory:(id)arg3 error:(id*)arg4 ;
@end

