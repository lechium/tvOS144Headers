/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TouchRemote/TRDeviceSetupAction.h>

@class NSString;

@interface TRDeviceSetupConnectAction : TRDeviceSetupAction

@property (nonatomic,copy,readonly) NSString * deviceName; 
@property (nonatomic,copy,readonly) NSString * networkSSID; 
@property (nonatomic,copy,readonly) NSString * networkPassword; 
-(id)init;
-(NSString *)deviceName;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(id)initWithDeviceName:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 ;
@end
