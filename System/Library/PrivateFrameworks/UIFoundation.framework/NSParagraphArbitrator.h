/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:10 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, NSAttributedString;

@interface NSParagraphArbitrator : NSObject {

	CFStringTokenizerRef _tokenizer;
	UBreakIteratorRef _breaker;
	NSString* _breakerString;
	NSString* _breakerLocale;
	NSAttributedString* _attributedString;
	/*^block*/id _lineWidth;
	/*^block*/id _validateLineBreakContext;
	unsigned long long _lineBreakStrategy;
	double _hyphenationFactor;
	long long _typesetterBehavior;
	NSString* _preferredLanguage;
	NSRange _paragraphRange;
	NSRange _previousLineRange;

}

@property (retain) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (assign) NSRange paragraphRange;                             //@synthesize paragraphRange=_paragraphRange - In the implementation block
@property (copy) id lineWidth;                                         //@synthesize lineWidth=_lineWidth - In the implementation block
@property (copy) id validateLineBreakContext;                          //@synthesize validateLineBreakContext=_validateLineBreakContext - In the implementation block
@property (assign) unsigned long long lineBreakStrategy;               //@synthesize lineBreakStrategy=_lineBreakStrategy - In the implementation block
@property (assign) double hyphenationFactor;                           //@synthesize hyphenationFactor=_hyphenationFactor - In the implementation block
@property (assign) long long typesetterBehavior;                       //@synthesize typesetterBehavior=_typesetterBehavior - In the implementation block
@property (assign) NSRange previousLineRange;                          //@synthesize previousLineRange=_previousLineRange - In the implementation block
@property (copy) NSString * preferredLanguage;                         //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
@property (readonly) CFStringTokenizerRef tokenizer;                   //@synthesize tokenizer=_tokenizer - In the implementation block
+(id)paragraphArbitratorWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(void)reset;
-(id)lineWidth;
-(void)setLineWidth:(id)arg1 ;
-(CFStringTokenizerRef)tokenizer;
-(void)setHyphenationFactor:(double)arg1 ;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(long long)typesetterBehavior;
-(unsigned long long)lineBreakStrategy;
-(double)hyphenationFactor;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(void)setValidateLineBreakContext:(id)arg1 ;
-(void)setParagraphRange:(NSRange)arg1 ;
-(void)setTypesetterBehavior:(long long)arg1 ;
-(SCD_Struct_NS31)lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(NSRange)arg3 ;
-(NSRange)paragraphRange;
-(void)resetBreaker;
-(void)setPreviousLineRange:(NSRange)arg1 ;
-(void)setPreferredLanguage:(NSString *)arg1 ;
-(NSString *)preferredLanguage;
-(BOOL)prepareBreakIteratorForAttributedString:(id)arg1 characterIndex:(unsigned long long)arg2 ;
-(NSRange)previousLineRange;
-(BOOL)prepareTokenizerForPreferredLanguage:(id)arg1 ;
-(id)validateLineBreakContext;
-(unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1 ;
@end

