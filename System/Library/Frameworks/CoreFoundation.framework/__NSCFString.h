/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <Foundation/NSMutableString.h>

@interface __NSCFString : NSMutableString
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(unsigned long long)length;
-(const char*)_fastCStringContents:(BOOL)arg1 ;
-(BOOL)isNSString__;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(const char*)cString;
-(const char*)UTF8String;
-(const char*)cStringUsingEncoding:(unsigned long long)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(BOOL)isEqualToString:(id)arg1 ;
-(const unsigned short*)_fastCharacterContents;
-(BOOL)_isCString;
-(unsigned long long)fastestEncoding;
-(unsigned long long)smallestEncoding;
-(Class)classForCoder;
-(unsigned long long)cStringLength;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(BOOL)getCString:(char*)arg1 maxLength:(unsigned long long)arg2 encoding:(unsigned long long)arg3 ;
-(id)_newSubstringWithRange:(NSRange)arg1 zone:(NSZone*)arg2 ;
-(BOOL)hasPrefix:(id)arg1 ;
-(BOOL)hasSuffix:(id)arg1 ;
-(void)getLineStart:(unsigned long long*)arg1 end:(unsigned long long*)arg2 contentsEnd:(unsigned long long*)arg3 forRange:(NSRange)arg4 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendString:(id)arg1 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(void)setString:(id)arg1 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
@end

