/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:45 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface MFByteSet : NSObject <NSCopying, NSMutableCopying> {

	char mySet[32];

}
+(id)ASCIIByteSet;
+(id)asciiWhitespaceSet;
+(id)nonASCIIByteSet;
+(id)suspiciousCodepage1252ByteSet;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)invertedSet;
-(id)initWithCString:(const char*)arg1 ;
-(id)initWithRange:(NSRange)arg1 ;
-(id)_initWithSet:(const char*)arg1 ;
-(BOOL)byteIsMember:(char)arg1 ;
@end

