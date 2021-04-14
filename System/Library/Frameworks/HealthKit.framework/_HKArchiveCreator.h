/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKArchiveWriter.h>

@class NSURL, NSFileHandle;

@interface _HKArchiveCreator : NSObject <_HKArchiveWriter> {

	archiveRef _archive;
	NSURL* _archiveURL;
	NSFileHandle* _fileHandle;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;                //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
-(void)dealloc;
-(NSFileHandle *)fileHandle;
-(void)closeArchive;
-(id)initWithURL:(id)arg1 fileHandle:(id)arg2 archiveType:(long long)arg3 ;
-(BOOL)archiveIsValid;
-(long long)writeData:(const void*)arg1 ofLength:(unsigned long long)arg2 ;
-(void)_addDataOfSize:(long long)arg1 toPathInArchive:(id)arg2 fromByteProvider:(/*^block*/id)arg3 ;
-(id)initWithURL:(id)arg1 archiveType:(long long)arg2 ;
-(id)initWithFileHandle:(id)arg1 archiveType:(long long)arg2 ;
-(void)addFileToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(void)addDataToArchive:(id)arg1 pathInArchive:(id)arg2 ;
-(NSURL *)archiveURL;
@end

