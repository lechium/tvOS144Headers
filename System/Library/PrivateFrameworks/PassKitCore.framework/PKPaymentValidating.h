/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PKPaymentValidating <NSObject>
@optional
+(id)validatorWithObject:(id)arg1;
+(Class)validatedClass;
-(BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2;

@required
-(BOOL)isValidWithError:(id*)arg1;

@end

