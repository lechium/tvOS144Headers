/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:15 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonOperatorValidator : CKPredicateValidatorInstance {

	unsigned long long _operatorType;

}

@property (assign,nonatomic) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
-(unsigned long long)operatorType;
-(id)initWithOperatorType:(unsigned long long)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)CKPropertiesDescription;
-(void)setOperatorType:(unsigned long long)arg1 ;
@end

