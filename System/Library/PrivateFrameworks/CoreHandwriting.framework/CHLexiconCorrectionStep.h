/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHPostprocessingStep.h>

@class CHRecognizer, NSLocale, NSDictionary, NSCharacterSet;

@interface CHLexiconCorrectionStep : CHPostprocessingStep {

	BOOL _shouldAutocapitalize;
	int _autoCapitalizationMode;
	CHRecognizer* _recognizer;
	NSLocale* _locale;
	const LXLexiconRef _staticLexicon;
	const LXLexiconRef _customLexicon;
	const LXLexiconRef _phraseLexicon;
	const LXLexiconRef _customPhraseLexicon;
	NSDictionary* _textReplacements;
	NSCharacterSet* _consumableStrokesCharSet;
	NSCharacterSet* _fullWidthPunctuationThatExpectsUppercaseAfter;

}

@property (assign,nonatomic) BOOL shouldAutocapitalize;                                                   //@synthesize shouldAutocapitalize=_shouldAutocapitalize - In the implementation block
@property (assign,nonatomic) CHRecognizer * recognizer;                                                   //@synthesize recognizer=_recognizer - In the implementation block
@property (assign,nonatomic) NSLocale * locale;                                                           //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) const LXLexiconRef staticLexicon;                                            //@synthesize staticLexicon=_staticLexicon - In the implementation block
@property (assign,nonatomic) const LXLexiconRef customLexicon;                                            //@synthesize customLexicon=_customLexicon - In the implementation block
@property (assign,nonatomic) const LXLexiconRef phraseLexicon;                                            //@synthesize phraseLexicon=_phraseLexicon - In the implementation block
@property (assign,nonatomic) const LXLexiconRef customPhraseLexicon;                                      //@synthesize customPhraseLexicon=_customPhraseLexicon - In the implementation block
@property (nonatomic,readonly) int autoCapitalizationMode;                                                //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,retain) NSDictionary * textReplacements;                                             //@synthesize textReplacements=_textReplacements - In the implementation block
@property (nonatomic,retain) NSCharacterSet * consumableStrokesCharSet;                                   //@synthesize consumableStrokesCharSet=_consumableStrokesCharSet - In the implementation block
@property (nonatomic,retain) NSCharacterSet * fullWidthPunctuationThatExpectsUppercaseAfter;              //@synthesize fullWidthPunctuationThatExpectsUppercaseAfter=_fullWidthPunctuationThatExpectsUppercaseAfter - In the implementation block
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)process:(id)arg1 ;
-(int)autoCapitalizationMode;
-(void)setCustomPhraseLexicon:(const LXLexiconRef)arg1 ;
-(void)setTextReplacements:(NSDictionary *)arg1 ;
-(const LXLexiconRef)staticLexicon;
-(void)setStaticLexicon:(const LXLexiconRef)arg1 ;
-(const LXLexiconRef)phraseLexicon;
-(void)setPhraseLexicon:(const LXLexiconRef)arg1 ;
-(const LXLexiconRef)customLexicon;
-(void)setCustomLexicon:(const LXLexiconRef)arg1 ;
-(const LXLexiconRef)customPhraseLexicon;
-(NSDictionary *)textReplacements;
-(id)initWithAutoCapitalizationMode:(int)arg1 locale:(id)arg2 staticLexicon:(LXLexiconRef)arg3 customLexicon:(LXLexiconRef)arg4 phraseLexicon:(LXLexiconRef)arg5 customPhraseLexicon:(LXLexiconRef)arg6 recognizer:(id)arg7 textReplacements:(id)arg8 ;
-(id)getSpellCorrectedToken:(id)arg1 contextBeforeToken:(id)arg2 ;
-(id)capitalizeString:(id)arg1 ;
-(id)applyLexiconCorrections:(id)arg1 shouldCapitalizeWord:(BOOL)arg2 shouldSkipEntryCorrection:(BOOL)arg3 outBestTokenIndex:(long long*)arg4 bestLexiconTokenScore:(double*)arg5 textReplacements:(id)arg6 contextBeforeToken:(id)arg7 ;
-(id)capitalizeToken:(id)arg1 ;
-(BOOL)tokenIsExemptFromCorrection:(id)arg1 inPath:(id)arg2 withTokensInRow:(id)arg3 ;
-(id)applyLexiconCorrectionOnToken:(id)arg1 hasEmptyContext:(BOOL)arg2 history:(id)arg3 historyEndsAlphabetic:(BOOL)arg4 historyEndsWithLineBreak:(BOOL)arg5 prevToken:(id)arg6 shouldCapitalizeGivenHistory:(BOOL)arg7 tokenIndex:(long long)arg8 textReplacements:(id)arg9 shouldEntrySkipCorrection:(BOOL)arg10 contextBeforeToken:(id)arg11 ;
-(BOOL)shouldAutocapitalize;
-(void)setShouldAutocapitalize:(BOOL)arg1 ;
-(CHRecognizer *)recognizer;
-(void)setRecognizer:(CHRecognizer *)arg1 ;
-(NSCharacterSet *)consumableStrokesCharSet;
-(void)setConsumableStrokesCharSet:(NSCharacterSet *)arg1 ;
-(NSCharacterSet *)fullWidthPunctuationThatExpectsUppercaseAfter;
-(void)setFullWidthPunctuationThatExpectsUppercaseAfter:(NSCharacterSet *)arg1 ;
@end

