/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPRecoveryKeyValidator.h>

@protocol CDPRecoveryKeyValidator;
@class NSString;

@interface CDPRecoveryKeyValidatorProxyImpl : NSObject <CDPRecoveryKeyValidator> {

	id<CDPRecoveryKeyValidator> _validator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)confirmRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateRecoveryKey:(/*^block*/id)arg1 ;
-(id)generateRecoveryKeyWithError:(id*)arg1 ;
-(BOOL)confirmRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithRemoteObject:(id)arg1 ;
@end

