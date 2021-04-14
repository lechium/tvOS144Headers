/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MFMimeCharset : NSObject {

	unsigned _encoding;
	NSString* _primaryLanguage;
	NSString* _charsetName;
	unsigned _coversLargeUnicodeSubset : 1;
	unsigned _useBase64InHeaders : 1;
	unsigned _canBeUsedForOutgoingMessages : 1;

}
+(id)preferredMimeCharset;
+(id)allMimeCharsets:(BOOL)arg1 ;
+(id)allMimeCharsets;
+(id)charsetForEncoding:(unsigned)arg1 ;
-(id)description;
-(void)dealloc;
-(id)primaryLanguage;
-(id)displayName;
-(unsigned)encoding;
-(id)initWithEncoding:(unsigned)arg1 ;
-(id)charsetName;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(BOOL)canBeUsedForOutgoingMessages;
-(BOOL)coversLargeUnicodeSubset;
-(BOOL)useBase64InHeaders;
@end

