/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPredicate.h>

@class NSArray;

@interface NSCompoundPredicate : NSPredicate {

	void* _reserved2;
	unsigned long long _type;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType; 
@property (copy,readonly) NSArray * subpredicates; 
+(BOOL)supportsSecureCoding;
+(id)_operatorForType:(unsigned long long)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
-(id)minimalFormInContext:(id)arg1 ;
-(id)_keypathsForDerivedPropertyValidation:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)allowEvaluation;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)predicateFormat;
-(id)predicateOperator;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateWithSubstitutionVariables:(id)arg1 ;
-(id)_predicateOperator;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(NSArray *)subpredicates;
-(unsigned long long)compoundPredicateType;
-(id)_copySubpredicateDescription:(id)arg1 ;
-(void)_acceptSubpredicates:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)generateMetadataDescription;
@end

