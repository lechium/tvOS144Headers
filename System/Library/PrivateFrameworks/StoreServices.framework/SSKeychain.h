/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSKeychain : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(void)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)createAttestationDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)deleteKeychainTokensForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPublicKeyDataForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)keyCountForAccountIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 reason:(id)arg2 fallback:(id)arg3 cancel:(id)arg4 forAccountIdentifier:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)signData:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(BOOL)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

