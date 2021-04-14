/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/_NSAttributedStringGrammarInflecting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface _NSAttributedStringGrammarInflection : NSObject <_NSAttributedStringGrammarInflecting, NSCopying, NSMutableCopying> {

	long long _number;
	long long _context;
	long long _gender;
	long long _grammaticalCase;
	long long _person;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) long long context;                               //@synthesize context=_context - In the implementation block
@property (assign) long long gender;                                //@synthesize gender=_gender - In the implementation block
@property (assign) long long grammaticalCase;                       //@synthesize grammaticalCase=_grammaticalCase - In the implementation block
@property (assign) long long number;                                //@synthesize number=_number - In the implementation block
@property (assign) long long person;                                //@synthesize person=_person - In the implementation block
+(id)_inflectionToMatchWordWithToken:(id)arg1 wordGrammar:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_initWithMarkupDictionary:(id)arg1 ;
-(void)_editByApplyingPluralityRulesForNumber:(id)arg1 inLanguage:(id)arg2 ;
-(void)_editByAddingWordAttributes:(SCD_Struct_NS30)arg1 overrideIfAlreadySet:(BOOL)arg2 ;
-(long long)gender;
-(void)setGender:(long long)arg1 ;
-(long long)grammaticalCase;
-(void)setGrammaticalCase:(long long)arg1 ;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
-(long long)person;
-(void)setPerson:(long long)arg1 ;
-(long long)context;
-(void)setContext:(long long)arg1 ;
@end

