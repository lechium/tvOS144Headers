/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEWriter.h>

@class NSMutableData;

@interface DEDataWriter : NSObject <DEWriter> {

	NSMutableData* _data;

}

@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(id)init;
-(NSMutableData *)data;
-(void)close;
-(void)setData:(NSMutableData *)arg1 ;
-(void)writeData:(id)arg1 ;
@end
