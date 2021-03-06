/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {

	MRVirtualTouchDeviceDescriptor* _deviceDescriptor;

}

@property (nonatomic,copy,readonly) MRVirtualTouchDeviceDescriptor * deviceDescriptor; 
-(unsigned long long)type;
-(id)initWithDeviceDescriptor:(id)arg1 ;
-(MRVirtualTouchDeviceDescriptor *)deviceDescriptor;
@end

