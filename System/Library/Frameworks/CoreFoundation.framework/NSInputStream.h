/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSStream.h>

@interface NSInputStream : NSStream {

	unsigned char _reserved[128];

}

@property (readonly) BOOL hasBytesAvailable; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)inputStreamWithFileAtPath:(id)arg1 ;
+(id)inputStreamWithData:(id)arg1 ;
+(id)inputStreamWithURL:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initWithURL:(id)arg1 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(BOOL)hasBytesAvailable;
-(SCD_Struct_NS11)_cfStreamError;
@end

