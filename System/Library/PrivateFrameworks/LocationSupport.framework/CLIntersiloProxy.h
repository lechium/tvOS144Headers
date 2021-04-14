/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:38 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProxy.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLSilo;

@interface CLIntersiloProxy : NSProxy {

	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 ;
+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)init;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(id)peer;
-(id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 ;
-(CLSilo *)delegateSilo;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
@end

