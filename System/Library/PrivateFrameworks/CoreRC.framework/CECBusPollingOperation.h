/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CECBusPollingOperationDelegate;
@class CECInterface, NSObject;

@interface CECBusPollingOperation : NSObject {

	CECInterface* _interface;
	unsigned char _initiatorAddress;
	unsigned char _pollingAddress;
	NSObject*<OS_dispatch_queue> _queue;
	id<CECBusPollingOperationDelegate> _delegate;

}

@property (assign,nonatomic) id<CECBusPollingOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CECBusPollingOperationDelegate>)delegate;
-(void)setDelegate:(id<CECBusPollingOperationDelegate>)arg1 ;
-(void)startPolling;
-(void)stopPolling;
-(id)initWithInterface:(id)arg1 initiator:(unsigned char)arg2 queue:(id)arg3 ;
-(void)continuePolling;
-(void)poll;
@end

