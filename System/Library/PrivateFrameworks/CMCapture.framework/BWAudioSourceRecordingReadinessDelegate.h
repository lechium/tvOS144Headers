/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWAudioSourceRecordingReadinessDelegate <NSObject>
@required
-(void)prepareToStartRecordingWithOrientation:(int)arg1 recordingSettingsID:(long long)arg2 prefersNoInterruptionsByRingtonesAndAlerts:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)unprepareForRecording;

@end

