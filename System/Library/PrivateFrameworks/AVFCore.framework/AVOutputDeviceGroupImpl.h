/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class AVOutputDeviceGroup, NSArray, AVOutputDevice;


@protocol AVOutputDeviceGroupImpl <NSObject>
@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup; 
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@required
-(float)volume;
-(void)setVolume:(float)arg1;
-(NSArray *)outputDevices;
-(long long)volumeControlType;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(AVOutputDevice *)groupLeader;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3;
-(void)setParentOutputDeviceGroup:(id)arg1;

@end

