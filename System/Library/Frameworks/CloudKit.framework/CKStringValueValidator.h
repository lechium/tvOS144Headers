/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@class NSString;

@interface CKStringValueValidator : CKPredicateValidatorInstance {

	NSString* _value;

}

@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
@end

