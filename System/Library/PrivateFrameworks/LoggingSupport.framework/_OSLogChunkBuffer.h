/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@interface _OSLogChunkBuffer : NSObject {

	BOOL _allocated;
	const char* _data;
	unsigned long long _sz;

}

@property (nonatomic,readonly) const char* data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long size;              //@synthesize sz=_sz - In the implementation block
-(void)dealloc;
-(unsigned long long)size;
-(const char*)data;
-(id)initWithChunk:(tracev3_chunk_s*)arg1 subchunk:(catalog_subchunk_s*)arg2 ;
@end

