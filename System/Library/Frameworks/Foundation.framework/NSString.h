/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:00 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/ISCompositorResource.h>
#import <libobjc.A.dylib/CUByteCodable.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSAttributedString;

@interface NSString : NSObject <ISCompositorResource, CUByteCodable, NSItemProviderReading, NSItemProviderWriting, NSCopying, NSMutableCopying, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * un_localizedStringArguments; 
@property (nonatomic,copy,readonly) NSString * un_localizedStringKey; 
@property (nonatomic,copy,readonly) NSString * un_localizedStringValue; 
@property (readonly) BOOL containsDotDotPathComponents; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (copy,readonly) NSString * stringByRemovingPercentEncoding; 
@property (nonatomic,readonly) NSAttributedString * __baseAttributedString; 
@property (readonly) unsigned long long length; 
+(void)setHyphenationFactor:(float)arg1 ;
+(double)defaultLineHeightForFont:(id)arg1 ;
+(double)defaultBaselineOffsetForFont:(id)arg1 ;
+(long long)typesetterBehavior;
+(float)hyphenationFactor;
+(BOOL)usesFontLeading;
+(void)setTypesetterBehavior:(long long)arg1 ;
+(void)setUsesFontLeading:(BOOL)arg1 ;
+(BOOL)usesScreenFonts;
+(void)setUsesScreenFonts:(BOOL)arg1 ;
+(void)setShowsInvisibleCharacters:(BOOL)arg1 ;
+(BOOL)showsInvisibleCharacters;
+(void)setShowsControlCharacters:(BOOL)arg1 ;
+(BOOL)showsControlCharacters;
+(id)_webkit_localCacheDirectoryWithBundleIdentifier:(id)arg1 ;
+(id)localizedUserNotificationStringForKey:(id)arg1 arguments:(id)arg2 ;
+(id)MCMakeUUID;
+(id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(USetRef)_ideographSet;
+(USetRef)_nonIdeographicCharacterSet;
+(USetRef)_characterSetWithPattern:(id)arg1 ;
+(USetRef)_nonJapaneseLetterSet;
+(USetRef)_japaneseLetterSet;
+(USetRef)_hiraganaSet;
+(USetRef)_nonHiraganaOrKatakanaSet;
+(USetRef)_nonKatakanaOrKanjiSet;
+(USetRef)_nonHiraganaKatakanaOrBopomofoSet;
+(USetRef)_bopomofoSet;
+(USetRef)_bopomofoToneSet;
+(USetRef)_bopomofoWithoutToneSet;
+(USetRef)_fullwidthLettersAndNumbersSet;
+(USetRef)_nonFullwidthLettersAndNumbersSet;
+(USetRef)_fullwidthLettersAndSymbolsSet;
+(BOOL)_string:(id)arg1 matchesString:(id)arg2 ;
+(id)stringWithUnichar:(unsigned)arg1 ;
+(id)_stringWithUnichar:(unsigned)arg1 ;
+(id)NSStringFromLSInstallType:(unsigned long long)arg1 ;
+(id)NSStringFromLSInstallState:(unsigned long long)arg1 ;
+(id)NSStringFromLSInstallPhase:(unsigned long long)arg1 ;
+(id)stringWithFileSystemRepresentation:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)stringWithFileSystemRepresentation:(const char*)arg1 ;
+(id)cutStringGUID;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)stringWithUTF8String:(const char*)arg1 ;
+(id)stringWithFormat:(id)arg1 ;
+(id)string;
+(BOOL)supportsSecureCoding;
+(id)stringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
+(id)stringWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
+(id)stringWithString:(id)arg1 ;
+(unsigned long long)defaultCStringEncoding;
+(id)stringWithBytes:(const void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
+(id)localizedNameOfStringEncoding:(unsigned long long)arg1 ;
+(id)localizedStringWithFormat:(id)arg1 ;
+(id)pathWithComponents:(id)arg1 ;
+(id)_newZStringWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
+(id)_newZStringWithString:(id)arg1 ;
+(id)_newZStringWithUTF8String:(const char*)arg1 ;
+(unsigned long long)stringEncodingForData:(id)arg1 encodingOptions:(id)arg2 convertedString:(id*)arg3 usedLossyConversion:(BOOL*)arg4 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)stringWithCString:(const char*)arg1 ;
+(id)stringWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
+(id)localizedStringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3 ;
+(id)stringWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 error:(id*)arg3 ;
+(id)stringWithFormat:(id)arg1 locale:(id)arg2 ;
+(id)stringWithContentsOfFile:(id)arg1 ;
+(id)stringWithContentsOfURL:(id)arg1 ;
+(id)stringWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)stringWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
+(id)stringWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)stringWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
+(const unsigned long long*)availableStringEncodings;
+(id)_web_stringRepresentationForBytes:(long long)arg1 ;
-(id)_initWithUTF8String:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 withFont:(id)arg2 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 ;
-(CGSize)sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)sizeWithFont:(id)arg1 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 ;
-(CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 ;
-(id)_uikit_stringByTrimmingWhitespaceAndNewlines;
-(id)_uikit_stringWithWritingDirection:(long long)arg1 asOverride:(BOOL)arg2 ;
-(id)_uikit_unescapedQueryValue;
-(id)queryKeysAndValues;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 ;
-(CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 withFont:(id)arg2 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 ;
-(CGSize)sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(CGSize)drawInRect:(CGRect)arg1 withFont:(id)arg2 ;
-(CGSize)drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 ;
-(CGSize)drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 ;
-(CGSize)sizeWithFont:(id)arg1 minFontSize:(double)arg2 actualFontSize:(double*)arg3 forWidth:(double)arg4 lineBreakMode:(long long)arg5 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3 letterSpacing:(double)arg4 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(BOOL)arg6 ;
-(CGSize)_legacy_sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 ;
-(CGSize)_legacy_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(CGRect*)arg7 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(BOOL)arg7 ;
-(CGSize)_legacy_drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(BOOL)arg8 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 lineBreakMode:(long long)arg4 letterSpacing:(double)arg5 includeEmoji:(BOOL)arg6 ;
-(CGSize)sizeWithFont:(id)arg1 constrainedToSize:(CGSize)arg2 lineBreakMode:(long long)arg3 lineSpacing:(int)arg4 ;
-(CGSize)drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 ;
-(CGSize)drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 ;
-(CGSize)_drawInRect:(CGRect)arg1 withFont:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4 lineSpacing:(int)arg5 includeEmoji:(BOOL)arg6 truncationRect:(CGRect*)arg7 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 fontSize:(double)arg4 lineBreakMode:(long long)arg5 baselineAdjustment:(long long)arg6 includeEmoji:(BOOL)arg7 ;
-(CGSize)drawAtPoint:(CGPoint)arg1 forWidth:(double)arg2 withFont:(id)arg3 minFontSize:(double)arg4 actualFontSize:(double*)arg5 lineBreakMode:(long long)arg6 baselineAdjustment:(long long)arg7 includeEmoji:(BOOL)arg8 ;
-(CGSize)_optimizedSizeWithFont:(id)arg1 ;
-(id)_uikit_stringByRemovingFirstMatchFromPrefixes:(id)arg1 ;
-(id)imageMetadataFromFileName;
-(id)scaleableResourceMetadataFromFileName;
-(CGSize)sizeWithAttributes:(id)arg1 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4 ;
-(void)drawAtPoint:(CGPoint)arg1 withAttributes:(id)arg2 ;
-(void)drawInRect:(CGRect)arg1 withAttributes:(id)arg2 ;
-(CGSize)_sizeWithSize:(CGSize)arg1 attributes:(id)arg2 ;
-(void)drawWithRect:(CGRect)arg1 options:(long long)arg2 attributes:(id)arg3 context:(id)arg4 ;
-(void)drawWithRect:(CGRect)arg1 options:(long long)arg2 attributes:(id)arg3 ;
-(CGRect)boundingRectWithSize:(CGSize)arg1 options:(long long)arg2 attributes:(id)arg3 ;
-(BOOL)hasColorGlyphsInRange:(NSRange)arg1 attributes:(id)arg2 ;
-(id)stringByStrippingLeadingAndTrailingWhitespaceAndQuotes;
-(id)_webkit_scriptIfJavaScriptURL;
-(BOOL)_webkit_isCaseInsensitiveEqualToString:(id)arg1 ;
-(id)_web_stringByAbbreviatingWithTildeInPath;
-(BOOL)_webkit_hasCaseInsensitivePrefix:(id)arg1 ;
-(BOOL)_webkit_hasCaseInsensitiveSuffix:(id)arg1 ;
-(id)_webkit_filenameByFixingIllegalCharacters;
-(id)_webkit_stringByTrimmingWhitespace;
-(id)_web_capitalizeRFC822HeaderFieldName;
-(id)_web_possibleURLsForForUserTypedString:(BOOL)arg1 ;
-(id)_web_possibleURLsForUserTypedString;
-(id)_web_possibleURLPrefixesForUserTypedString;
-(id)_web_bestURLForUserTypedString;
-(BOOL)_webkit_isJavaScriptURL;
-(BOOL)_webkit_isFileURL;
-(id)_webkit_stringByReplacingValidPercentEscapes;
-(NSRange)_webkit_rangeOfURLScheme;
-(BOOL)_web_isUserVisibleURL;
-(id)_web_decodeHostName;
-(id)_web_encodeHostName;
-(id)_webkit_decodeHostName;
-(id)_webkit_encodeHostName;
-(BOOL)_webkit_looksLikeAbsoluteURL;
-(id)un_logDigest;
-(unsigned long long)un_unsignedLongLongValue;
-(id)un_stringWithMaxLength:(unsigned long long)arg1 ;
-(NSArray *)un_localizedStringArguments;
-(NSString *)un_localizedStringKey;
-(NSString *)un_localizedStringValue;
-(id)MCAppendDeviceName;
-(id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2 ;
-(id)MCHashedIdentifier;
-(id)MCSHA256DigestWithSalt:(id)arg1 ;
-(id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1 ;
-(unsigned)MCHash;
-(id)MCHashedFilenameWithExtension:(id)arg1 ;
-(id)MCOldStyleSafeFilenameHash;
-(id)MCSHA256DigestWithPasscodeSalt;
-(id)MCAppendGreenteaSuffix;
-(id)MCRemoveAppExternalVersionIDParameter;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(long long)compareVersionString:(id)arg1 ;
-(id)stringByTrimming;
-(id)stringByTrimmingColumnSensitive;
-(id)encodedDataAndReturnError:(id*)arg1 ;
-(const char*)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2 ;
-(id)_initWithUTF8String:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)isDelete;
-(BOOL)_contentsExclusivelyInCharacterSet:(USetRef)arg1 ;
-(unsigned)_lastLongCharacter;
-(BOOL)_containsCJKScriptsOnly;
-(id)_stringByTranscribingUsingTokenizer:(CFStringTokenizerRef)arg1 ;
-(BOOL)_isOnlyIdeographs;
-(id)_stringByApplyingTransform:(id)arg1 ;
-(id)_stringByTransliteratingToPinyin:(BOOL)arg1 ;
-(id)_stringByTransliteratingToZhuyin:(BOOL)arg1 ;
-(NSRange)_rangeOfLongCharacterAtIndex:(unsigned long long)arg1 ;
-(void)_enumerateLongCharactersInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)arg1 ;
-(id)_stringByTrimmingLastCharacter;
-(id)_stringByReplacingCharactersInSet:(CFCharacterSetRef)arg1 withCharacter:(unsigned)arg2 ;
-(id)_stringByReplacingCharacter:(unsigned)arg1 withCharacter:(unsigned)arg2 ;
-(BOOL)_endsSentence;
-(BOOL)_isLeftAssociative;
-(BOOL)_isPlainSpace;
-(BOOL)_isSpace;
-(BOOL)_isSpaceOrReturn;
-(BOOL)_isNewlineOrReturn;
-(BOOL)_isDelete;
-(BOOL)_looksLikeEmailAddress;
-(BOOL)_looksLikeNumberInput;
-(BOOL)_looksLikeURL;
-(BOOL)_isNaturallyRTL;
-(BOOL)_containsSubstring:(id)arg1 ;
-(unsigned long long)_editDistanceFrom:(id)arg1 ;
-(unsigned short)_firstChar;
-(void)_reverseEnumerateLongCharactersInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSRange)_rangeOfBackwardDeletionClusterAtIndex:(unsigned long long)arg1 ;
-(NSRange)_rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 withClusterOffset:(long long)arg2 ;
-(NSRange)_rangeOfString:(id)arg1 fromLocation:(unsigned long long)arg2 ;
-(unsigned long long)_UTF8SizeOfRange:(NSRange)arg1 ;
-(BOOL)_isModifierSymbol;
-(BOOL)_isBasicLatin;
-(BOOL)_containsCJScripts;
-(BOOL)_isIdeographicGlyphs;
-(BOOL)_endsWithHalfwidth;
-(id)_firstGrapheme;
-(id)_lastGrapheme;
-(id)_graphemeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_graphemeCount;
-(BOOL)_containsIdeographicCharacters;
-(BOOL)_containsJapanese;
-(BOOL)_containsJapaneseOnly;
-(BOOL)_containsHiraganaOnly;
-(BOOL)_containsHiraganaOrKatakana;
-(BOOL)_containsKatakanaOrKanji;
-(BOOL)_containsHiraganaKatakanaOrBopomofo;
-(BOOL)_containsEmoji;
-(BOOL)_containsEmojiOnly;
-(BOOL)_containsBopomofoOnly;
-(BOOL)_containsBopomofoToneOnly;
-(BOOL)_containsBopomofoWithoutToneOnly;
-(BOOL)_containsIdeographsOrBopomofoOnly;
-(BOOL)_containsCJScriptsOnly;
-(BOOL)_containsCJKSymbolsAndPunctuation;
-(BOOL)_containsSymbolsAndPunctuationOnly;
-(BOOL)_containsFullwidthLettersAndNumbersOnly;
-(BOOL)_containsFullwidthLettersAndNumbers;
-(BOOL)_containsFullwidthLettersAndSymbolsOnly;
-(BOOL)_shouldBePaddedWithSpaces;
-(id)_stringByConvertingFromHalfWidthToFullWidth;
-(id)_stringByConvertingFromFullWidthToHalfWidth;
-(id)_stringByTranscribingFromLanguage:(id)arg1 ;
-(id)_stringByTransliteratingToPinyin;
-(id)_stringByTransliteratingToPinyinAsFamilyName;
-(id)_stringByTransliteratingToZhuyin;
-(id)_stringByTransliteratingToZhuyinAsFamilyName;
-(id)_stringByComposingDiacriticsLogicalOrder:(BOOL)arg1 allowedCharacters:(/*^block*/id)arg2 ;
-(id)stringByTrimmingCharactersInCFCharacterSet:(CFCharacterSetRef)arg1 ;
-(id)stringByTrimmingLastCharacter;
-(id)stringByReplacingCharactersInSet:(CFCharacterSetRef)arg1 withCharacter:(unsigned)arg2 ;
-(id)stringByReplacingCharacter:(unsigned)arg1 withCharacter:(unsigned)arg2 ;
-(BOOL)endsSentence;
-(BOOL)isLeftAssociative;
-(BOOL)isPlainSpace;
-(BOOL)isSpace;
-(BOOL)isSpaceOrReturn;
-(BOOL)isNewlineOrReturn;
-(BOOL)isTripledPunctuation;
-(BOOL)looksLikeEmailAddress;
-(BOOL)looksLikeNumberInput;
-(BOOL)looksLikeURL;
-(BOOL)isNaturallyRTL;
-(BOOL)containsSubstring:(id)arg1 ;
-(unsigned long long)editDistanceFrom:(id)arg1 ;
-(unsigned long long)_indexFromStartingIndex:(unsigned long long)arg1 byIncrementingComposedCharacterSequenceCount:(unsigned long long)arg2 ;
-(BOOL)_isTripledPunctuation;
-(unsigned)_firstLongCharacter;
-(id)stringByTrimming;
-(id)stringByTrimmingColumnSensitive;
-(BOOL)ls_matchesStringForPluginQuery:(id)arg1 ;
-(id)ls_cleanForPluginQuery;
-(BOOL)ls_matchesForPluginQuery:(id)arg1 ;
-(id)ls_visuallyOrderCharactersReturningError:(id*)arg1 ;
-(BOOL)containsDotDotPathComponents;
-(id)_pb_fixCase:(BOOL)arg1 ;
-(id)cutStringByResolvingAndStandardizingPath;
-(long long)_caseInsensitiveNumericCompare:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(unsigned long long)length;
-(BOOL)getBytes:(void*)arg1 maxLength:(unsigned long long)arg2 usedLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 options:(unsigned long long)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 ;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(double)doubleValue;
-(long long)longLongValue;
-(BOOL)isNSString__;
-(int)intValue;
-(float)floatValue;
-(unsigned long long)lengthOfBytesUsingEncoding:(unsigned long long)arg1 ;
-(id)initWithFormat:(id)arg1 arguments:(char*)arg2 ;
-(id)initWithUTF8String:(const char*)arg1 ;
-(const char*)cString;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(const char*)UTF8String;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(BOOL)_getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned)arg3 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)_isCString;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)boolValue;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)cStringLength;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)hasPrefix:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(long long)integerValue;
-(unsigned long long)_cfTypeID;
-(id)_createSubstringWithRange:(NSRange)arg1 ;
-(void)getParagraphStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(unsigned)_smallestEncodingInCFStringEncoding;
-(unsigned)_fastestEncodingInCFStringEncoding;
-(unsigned char)_encodingCantBeStoredInEightBitCFString;
-(id)_stringRepresentation;
-(id)initWithString:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)formatConfiguration;
-(id)_copyFormatStringWithConfiguration:(id)arg1 ;
-(const char*)fileSystemRepresentation;
-(id)stringByAppendingFormat:(id)arg1 ;
-(id)componentsSeparatedByString:(id)arg1 ;
-(id)lastPathComponent;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)stringByAppendingPathComponent:(id)arg1 ;
-(id)substringFromIndex:(unsigned long long)arg1 ;
-(id)lowercaseString;
-(id)stringByAppendingString:(id)arg1 ;
-(id)stringByAddingPercentEncodingWithAllowedCharacters:(id)arg1 ;
-(id)substringToIndex:(unsigned long long)arg1 ;
-(id)propertyList;
-(id)uppercaseString;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 ;
-(NSRange)rangeOfString:(id)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 ;
-(id)initWithCString:(const char*)arg1 encoding:(unsigned long long)arg2 ;
-(id)stringByAppendingPathExtension:(id)arg1 ;
-(id)stringByTrimmingCharactersInSet:(id)arg1 ;
-(id)pathExtension;
-(BOOL)_web_isCaseInsensitiveEqualToString:(id)arg1 ;
-(id)initWithData:(id)arg1 encoding:(unsigned long long)arg2 ;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(BOOL)containsString:(id)arg1 ;
-(BOOL)isAbsolutePath;
-(id)stringByDeletingPathExtension;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)variantFittingPresentationWidth:(long long)arg1 ;
-(id)_widthVariants;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 freeWhenDone:(BOOL)arg4 ;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg1 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)stringByDeletingLastPathComponent;
-(long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)getBytes:(char*)arg1 maxLength:(unsigned long long)arg2 filledLength:(unsigned long long*)arg3 encoding:(unsigned long long)arg4 allowLossyConversion:(BOOL)arg5 range:(NSRange)arg6 remainingRange:(NSRange*)arg7 ;
-(id)capitalizedString;
-(id)decomposedStringWithCanonicalMapping;
-(id)precomposedStringWithCanonicalMapping;
-(id)decomposedStringWithCompatibilityMapping;
-(id)precomposedStringWithCompatibilityMapping;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(BOOL)canBeConvertedToEncoding:(unsigned long long)arg1 ;
-(const char*)lossyCString;
-(BOOL)_allowsDirectEncoding;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(id)dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(BOOL)arg2 ;
-(id)stringByReplacingOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(SCD_Struct_NS16)decimalValue;
-(id)quotedStringRepresentation;
-(id)stringByStandardizingPath;
-(id)stringByResolvingSymlinksInPath;
-(id)pathComponents;
-(id)_web_filenameByFixingIllegalCharacters;
-(void)enumerateSubstringsInRange:(NSRange)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSAttributedString *)__baseAttributedString;
-(id)__escapeString5991;
-(id)initWithCString:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 arguments:(char*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 encoding:(unsigned long long)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(id)initWithCStringNoCopy:(char*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFormat:(id)arg1 locale:(id)arg2 ;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg1 ;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByExpandingTildeInPath;
-(id)stringsByAppendingPaths:(id)arg1 ;
-(unsigned long long)completePathIntoString:(id*)arg1 caseSensitive:(BOOL)arg2 matchesIntoArray:(id*)arg3 filterTypes:(id)arg4 ;
-(id)stringByConvertingPathToURL;
-(id)stringByConvertingURLToPath;
-(NSRange)rangeOfComposedCharacterSequenceAtIndex:(unsigned long long)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id)stringByReplacingCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(NSRange)rangeOfCharacterFromSet:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 ;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithValidatedFormat:(id)arg1 validFormatSpecifiers:(id)arg2 locale:(id)arg3 arguments:(char*)arg4 error:(id*)arg5 ;
-(id)initWithContentsOfURL:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfFile:(id)arg1 usedEncoding:(unsigned long long*)arg2 error:(id*)arg3 ;
-(NSRange)_rangeOfRegularExpressionPattern:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)_stringByReplacingOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(void)_getBlockStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 stopAtLineSeparators:(BOOL)arg5 ;
-(id)_initWithDataOfUnknownEncoding:(id)arg1 ;
-(id)_initWithBytesOfUnknownEncoding:(char*)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 usedEncoding:(unsigned long long*)arg4 ;
-(long long)localizedCompare:(id)arg1 ;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(long long)localizedStandardCompare:(id)arg1 ;
-(NSRange)rangeOfComposedCharacterSequencesForRange:(NSRange)arg1 ;
-(id)componentsSeparatedByCharactersInSet:(id)arg1 ;
-(id)commonPrefixWithString:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)localizedHasPrefix:(id)arg1 ;
-(BOOL)localizedHasSuffix:(id)arg1 ;
-(BOOL)localizedCaseInsensitiveContainsString:(id)arg1 ;
-(BOOL)localizedStandardContainsString:(id)arg1 ;
-(NSRange)localizedStandardRangeOfString:(id)arg1 ;
-(id)stringByPaddingToLength:(unsigned long long)arg1 withString:(id)arg2 startingAtIndex:(unsigned long long)arg3 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(id)localizedUppercaseString;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
-(id)stringByFoldingWithOptions:(unsigned long long)arg1 locale:(id)arg2 ;
-(id)stringByApplyingTransform:(id)arg1 reverse:(BOOL)arg2 ;
-(NSRange)lineRangeForRange:(NSRange)arg1 ;
-(NSRange)paragraphRangeForRange:(NSRange)arg1 ;
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(id)displayableString;
-(BOOL)getExternalRepresentation:(id*)arg1 extendedAttributes:(id*)arg2 forWritingToURLOrPath:(id)arg3 usingEncoding:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithData:(id)arg1 usedEncoding:(unsigned long long*)arg2 ;
-(id)propertyListFromStringsFileFormat;
-(void)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 range:(NSRange)arg3 remainingRange:(NSRange*)arg4 ;
-(void)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(void)getCString:(char*)arg1 ;
-(unsigned long long)maximumLengthOfBytesUsingEncoding:(unsigned long long)arg1 ;
-(BOOL)_web_looksLikeIPAddress;
-(BOOL)_web_hasCountryCodeTLD;
-(long long)_web_countOfString:(id)arg1 ;
-(NSRange)_web_rangeOfURLResourceSpecifier_nowarn;
-(id)_web_stringByTrimmingWhitespace;
-(NSRange)_web_rangeOfURLScheme_nowarn;
-(BOOL)_web_hasCaseInsensitivePrefix:(id)arg1 ;
-(BOOL)_web_domainMatches:(id)arg1 ;
-(id)_web_domainFromHost;
-(id)_web_stringByExpandingTildeInPath;
-(id)_web_fixedCarbonPOSIXPath;
-(NSRange)_web_rangeOfURLUserPasswordHostPort;
-(NSRange)_web_rangeOfURLHost;
-(BOOL)_web_looksLikeAbsoluteURL;
-(BOOL)_web_isFileURL;
-(id)_web_URLFragment;
-(id)_web_stringByCollapsingNonPrintingCharacters;
-(unsigned)_web_extractFourCharCode;
-(id)_web_parseAsKeyValuePairHandleQuotes_nowarn:(BOOL)arg1 ;
-(id)_web_splitAtNonDateCommas_nowarn;
-(id)_web_parseAsKeyValuePair_nowarn;
-(id)_web_mimeTypeFromContentTypeHeader_nowarn;
-(id)_web_characterSetFromContentTypeHeader_nowarn;
-(id)_web_fileNameFromContentDispositionHeader_nowarn;
-(id)_web_stringByReplacingValidPercentEscapes_nowarn;
-(BOOL)_web_isJavaScriptURL;
-(id)stringByAddingPercentEscapes;
-(id)standardizedURLPath;
-(id)stringByRemovingPercentEscapes;
-(NSString *)stringByRemovingPercentEncoding;
-(id)stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1 ;
-(id)stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1 ;
-(id)_web_HTTPStyleLanguageCode;
-(id)_web_HTTPStyleLanguageCodeWithoutRegion;
-(id)linguisticTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 tokenRanges:(id*)arg5 ;
-(void)enumerateLinguisticTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 orthography:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)_flushRegularExpressionCaches;
-(NSRange)significantText;
@end

