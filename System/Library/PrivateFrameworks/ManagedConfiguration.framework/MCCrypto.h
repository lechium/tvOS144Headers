/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
@interface MCCrypto : NSObject
+(SecCertificateRef)copyCertificateRefFromPEMData:(id)arg1 ;
+(id)_decryptionFailedErrorWithUnderlyingError:(id)arg1 ;
+(id)storedActivationLockBypassCodeHash;
+(id)createAndStoreNewActivationLockBypassCodeAndHash;
+(void)createNewActivationLockBypassCodeOutCode:(char*)arg1 outRawBytes:(char*)arg2 outHash:(char*)arg3 ;
+(id)storeActivationLockBypassCode:(id)arg1 hash:(id)arg2 ;
+(SecCertificateRef)copyCertificateRefFromPKCS1Data:(id)arg1 ;
+(BOOL)isValidPKCS12Data:(id)arg1 ;
+(id)objectFromEncryptedData:(id)arg1 outCertificate:(_SecCertificate*)arg2 outError:(id*)arg3 ;
+(id)createAndStoreNewActivationLockBypassCodeAndHashIfNeeded;
+(id)storedActivationLockBypassCodeWithOutError:(id*)arg1 ;
+(void)clearStoredActivationLockBypassCode;
+(void)clearStoredActivationLockHash;
@end

