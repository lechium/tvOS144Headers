/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicateOperator.h>

@interface NSCompoundPredicateOperator : NSPredicateOperator
+(void)initialize;
+(id)notPredicateOperator;
+(id)andPredicateOperator;
+(id)orPredicateOperator;
-(id)minimalFormInContext:(id)arg1 ofPredicates:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)predicateFormat;
-(id)symbol;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 substitutionVariables:(id)arg3 ;
-(BOOL)evaluatePredicates:(id)arg1 withObject:(id)arg2 ;
@end

