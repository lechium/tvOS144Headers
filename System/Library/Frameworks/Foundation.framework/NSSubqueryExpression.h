/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression : NSExpression {

	NSExpression* _collection;
	NSExpression* _variableExpression;
	NSPredicate* _subpredicate;

}
+(BOOL)supportsSecureCoding;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)predicateFormat;
-(id)collection;
-(id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3 ;
-(id)variable;
-(id)predicate;
-(BOOL)_shouldUseParensWithDescription;
-(id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3 ;
-(id)variableExpression;
@end

