/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Cards/CRInvocationChain.h>
#import <libobjc.A.dylib/CRInvocationChainDelegate.h>

@class Protocol, NSString;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate> {

	Protocol* _restrictingProtocol;

}

@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate; 
@property (nonatomic,retain) Protocol * restrictingProtocol;                             //@synthesize restrictingProtocol=_restrictingProtocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)init;
-(BOOL)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)arg1 ;
-(BOOL)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2 ;
-(Protocol *)restrictingProtocol;
-(void)setRestrictingProtocol:(Protocol *)arg1 ;
@end

