/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SHXPCFrameworkProxy.h>
#import <libobjc.A.dylib/SHMatcher.h>

@protocol SHMatcherDelegate;
@class SHRemoteStore, SHShazamXPCServiceProxyConnection, SHSignature, NSString;

@interface SHProxyMatcher : NSObject <SHXPCFrameworkProxy, SHMatcher> {

	id<SHMatcherDelegate> _delegate;
	SHRemoteStore* _store;
	SHShazamXPCServiceProxyConnection* _proxyConnection;
	SHSignature* _currentlyMatchingSignature;

}

@property (nonatomic,retain) SHRemoteStore * store;                                            //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) SHShazamXPCServiceProxyConnection * proxyConnection;              //@synthesize proxyConnection=_proxyConnection - In the implementation block
@property (nonatomic,retain) SHSignature * currentlyMatchingSignature;                         //@synthesize currentlyMatchingSignature=_currentlyMatchingSignature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id<SHMatcherDelegate>)arg1 ;
-(void)stop;
-(void)setStore:(SHRemoteStore *)arg1 ;
-(SHRemoteStore *)store;
-(void)setProxyConnection:(SHShazamXPCServiceProxyConnection *)arg1 ;
-(SHShazamXPCServiceProxyConnection *)proxyConnection;
-(void)matchSignature:(id)arg1 ;
-(id)initWithRemoteStore:(id)arg1 ;
-(void)matchRequest:(id)arg1 ;
-(void)matcherDidFindMatch:(id)arg1 ;
-(void)matcherDidNotFindMatch:(id)arg1 ;
-(void)matcherDidFail:(id)arg1 withError:(id)arg2 ;
-(void)matcherDidFinishMatchingWithOutcome:(long long)arg1 ;
-(id)initWithRemoteStore:(id)arg1 proxyConnection:(id)arg2 ;
-(void)setCurrentlyMatchingSignature:(SHSignature *)arg1 ;
-(SHSignature *)currentlyMatchingSignature;
@end

