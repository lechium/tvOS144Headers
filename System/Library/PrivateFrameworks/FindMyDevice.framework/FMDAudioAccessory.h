/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSURL, FMDAudioAccessoryInfo;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) unsigned long long audioSafetyStatus; 
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) FMDAudioAccessoryInfo * audioAccessoryInfo; 
@property (nonatomic,readonly) BOOL playingSound; 
@optional
-(BOOL)shouldStopSoundNow;

@required
-(NSURL *)audioURL;
-(BOOL)updateAudioAsset:(id)arg1;
-(BOOL)updatePlaybackChannels:(id)arg1;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;
-(FMDAudioAccessoryInfo *)audioAccessoryInfo;
-(BOOL)playingSound;

@end

