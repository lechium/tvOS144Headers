/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFSSHKeyFormat.h>

@class NSString;

@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedDisplayName;
+(id)possibleKeySizes;
+(id)defaultKeySize;
+(id)privateKeyType;
+(id)publicKeyType;
+(id)privateKeySpecifier;
+(id)publicKeySpecifier;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3 ;
+(id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2 ;
+(id)pkcs1FromRSAKey:(CCRSACryptorRef)arg1 ;
+(id)sshPublicKeyFromRSAKey:(CCRSACryptorRef)arg1 ;
@end

