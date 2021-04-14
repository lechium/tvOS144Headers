/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@protocol HMFLocking;
@class NSMutableArray, HMDDevice, HMFTimer, NSString, NSArray;

@interface HMDRemoteDeviceInformation : HMFObject <HMFObject> {

	id<HMFLocking> _lock;
	NSMutableArray* _confirmationHandlers;
	BOOL _reachable;
	long long _state;
	HMDDevice* _device;
	HMFTimer* _retryTimer;

}

@property (nonatomic,readonly) HMDDevice * device;                                //@synthesize device=_device - In the implementation block
@property (readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isReachable,readonly) BOOL reachable;                           //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) HMFTimer * retryTimer;                               //@synthesize retryTimer=_retryTimer - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(HMDDevice *)device;
-(id)initWithDevice:(id)arg1 ;
-(BOOL)isReachable;
-(NSArray *)attributeDescriptions;
-(HMFTimer *)retryTimer;
-(void)setRetryTimer:(HMFTimer *)arg1 ;
-(void)clearState:(long long)arg1 ;
-(void)setReachable:(BOOL)arg1 reason:(unsigned long long)arg2 ;
-(void)queueConfirmationHandler:(/*^block*/id)arg1 timeout:(double)arg2 ;
-(void)completeConfirmationsWithError:(id)arg1 ;
@end

