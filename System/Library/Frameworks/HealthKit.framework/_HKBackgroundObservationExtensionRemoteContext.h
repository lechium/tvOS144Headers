/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/_HKBackgroundObservationExtensionContext.h>
#import <libobjc.A.dylib/_HKBackgroundObservationExtensionRemoteXPCInterface.h>

@class HKBackgroundObservationExtension, NSString;

@interface _HKBackgroundObservationExtensionRemoteContext : _HKBackgroundObservationExtensionContext <_HKBackgroundObservationExtensionRemoteXPCInterface> {

	HKBackgroundObservationExtension* _extensionInstance;

}

@property (nonatomic,retain) HKBackgroundObservationExtension * extensionInstance;              //@synthesize extensionInstance=_extensionInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(HKBackgroundObservationExtension *)extensionInstance;
-(void)setExtensionInstance:(HKBackgroundObservationExtension *)arg1 ;
-(void)didReceiveUpdateForSampleType:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)backgroundObservationExtensionTimeWillExpire;
-(void)performCleanup;
@end

