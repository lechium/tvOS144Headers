/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreHandler.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDMediaDestinationControllerBackingStoreHandlerDelegate;
@class HMMutableMediaDestinationControllerData, HMFUnfairLock, HMDMediaDestinationControllerMetricsEventDispatcher, HMMediaDestinationControllerData, NSString;

@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler <HMFLogging> {

	HMMutableMediaDestinationControllerData* _data;
	HMFUnfairLock* _lock;
	id<HMDMediaDestinationControllerBackingStoreHandlerDelegate> _delegate;
	HMDMediaDestinationControllerMetricsEventDispatcher* _metricsEventDispatcher;

}

@property (__weak) id<HMDMediaDestinationControllerBackingStoreHandlerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher * metricsEventDispatcher;              //@synthesize metricsEventDispatcher=_metricsEventDispatcher - In the implementation block
@property (copy,readonly) HMMediaDestinationControllerData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)backingStoreObjectForData:(id)arg1 ;
-(HMMediaDestinationControllerData *)data;
-(id<HMDMediaDestinationControllerBackingStoreHandlerDelegate>)delegate;
-(void)setDelegate:(id<HMDMediaDestinationControllerBackingStoreHandlerDelegate>)arg1 ;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(HMDMediaDestinationControllerMetricsEventDispatcher *)metricsEventDispatcher;
-(void)transactionObjectUpdatedDestinationIdentifier:(id)arg1 message:(id)arg2 ;
-(void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)arg1 message:(id)arg2 ;
-(void)updateDestinationIdentifier:(id)arg1 ;
-(void)notifyDidUpdateDestinationIdentifier:(id)arg1 ;
-(void)updateAvailableDestinationIdentifiers:(id)arg1 ;
-(void)notifyDidUpdateAvailableDestinationIdentifiers:(id)arg1 ;
-(id)initWithData:(id)arg1 backingStore:(id)arg2 metricsEventDispatcher:(id)arg3 delegate:(id)arg4 ;
-(void)updateDestinationIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAvailableDestinationIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)setMetricsEventDispatcher:(HMDMediaDestinationControllerMetricsEventDispatcher *)arg1 ;
@end

