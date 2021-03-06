/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SoundScapesKit.framework/SoundScapesKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SoundScapesProtocol <NSObject>
@required
-(void)stopPlayback;
-(void)playSample;
-(void)playSynth;
-(void)sendPlaybackQueueWithMediaItem:(id)arg1 forIntentID:(id)arg2 toDestination:(id)arg3 withSpeakerUserID:(id)arg4;
-(void)queryDeviceAssetStatus:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setBinIntensityPlayInterval:(unsigned long long)arg1;
-(void)enableSynthDelay:(BOOL)arg1;
-(void)updateMediaAffinity:(id)arg1 withAffinity:(BOOL)arg2;

@end

