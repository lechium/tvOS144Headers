/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDAccessorySettingsControllerDependencyFactory.h>

@protocol HMDAccessorySettingsControllerDependencyFactory
@required
-(id)timerWithReason:(long long)arg1 interval:(double)arg2;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4;
-(id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2;
-(void)assertWithCondition:(BOOL)arg1 message:(id)arg2;

@end


@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>
-(id)timerWithReason:(long long)arg1 interval:(double)arg2 ;
-(id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4 ;
-(id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)assertWithCondition:(BOOL)arg1 message:(id)arg2 ;
@end
