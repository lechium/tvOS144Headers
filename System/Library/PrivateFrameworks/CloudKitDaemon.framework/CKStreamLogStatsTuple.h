/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CKStreamLogStatsTuple : NSObject {

	NSString* _fileAndLine;
	unsigned long long _count;
	unsigned long long _size;

}

@property (nonatomic,retain) NSString * fileAndLine;                //@synthesize fileAndLine=_fileAndLine - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(NSString *)fileAndLine;
-(void)setFileAndLine:(NSString *)arg1 ;
@end
