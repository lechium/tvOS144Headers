/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientSessionServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding, SVXClientSessionServiceDelegate;
@class NSString;

@interface SVXClientSessionService : NSObject <SVXClientServiceConsuming, SVXClientSessionServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	BOOL _isActive;
	long long _currentState;
	id<SVXClientSessionServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<SVXClientSessionServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SVXClientSessionServiceDelegate>)delegate;
-(void)setDelegate:(id<SVXClientSessionServiceDelegate>)arg1 ;
-(long long)currentState;
-(void)_setCurrentState:(long long)arg1 ;
-(id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2 ;
-(void)fetchStateWithCompletion:(/*^block*/id)arg1 ;
-(void)clientServiceDidChange;
-(void)handleWillChangeStateFrom:(long long)arg1 to:(long long)arg2 ;
-(void)handleDidChangeStateFrom:(long long)arg1 to:(long long)arg2 ;
-(void)handleWillPresentFeedbackWithDialogIdentifier:(id)arg1 ;
-(void)handleWillStartSoundWithID:(long long)arg1 ;
-(void)handleDidStartSoundWithID:(long long)arg1 ;
-(void)handleDidStopSoundWithID:(long long)arg1 error:(id)arg2 ;
-(void)handleWillBecomeActiveWithActivationContext:(id)arg1 ;
-(void)handleDidBecomeActiveWithActivationContext:(id)arg1 ;
-(void)handleWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2 ;
-(void)handleDidResignActiveWithDeactivationContext:(id)arg1 ;
@end

