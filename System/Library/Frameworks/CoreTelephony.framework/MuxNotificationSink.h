/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>
#import <CoreTelephony/CoreTelephonyClientDelegateProxyInterface.h>

@protocol MuxNotificationSinkDelegate;
@class NSString;

@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface> {

	id<MuxNotificationSinkDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MuxNotificationSinkDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<MuxNotificationSinkDelegate>)delegate;
-(void)setDelegate:(id<MuxNotificationSinkDelegate>)arg1 ;
-(void)clientDidTriggerFault:(id)arg1 ;
@end
