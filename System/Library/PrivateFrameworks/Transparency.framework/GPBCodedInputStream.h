/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Transparency/Transparency-Structs.h>
@class NSData;

@interface GPBCodedInputStream : NSObject {

	GPBCodedInputStreamState state_;
	NSData* buffer_;

}
+(id)streamWithData:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)position;
-(double)readDouble;
-(float)readFloat;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(id)readString;
-(BOOL)readBool;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
-(void)checkLastTagWas:(int)arg1 ;
-(BOOL)skipField:(int)arg1 ;
-(void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)skipMessage;
-(int)readTag;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(void)readUnknownGroup:(int)arg1 message:(id)arg2 ;
-(id)readBytes;
-(int)readEnum;
-(int)readSFixed32;
-(long long)readSFixed64;
-(int)readSInt32;
-(long long)readSInt64;
@end

