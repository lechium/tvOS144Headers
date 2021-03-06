/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class RBProcess;


@protocol RBDaemonContextProviding <NSObject>
@property (nonatomic,readonly) id<RBAssertionManaging> assertionManager; 
@property (nonatomic,readonly) id<RBEntitlementManaging> entitlementManager; 
@property (nonatomic,readonly) id<RBProcessManaging> processManager; 
@property (nonatomic,readonly) id<RBProcessMonitoring> processMonitor; 
@property (nonatomic,readonly) id<RBStateCaptureManaging> stateCaptureManager; 
@property (nonatomic,readonly) RBProcess * process; 
@required
-(id<RBProcessManaging>)processManager;
-(RBProcess *)process;
-(id<RBProcessMonitoring>)processMonitor;
-(id<RBEntitlementManaging>)entitlementManager;
-(id<RBAssertionManaging>)assertionManager;
-(id<RBStateCaptureManaging>)stateCaptureManager;

@end

