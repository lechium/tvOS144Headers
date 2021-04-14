/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaRemote/MRProtocolMessage.h>

@interface MRRegisterHIDDeviceResultMessage : MRProtocolMessage

@property (nonatomic,readonly) long long errorCode; 
@property (nonatomic,readonly) unsigned long long deviceIdentifier; 
-(unsigned long long)type;
-(long long)errorCode;
-(unsigned long long)deviceIdentifier;
-(id)initWithErrorCode:(long long)arg1 deviceIdentifier:(unsigned long long)arg2 ;
@end

