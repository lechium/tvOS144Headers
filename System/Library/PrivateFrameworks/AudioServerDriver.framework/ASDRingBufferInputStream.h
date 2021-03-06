/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol ASDManagedRingBuffer;
@interface ASDRingBufferInputStream : ASDStream {

	unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> >* _bufferList;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,readonly) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
-(void)stopStream;
-(void)startStream;
-(void)setPhysicalFormat:(id)arg1 ;
-(/*^block*/id)readInputBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2 ;
@end

