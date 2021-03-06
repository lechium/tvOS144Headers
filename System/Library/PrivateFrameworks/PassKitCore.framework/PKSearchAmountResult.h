/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKSearchAutocompleteToken.h>

@class PKCurrencyAmount, NSString;

@interface PKSearchAmountResult : NSObject <PKSearchAutocompleteToken> {

	PKCurrencyAmount* _amount;
	long long _comparison;

}

@property (nonatomic,retain) PKCurrencyAmount * amount;              //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long comparison;                   //@synthesize comparison=_comparison - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)amount;
-(void)setAmount:(PKCurrencyAmount *)arg1 ;
-(void)setComparison:(long long)arg1 ;
-(long long)comparison;
-(unsigned long long)tokenType;
@end

