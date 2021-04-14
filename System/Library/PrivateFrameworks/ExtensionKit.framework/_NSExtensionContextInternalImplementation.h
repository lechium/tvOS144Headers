/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSUUID, NSXPCConnection;


@protocol _NSExtensionContextInternalImplementation <NSObject>
@property (copy,readonly) NSArray * inputItems; 
@property (copy,readonly) NSUUID * _UUID; 
@property (readonly) NSXPCConnection * _auxiliaryConnection; 
@property (setter=_setRequestCleanUpBlock:,copy) id _requestCleanUpBlock; 
@property (readonly) id _principalObject; 
@property (readonly) SCD_Struct_EX1 _extensionHostAuditToken; 
@required
-(NSUUID *)_UUID;
-(NSArray *)inputItems;
-(void)completeRequestReturningItems:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelRequestWithError:(id)arg1;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 extensionContext:(id)arg4;
-(NSXPCConnection *)_auxiliaryConnection;
-(SCD_Struct_EX1)_extensionHostAuditToken;
-(id)_requestCleanUpBlock;
-(void)_setRequestCleanUpBlock:(/*^block*/id)arg1;
-(id)_principalObject;

@end

