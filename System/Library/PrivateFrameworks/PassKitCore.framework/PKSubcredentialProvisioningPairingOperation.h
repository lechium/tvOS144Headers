/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKSubcredentialProvisioningPairingSessionOperation.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSString;

@interface PKSubcredentialProvisioningPairingOperation : PKSubcredentialProvisioningPairingSessionOperation <PKAppletSubcredentialPairingSessionDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)session:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
@end

