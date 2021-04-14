/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isRemoteDevice;
	NSString* _route;
	NSUUID* _remoteDeviceUID;
	NSString* _remoteDeviceProductIdentifier;

}

@property (nonatomic,copy,readonly) NSString * route;                                      //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteDevice;                                        //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * remoteDeviceUID;                              //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteDeviceProductIdentifier;              //@synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRemoteDevice;
-(NSUUID *)remoteDeviceUID;
-(NSString *)route;
-(id)initWithXPCObject:(id)arg1 ;
-(id)xpcObject;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(BOOL)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 ;
-(id)initWithAVVCRecordDeviceInfo:(id)arg1 ;
-(NSString *)remoteDeviceProductIdentifier;
@end

