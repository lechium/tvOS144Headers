/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject {

	NSString* _accountIdentifier;
	NSString* _transactionSourceIdentifier;
	long long _accountType;
	NSString* _merchantName;
	NSString* _personName;
	long long _transactionCount;

}

@property (nonatomic,copy) NSString * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionSourceIdentifier;              //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (assign,nonatomic) long long accountType;                             //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,copy) NSString * merchantName;                             //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,copy) NSString * personName;                               //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) long long transactionCount;                        //@synthesize transactionCount=_transactionCount - In the implementation block
-(long long)accountType;
-(void)setAccountType:(long long)arg1 ;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)accountIdentifier;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
-(long long)transactionCount;
-(void)setTransactionCount:(long long)arg1 ;
-(NSString *)personName;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(NSString *)transactionSourceIdentifier;
-(void)setPersonName:(NSString *)arg1 ;
@end

