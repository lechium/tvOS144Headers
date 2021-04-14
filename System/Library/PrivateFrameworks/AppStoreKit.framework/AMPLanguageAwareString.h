/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/AMPWritingDirectionContentProtocol.h>

@class NSAttributedString, NSString, NSArray;

@interface AMPLanguageAwareString : NSObject <AMPWritingDirectionContentProtocol> {

	 baseAttributedString;
	 $__lazy_storage_$_attributedString;
	 cachedTextStorage;
	 knownBaseWritingDirections;
	 string;
	 $__lazy_storage_$_localizedLowercase;
	 $__lazy_storage_$_localizedUppercase;
	 $__lazy_storage_$_newlinesCollapsedToSpace;
	 $__lazy_storage_$_trimmed;
	 numbers;
	 paragraphs;
	 words;
	 $__lazy_storage_$_fullRange;
	 $__lazy_storage_$_isEmpty;
	 $__lazy_storage_$_utf16Count;
	 $__lazy_storage_$_utf32Count;
	 $__lazy_storage_$_thresholdBaseWritingDirection;

}

@property (retain,nonatomic) NSAttributedString * attributedString; 
@property (readonly,nonatomic) NSString * string; 
@property (retain,nonatomic) AMPLanguageAwareString * localizedLowercase; 
@property (retain,nonatomic) AMPLanguageAwareString * localizedUppercase; 
@property (retain,nonatomic) AMPLanguageAwareString * newlinesCollapsedToSpace; 
@property (retain,nonatomic) AMPLanguageAwareString * trimmed; 
@property (readonly,nonatomic) NSArray * numbers; 
@property (readonly,nonatomic) NSArray * paragraphs; 
@property (readonly,nonatomic) NSArray * words; 
@property (assign,nonatomic) NSRange fullRange; 
@property (assign,nonatomic) BOOL isEmpty; 
@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long utf32Length; 
@property (assign,nonatomic) long long thresholdBaseWritingDirection; 
+(id)delegate;
+(void)setDelegate:(id)arg1 ;
+(BOOL)alwaysGenerateAttributedString;
+(void)setAlwaysGenerateAttributedString:(BOOL)arg1 ;
+(id)AMPLanguageAwareStringEmpty;
-(id)init;
-(long long)length;
-(NSString *)string;
-(BOOL)isEmpty;
-(void)setLength:(long long)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSArray *)words;
-(NSAttributedString *)attributedString;
-(void)setIsEmpty:(BOOL)arg1 ;
-(void)setTrimmed:(AMPLanguageAwareString *)arg1 ;
-(AMPLanguageAwareString *)trimmed;
-(NSRange)fullRange;
-(AMPLanguageAwareString *)localizedLowercase;
-(void)setLocalizedLowercase:(AMPLanguageAwareString *)arg1 ;
-(AMPLanguageAwareString *)localizedUppercase;
-(void)setLocalizedUppercase:(AMPLanguageAwareString *)arg1 ;
-(AMPLanguageAwareString *)newlinesCollapsedToSpace;
-(void)setNewlinesCollapsedToSpace:(AMPLanguageAwareString *)arg1 ;
-(NSArray *)numbers;
-(NSArray *)paragraphs;
-(void)setFullRange:(NSRange)arg1 ;
-(long long)utf32Length;
-(void)setUtf32Length:(long long)arg1 ;
-(id)initWithAttributedString:(id)arg1 baseParagraphStyle:(id)arg2 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 baseParagraphStyle:(id)arg3 ;
-(id)initWithString:(id)arg1 baseParagraphStyle:(id)arg2 generateAttributedString:(BOOL)arg3 ;
-(id)initWithLanguageAwareString:(id)arg1 attributes:(id)arg2 ;
-(long long)baseWritingDirectionForCharacterAtLocation:(long long)arg1 ;
-(long long)thresholdBaseWritingDirection;
-(void)setThresholdBaseWritingDirection:(long long)arg1 ;
-(long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(BOOL)arg5 ;
-(id)writingDirectionsQuantities;
@end

