/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DAAPKit.framework/DAAPKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData;

@interface DKDAAPWriterContainer : NSObject {

	unsigned _code;
	NSMutableData* _childData;

}

@property (nonatomic,readonly) unsigned code;              //@synthesize code=_code - In the implementation block
@property (retain) NSMutableData * childData;              //@synthesize childData=_childData - In the implementation block
-(unsigned)code;
-(id)initWithCode:(unsigned)arg1 ;
-(NSMutableData *)childData;
-(id)formattedOutputData;
-(void)setChildData:(NSMutableData *)arg1 ;
@end

