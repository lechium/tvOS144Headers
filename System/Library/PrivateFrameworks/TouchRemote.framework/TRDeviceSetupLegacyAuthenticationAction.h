/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRDeviceSetupConnectAction.h>

@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction : TRDeviceSetupConnectAction {

	NSString* _deviceGUID;
	NSString* _userAgent;

}

@property (nonatomic,retain) NSString * deviceGUID;              //@synthesize deviceGUID=_deviceGUID - In the implementation block
@property (nonatomic,retain) NSString * userAgent;               //@synthesize userAgent=_userAgent - In the implementation block
-(void)setUserAgent:(NSString *)arg1 ;
-(id)deviceName;
-(NSString *)userAgent;
-(void)setDeviceGUID:(NSString *)arg1 ;
-(NSString *)deviceGUID;
-(id)propertyListRepresentation;
@end

