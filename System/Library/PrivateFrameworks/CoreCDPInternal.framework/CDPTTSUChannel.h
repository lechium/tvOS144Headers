/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPSecureChannelProxy.h>
#import <libobjc.A.dylib/CDPSecureChannelApprovingProxy.h>

@class CUMessageSession, NSString;

@interface CDPTTSUChannel : NSObject <CDPSecureChannelProxy, CDPSecureChannelApprovingProxy> {

	CUMessageSession* _sharingSession;
	BOOL _approverBackupRecordsExist;
	unsigned long long _approveriCloudKeychainState;
	BOOL _sentInitialResponse;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)sendPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)approverBackupRecordsExist;
-(unsigned long long)approveriCloudKeychainState;
-(void)listenForPayloadsWithHandler:(/*^block*/id)arg1 ;
-(void)setApproverBackupRecordsExist:(BOOL)arg1 ;
-(void)setApproveriCloudKeychainState:(unsigned long long)arg1 ;
@end

