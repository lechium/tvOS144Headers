/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Memories/PHAssetWriter.h>

@class NSData;

@interface PHImageAssetWriter : PHAssetWriter {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
-(NSData *)data;
-(id)request;
-(void)setData:(NSData *)arg1 ;
-(unsigned long long)estimatedOutputSizeWithError:(id*)arg1 ;
-(id)transfer;
@end

