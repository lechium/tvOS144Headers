/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEWriter.h>

@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter> {

	NSURL* _dest;
	NSFileHandle* _file;

}

@property (nonatomic,retain) NSURL * dest;                     //@synthesize dest=_dest - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;              //@synthesize file=_file - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(NSFileHandle *)file;
-(void)setFile:(NSFileHandle *)arg1 ;
-(NSURL *)dest;
-(void)setDest:(NSURL *)arg1 ;
@end

