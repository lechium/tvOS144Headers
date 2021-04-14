/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrivateFederatedLearning/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencySignatureVerifier, TransparencyManagedDataStore, LogHead, NSData, Signature;

@interface SignedLogHead : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencySignatureVerifier * verifier; 
@property (retain) TransparencyManagedDataStore * dataStore; 
@property (readonly) LogHead * parsedLogHead; 
@property (nonatomic,copy) NSData * logHead; 
@property (nonatomic,retain) Signature * signature; 
@property (assign,nonatomic) BOOL hasSignature; 
+(id)descriptor;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(unsigned long long)verifyWithError:(id*)arg1 ;
-(TransparencySignatureVerifier *)verifier;
-(void)setVerifier:(TransparencySignatureVerifier *)arg1 ;
-(id)copyManagedObject:(id*)arg1 ;
-(LogHead *)parsedLogHead;
-(id)createManagedObjectWithError:(id*)arg1 ;
-(void)storeSignatureResult:(unsigned long long)arg1 signatureError:(id*)arg2 ;
@end
