/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface MLCTensorData : NSObject {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) void* bytes; 
@property (nonatomic,readonly) unsigned long long length; 
+(id)dataWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
+(id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)dataWithImmutableBytesNoCopy:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(void*)bytes;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithDataNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithData:(void*)arg1 length:(unsigned long long)arg2 ;
@end

