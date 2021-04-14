/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {

	BOOL _caseInsensitive;
	int _comparison;
	id _value;
	NSString* _treatNullAsString;
	NSString* _transformFunction;

}

@property (nonatomic,readonly) id value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) int comparison;                                 //@synthesize comparison=_comparison - In the implementation block
@property (nonatomic,readonly) BOOL caseInsensitive;                           //@synthesize caseInsensitive=_caseInsensitive - In the implementation block
@property (nonatomic,copy,readonly) NSString * treatNullAsString;              //@synthesize treatNullAsString=_treatNullAsString - In the implementation block
@property (nonatomic,copy,readonly) NSString * transformFunction;              //@synthesize transformFunction=_transformFunction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 ;
+(id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 treatNullAsString:(id)arg5 ;
+(id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(id)operator;
-(int)comparison;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(BOOL)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3 ;
-(BOOL)caseInsensitive;
-(NSString *)treatNullAsString;
-(NSString *)transformFunction;
-(id)valueToBindForOperation:(long long)arg1 ;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(BOOL)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6 ;
@end

