/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SVXClientServiceConsuming.h>
#import <libobjc.A.dylib/SVXClientAudioSystemServicing.h>

@protocol SVXPerforming, SVXClientServiceProviding, SVXClientAudioSystemServiceDelegate;
@class NSString;

@interface SVXClientAudioSystemService : NSObject <SVXClientServiceConsuming, SVXClientAudioSystemServicing> {

	id<SVXPerforming> _performer;
	id<SVXClientServiceProviding> _clientServiceProvider;
	BOOL _isAudioSessionActive;
	id<SVXClientAudioSystemServiceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SVXClientAudioSystemServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SVXClientAudioSystemServiceDelegate>)delegate;
-(void)setDelegate:(id<SVXClientAudioSystemServiceDelegate>)arg1 ;
-(id)initWithClientServiceProvider:(id)arg1 performer:(id)arg2 ;
-(void)clientServiceDidChange;
-(void)handleAudioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
-(void)handleAudioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3 ;
@end

