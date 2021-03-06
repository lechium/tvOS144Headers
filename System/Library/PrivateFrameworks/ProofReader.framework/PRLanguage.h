/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PRLanguage : NSObject {

	NSString* _identifier;
	NSString* _localization;
	NSString* _fallbackLocalization;
	unsigned long long _orthoIndex;
	unsigned _encoding;
	unsigned char _languageCode;
	unsigned char _languageDialect;
	unsigned char _languageMode;

}
+(id)languageWithIdentifier:(id)arg1 ;
+(id)supportedLanguages;
+(id)dataBundle;
+(id)localizationsForLanguage:(id)arg1 ;
+(id)localizationForLanguage:(id)arg1 ;
+(id)fallbackLocalizationForLanguage:(id)arg1 ;
+(id)languageModelLocalizationForLanguage:(id)arg1 ;
+(id)languageModelFallbackLocalizationForLanguage:(id)arg1 ;
+(id)supportedAssetLexiconLanguages;
+(unsigned long long)orthographyIndexForLanguageCode:(unsigned char)arg1 ;
+(unsigned long long)orthographyIndexForForOtherLanguage:(id)arg1 ;
+(unsigned)encodingForOrthographyIndex:(unsigned long long)arg1 ;
+(id)supportedTransliterationLanguages;
+(id)supportedEnglishLocalizationAdditions;
+(void)getCodesForLanguage:(id)arg1 languageCode:(char*)arg2 languageDialect:(char*)arg3 languageMode:(char*)arg4 orthographyIndex:(unsigned long long*)arg5 encoding:(unsigned*)arg6 ;
+(id)textInputModeForLanguage:(id)arg1 ;
+(id)supportedAssetLanguages;
+(id)supportedLocalizations;
+(id)supportedLatinLanguages;
+(id)supportedNonLatinLanguages;
+(id)supportedCyrillicLanguages;
+(id)transliterationLocalizationForLanguage:(id)arg1 ;
+(id)englishLocalizationAdditionForLanguage:(id)arg1 ;
-(void)dealloc;
-(unsigned char)languageCode;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(unsigned)encoding;
-(id)localization;
-(BOOL)isArabic;
-(BOOL)isHebrew;
-(BOOL)isHindi;
-(BOOL)isKorean;
-(BOOL)isPunjabi;
-(BOOL)isTelugu;
-(BOOL)isThai;
-(id)fallbackLocalization;
-(unsigned long long)orthographyIndex;
-(unsigned char)languageDialect;
-(unsigned char)languageMode;
-(const char*)oneLetterWords;
-(const char*)twoLetterWords;
-(const char*)accents;
-(BOOL)isBicameral;
-(BOOL)isBulgarian;
-(BOOL)isCzech;
-(BOOL)isDanish;
-(BOOL)isDutch;
-(BOOL)isEnglish;
-(BOOL)isFinnish;
-(BOOL)isFrench;
-(BOOL)isGerman;
-(BOOL)isGreek;
-(BOOL)isHungarian;
-(BOOL)isIndonesian;
-(BOOL)isIrishGaelic;
-(BOOL)isItalian;
-(BOOL)isNorwegian;
-(BOOL)isNynorsk;
-(BOOL)isPolish;
-(BOOL)isPortuguese;
-(BOOL)isRomanian;
-(BOOL)isRussian;
-(BOOL)isSpanish;
-(BOOL)isSwedish;
-(BOOL)isTurkish;
-(BOOL)isUkrainian;
-(BOOL)isVietnamese;
@end

