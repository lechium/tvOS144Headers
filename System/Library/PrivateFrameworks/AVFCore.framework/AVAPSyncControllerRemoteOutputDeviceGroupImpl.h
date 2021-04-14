/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceGroupImpl.h>

@class AVOutputDeviceGroup, NSArray, AVOutputDevice, NSString;

@interface AVAPSyncControllerRemoteOutputDeviceGroupImpl : NSObject <AVOutputDeviceGroupImpl> {

	AVOutputDeviceGroup* _parentOutputDeviceGroup;
	OpaqueAPSyncControllerRef _syncController;
	CFStringRef _groupID;

}

@property (__weak) AVOutputDeviceGroup * parentOutputDeviceGroup;              //@synthesize parentOutputDeviceGroup=_parentOutputDeviceGroup - In the implementation block
@property (readonly) BOOL receivesLongFormAudioFromLocalDevice; 
@property (readonly) NSArray * outputDevices; 
@property (readonly) AVOutputDevice * groupLeader; 
@property (readonly) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(NSArray *)outputDevices;
-(long long)volumeControlType;
-(BOOL)receivesLongFormAudioFromLocalDevice;
-(void)addOutputDevice:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(AVOutputDevice *)groupLeader;
-(AVOutputDeviceGroup *)parentOutputDeviceGroup;
-(void)removeOutputDevice:(id)arg1 withOptions:(id)arg2 completionhandler:(/*^block*/id)arg3 ;
-(void)setParentOutputDeviceGroup:(AVOutputDeviceGroup *)arg1 ;
-(id)initWithRemoteGroupID:(CFStringRef)arg1 syncController:(OpaqueAPSyncControllerRef)arg2 ;
-(id)_outputDevicesFromProperty:(CFStringRef)arg1 withQualifier:(CFStringRef)arg2 ;
-(id)_outputDeviceForID:(CFStringRef)arg1 ;
-(void)_groupMembersChangedForGroupWithID:(CFStringRef)arg1 ;
-(void)_volumeChangedForGroupWithID:(CFStringRef)arg1 ;
-(void)_volumeControlTypeChangedForGroupWithID:(CFStringRef)arg1 ;
@end

